/*****************************************************************************/
/*         (c) Copyright, Real-Time Innovations, All rights reserved.        */
/*                                                                           */
/*         Permission to modify and use for internal purposes granted.       */
/* This software is provided "as is", without warranty, express or implied.  */
/*                                                                           */
/*****************************************************************************/

/* ========================================================================= */
/* RTI Routing Service Socket Adapter                                        */
/* ========================================================================= */
/* This a pluggable adapter that reads bytes from a socket                   */
/* providing them to Routing Service as DynamicData samples                  */
/* and receives samples from Routing Service to write them in a socket       */
/*                                                                           */
/* To customize to your data format, edit SampleParsing.c                    */
/*                                                                           */
/* The output part of this adapter is designed to open a TCP server port     */
/* for every StreamWriter (route output). That means that more than one      */
/* route can't write to the same port.                                       */
/*                                                                           */
/* An alternative design would open the TCP server port on the Connection    */
/* object (in the DomainRoute) so that all the routes inside would           */
/* write to the same port                                                    */
/*                                                                           */ 
/* ========================================================================= */

#include <stdio.h>
#include <string.h>

/*
 * The mapping between samples and bytes received in the socket is implemented
 * in SampleParsing.c
 */

#include "SocketUtil.h"
#include "SampleParsing.h"
#include "ndds/ndds_c.h"
#include "routingservice/routingservice_adapter.h"

#ifdef RTI_WIN32
  #define DllExport __declspec( dllexport )
  #include <Winsock2.h>
  #include <process.h>
#else
  #define DllExport
  #include <sys/select.h>
  #include <semaphore.h>
  #include <pthread.h> 
#endif


/* ========================================================================= */
/*                                                                           */
/* Data types                                                                */
/*                                                                           */
/* ========================================================================= */


struct RTI_RoutingServiceSocketAdapterPlugin {
    struct RTI_RoutingServiceAdapterPlugin _base;
};

/*****************************************************************************/

struct RTI_RoutingServiceSocketConnection {
    struct RTI_RoutingServiceSocketAdapterPlugin * adapter;
};


/*****************************************************************************/

struct RTI_RoutingServiceSocketStreamReader {
    struct RTI_RoutingServiceStreamReaderListener listener;
    const struct RTI_RoutingServiceStreamInfo * info;

    struct DDS_TypeCode * _typeCode;
    char * _readBuffer;
    int _readBufferLength;
    int _readBufferCurrentLength;

    char * _serializedSampleBuffer;
    int _serializedSampleBufferLength;
    int _serializedSampleBufferCurrentLength;

    struct DDS_DynamicData ** _dynamicDataBuffer;
    int _dynamicDataBufferLength;

    /* The file descriptor sets used in select to get notified when
       a socket contained in the set has data */
    fd_set rset;
    fd_set eset;

    struct sockaddr_in _dstAddress;
    char * _host;

    int _readSock;
    int _unblockSock;

    int _newReadSock;

    int _run;

  #ifdef RTI_WIN32
    HANDLE _thread;
    HANDLE _bufferMutex;
    HANDLE _bufferFullSem;
  #else 
    pthread_t _thread;
    pthread_mutex_t _bufferMutex;
    sem_t _bufferFullSem;
  #endif
};

/*****************************************************************************/

#define RTI_SOCKET_ADAPTER_MAX_CLIENTS 128

struct RTI_RoutingServiceSocketStreamWriter {
    int _serverSock;
    int _clientSocks[RTI_SOCKET_ADAPTER_MAX_CLIENTS];
    int _clientSockCount;

    struct sockaddr_in _serverAddress;

    int _maxSampleSize;
    char * _writeBuffer;
    int _infoVerbosity;

    int _run;

  #ifdef RTI_WIN32
    HANDLE _thread;
    HANDLE _clientsMutex;
  #else 
    pthread_t _thread;
    pthread_mutex_t _clientsMutex;
  #endif
    
};


/* ========================================================================= */
/*                                                                           */
/* Stream reader methods                                                     */
/*                                                                           */
/* ========================================================================= */

void * RTI_RoutingServiceSocketStreamReader_run(void * threadParam) {

    struct RTI_RoutingServiceSocketStreamReader * self = 
        (struct RTI_RoutingServiceSocketStreamReader *) threadParam;
    int bufferFull = 0;
    int ret = -1;
    int readLength;
    struct timeval timeout, timeoutCopy;
    int currentSock; 

    timeout.tv_sec = 2;
    timeout.tv_usec = 0;

    currentSock = self->_readSock;

    /*
     * This thread will notify of data availability in the socket
     */
    while (self->_run) {

        if (self->_readSock != currentSock) {
            /* The connection can change dynamically. We may have
             * to use a different socket. See the update() operation.
             */
            RTI_RoutingServiceSocket_close_socket(currentSock);
            currentSock = self->_readSock;
        }

        /* Initialize the read and error fd sets */
        FD_ZERO(&self->rset);
        FD_ZERO(&self->eset);
        FD_SET(currentSock, &self->rset);
        FD_SET(currentSock, &self->eset);

        /* We call select to get notified when the socket has data
         * or if an error occured. This way we don't block the thread forever.
         *
         * TODO: a more efficient way to unblock is using a UDP socket
         *       for that purpose. In the current implementation, we unblock
         *       when the timeout expires and then we check if the thread
         *       sould exit
         */
           
        timeoutCopy = timeout;
        ret = select(currentSock+1, 
                     &self->rset, 
                     NULL, 
                     &self->eset, 
                     &timeoutCopy);
        
        if (ret < 0) {
            printf("RTI_RoutingServiceSocketStreamReader_run: select error\n");
            self->_run = 0;
            break;
        } else if (ret == 0) {
            continue;
        }

        if (FD_ISSET(currentSock, &self->eset)) {
            printf("RTI_RoutingServiceSocketStreamReader_run: socket error\n");
            break;
        }

        /*
         * If the read socket has data, we use read it
         */
        if (FD_ISSET(currentSock, &self->rset)) {

          #ifdef RTI_WIN32
            WaitForSingleObject(self->_bufferMutex, INFINITE);
          #else
            pthread_mutex_lock(&self->_bufferMutex);
          #endif
            /* vvvvvvvvvvv Protect read buffer vvvvvvvvvvv */

            readLength = RTI_RoutingServiceSocket_socket_receive(
                    currentSock, 
                    self->_readBuffer + self->_readBufferCurrentLength, 
                    self->_readBufferLength - self->_readBufferCurrentLength);

            self->_readBufferCurrentLength += readLength;

            bufferFull = 
                self->_readBufferCurrentLength == self->_readBufferLength;

            /* ^^^^^^^^^^^^ Protect read buffer ^^^^^^^^^^^^ */
          #ifdef RTI_WIN32
            ReleaseMutex(self->_bufferMutex);
          #else
            pthread_mutex_unlock(&self->_bufferMutex);
          #endif

            if (readLength > 0) {
                /*
                 * Notify. The read() operation will parse the buffer
                 */
                self->listener.on_data_available(
                    self, self->listener.listener_data);

                if (bufferFull) {
                    /* Buffer full -- we can't read anymore for now
                     *
                     * The read() operation will notify 
                     * when the buffer is emptied
                     */
                  #ifdef RTI_WIN32
                    WaitForSingleObject(self->_bufferFullSem, INFINITE);
                  #else
                    sem_wait(&self->_bufferFullSem);
                  #endif
                }
            }
        }
    }

    return NULL;
}

/*****************************************************************************/

int RTI_RoutingServiceSocketStreamReader_prepareDynamicDataSample(
     struct RTI_RoutingServiceSocketStreamReader * self,
     struct DDS_DynamicData ** samplePtr,
     RTI_RoutingServiceEnvironment * env) {

    struct DDS_DynamicDataProperty_t dynamicDataProps = 
        DDS_DynamicDataProperty_t_INITIALIZER;

    if (*samplePtr == NULL) {
        *samplePtr = DDS_DynamicData_new(self->_typeCode, &dynamicDataProps);
        if (*samplePtr == NULL) {
            RTI_RoutingServiceEnvironment_set_error(
                env, "Error creating dynamic data sample");
            return 0;
        }
    } else {
        if (DDS_DynamicData_clear_all_members(*samplePtr) != DDS_RETCODE_OK) {
            RTI_RoutingServiceEnvironment_set_error(
                env, "Error clearing dynamic data sample members");
            return 0;
        }
    }

    return 1;
}

/*****************************************************************************/

void RTI_RoutingServiceSocketStreamReader_read(
    RTI_RoutingServiceStreamReader stream_reader,
    RTI_RoutingServiceSample ** sample_list,
    RTI_RoutingServiceSampleInfo ** info_list,
    int * count,
    RTI_RoutingServiceEnvironment * env) 
{
    int i, result;
    int unblockReadThread = 0;
    char * bufferIt = NULL;
    int remainingBufferLength;
    struct RTI_RoutingServiceSocketStreamReader * self = 
        (struct RTI_RoutingServiceSocketStreamReader *) stream_reader;


    /* 
     * We always return to routing service the same buffer were we will
     * parse the dynamic data samples everytime this read() operation
     * is called.
     *
     * Since read() will never be called in paralell by routing service
     * we don't have to protect _dynamicDataBuffer.
     */
    *sample_list = (void **) self->_dynamicDataBuffer;

    /*
     * This adapter doesn't provide sample info
     */
    *info_list = NULL;
    *count = 0;

  #ifdef RTI_WIN32
    WaitForSingleObject(self->_bufferMutex, INFINITE);
  #else
    pthread_mutex_lock(&self->_bufferMutex);
  #endif
  
    /* vvvvvvvvvvv Protect read buffer vvvvvvvvvvv */

    /* 
     * Copy from the read buffer that is filled up in the
     * read thread to another buffer for parsing the
     * sample(s) we may have received 
     */
    memcpy(self->_serializedSampleBuffer + 
            self->_serializedSampleBufferCurrentLength,
           self->_readBuffer, 
           self->_readBufferCurrentLength);

    if (self->_readBufferCurrentLength == self->_readBufferLength) {
        unblockReadThread = 1;
    }

    self->_serializedSampleBufferCurrentLength += 
        self->_readBufferCurrentLength;

    self->_readBufferCurrentLength = 0;

    /* ^^^^^^^^^^^^ Protect read buffer ^^^^^^^^^^^^ */
  #ifdef RTI_WIN32
    ReleaseMutex(self->_bufferMutex);
  #else
    pthread_mutex_unlock(&self->_bufferMutex);
  #endif
    

    if (unblockReadThread) {
        /* The read buffer is empty, if the thread was blocked
         * because it got full before, we'll wake it up now 
         */
      #ifdef RTI_WIN32
        ReleaseSemaphore(self->_bufferFullSem, 1, NULL);
      #else
        sem_post(&self->_bufferFullSem);
      #endif
    }

    i = 0;
    bufferIt = self->_serializedSampleBuffer;
    remainingBufferLength = self->_serializedSampleBufferCurrentLength;

    do {
        /* We may need to resize our sample buffer. */
        if (i == self->_dynamicDataBufferLength) {
            self->_dynamicDataBuffer = (struct DDS_DynamicData **)
                RTI_RoutingServiceUtil_resize_buffer((void *) self->_dynamicDataBuffer,
                                                     self->_dynamicDataBufferLength,
                                                     self->_dynamicDataBufferLength*2,
                                                     sizeof(struct DDS_DynamicData **));
            if (self->_dynamicDataBuffer == NULL) {
                RTI_RoutingServiceEnvironment_set_error(
                    env, "Fatal error: could not grow buffer to %d bytes",
                    self->_dynamicDataBufferLength*2);
                self->_dynamicDataBufferLength = 0;
                self->_run = 0;
                return;
            }

            self->_dynamicDataBufferLength *= 2;
        }

        /*
         * Create a new dynamic data sample in the buffer or reuse (and clean)
         * an existing one.
         */
        if (!RTI_RoutingServiceSocketStreamReader_prepareDynamicDataSample(
            self, &self->_dynamicDataBuffer[i], env)) {
            return;
        }

        /* 
         * While we can extract samples from the buffer, we keep
         * calling parse_sample 
         */
        result = RTI_RoutingServiceSocketAdapter_parse_sample(
                    self->_dynamicDataBuffer[i], 
                    bufferIt, 
                    remainingBufferLength,
                    env);

        /* result shall  be:
         *   < 0 to notify an error
         *  == 0 to indicate that no sample was parsed
         *   > 0 to indicate the size in bytes of the serialized sample parsed
         *       that is, the ammount of bytes processed from the buffer
         */
        if (result < 0) {
            /* The previous method can set its own, more specific error,
               in that case that message will prevail over this one set here*/
            RTI_RoutingServiceEnvironment_set_error(
                env, "Error parsing sample");
            self->_serializedSampleBufferCurrentLength = 0;
            return;
        }

        if (RTI_RoutingServiceEnvironment_get_verbosity(env) >= 
                RTI_ROUTING_SERVICE_VERBOSITY_DEBUG) {
            if (result > 0) {
                printf("[SocketAdapter] sample received:\n");
                DDS_DynamicData_print(self->_dynamicDataBuffer[i], stdout, 0);
            } else {
                printf("[SocketAdapter] no sample available in buffer\n");
            }
        }

        if (result > 0) {
            i++;
            bufferIt += result;
            remainingBufferLength -= result;
        }
    } while (result > 0 && remainingBufferLength > 0);

    if (bufferIt != self->_serializedSampleBuffer) {
        /* 
         * Move the remaining bytes of the buffer to the
         * beginning for ulterior calls to read() 
         */
        if (remainingBufferLength > 0) {
            memmove(self->_serializedSampleBuffer,
                    bufferIt, remainingBufferLength);
        }
        self->_serializedSampleBufferCurrentLength = remainingBufferLength;
    }

    /* Indicate how many samples we're providing */
    *count = i;
}


/*****************************************************************************/

void RTI_RoutingServiceSocketStreamReader_return_loan(
        RTI_RoutingServiceStreamReader stream_reader,
        RTI_RoutingServiceSample * sample_list,
        RTI_RoutingServiceSampleInfo * info_list,
        int count,
        RTI_RoutingServiceEnvironment * env) 
{
    /* 
     * No need to clean resources, we are using an internal buffer 
     * to provide the samples we parse
     */
}


int RTI_RoutingServiceSocketStreamReader_connect(
    struct RTI_RoutingServiceSocketStreamReader * self,
    const struct RTI_RoutingServiceProperties * properties,
    RTI_RoutingServiceEnvironment * env) {

    const char * host = NULL;
    const char * portProp = NULL;
    int portIntProp;
    struct sockaddr_in addr;
    int sock;

    /*
     * Get the configuration properties in <route>/<input>/<property>
     */

    host = RTI_RoutingServiceProperties_lookup_property(
        properties, "Host");
    if (host == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Missing property Host");
        return 0;
    }

    portProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "Port");
    if (portProp == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Missing property Port");
        return 0;
    } else {
        portIntProp = atoi(portProp);
        if(portIntProp <= 0 || portIntProp > 65535) {
            RTI_RoutingServiceEnvironment_set_error(
                env, "Incorrect value for property Port");
            return 0;
        }
    }

    addr.sin_family = AF_INET;
    addr.sin_port = htons((unsigned short)portIntProp);

    if(!RTI_RoutingServiceSocket_get_host_by_name(
        &addr.sin_addr, host)) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Could not resolve host name %s", host);
        return 0;
    }

    sock = RTI_RoutingServiceSocket_create_socket(0);

    if (sock < 0) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Error creating TCP socket");
        return 0;
    }

    if (!RTI_RoutingServiceSocket_connect_tcp_socket(
            sock, &addr)) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Could not connect to %s:%d",
            host, portIntProp);
        return 0;
    }

    if (RTI_RoutingServiceEnvironment_get_verbosity(env) >= 
            RTI_ROUTING_SERVICE_VERBOSITY_INFO) {
        printf("[SocketAdapter] Reader connected to %s:%d\n",
               host, portIntProp);
    }

    self->_dstAddress = addr;
    self->_readSock = sock;

    return 1;
}

/*****************************************************************************/

void RTI_RoutingServiceSocketStreamReader_update(
    RTI_RoutingServiceAdapterEntity stream_reader,
    const struct RTI_RoutingServiceProperties * properties,
    RTI_RoutingServiceEnvironment * env)
{
    struct RTI_RoutingServiceSocketStreamReader * self =
        (struct RTI_RoutingServiceSocketStreamReader *) stream_reader;

    const char * maxSampleSizeProp = NULL;

    maxSampleSizeProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "MaxSampleSize");
    if (maxSampleSizeProp != NULL) {
        /*
         * We don't allow changing the buffer size
         */
        if (self->_readBufferLength != atoi(maxSampleSizeProp)+1) {
            RTI_RoutingServiceEnvironment_set_error(
                env, "Immutable property MaxSampleSize");
            return;
        }
    }

    /*
     * Remote administration is supported in this adapter. If Routing Service
     * receives a command to update a route where the socket adapter is
     * the input we will be called here if some property changes. If the 
     * property that  changes is the host or the port, we 
     * are going to establish  a new connection on the fly
     */
    RTI_RoutingServiceSocketStreamReader_connect(self, properties, env);
}


/* ========================================================================= */
/*                                                                           */
/* Stream stream_writer methods                                              */
/*                                                                           */
/* ========================================================================= */


void * RTI_RoutingServiceSocketStreamWriter_run(void * threadParam) {

    struct RTI_RoutingServiceSocketStreamWriter * self = 
        (struct RTI_RoutingServiceSocketStreamWriter *) threadParam;
    int i;
    int currentSock;
    int clientSock;
    struct sockaddr_in address;
    socklen_t addressLen = sizeof(struct sockaddr);

    currentSock = self->_serverSock;

    while (self->_run) {

        if (self->_serverSock != currentSock) {
            RTI_RoutingServiceSocket_close_socket(currentSock);
            currentSock = self->_serverSock;
        }

        clientSock = (int)accept(
            currentSock, (struct sockaddr *)&address, &addressLen);

        if (clientSock < 0) {
            printf("[SocketStreamWriter] error opening connection\n");
            continue;
        }

      #ifdef RTI_WIN32
        WaitForSingleObject(self->_clientsMutex, INFINITE);
      #else
        pthread_mutex_lock(&self->_clientsMutex);
      #endif

        /* Add the socket to the array */

        /* First try and find an empty position left
           by a disconnected or failing socket */
        for (i = 0; i < self->_clientSockCount; i++) {
            if (self->_clientSocks[i] == -1) {
                self->_clientSocks[i] = clientSock;
                break;
            }
        }

        /* If no spot is available, add a new one at the end */
        if (i == self->_clientSockCount) {
            self->_clientSocks[self->_clientSockCount++] = clientSock;
        }

      #ifdef RTI_WIN32
        ReleaseMutex(self->_clientsMutex);
      #else
        pthread_mutex_unlock(&self->_clientsMutex);
      #endif
        
        if (self->_infoVerbosity) {
            printf("[SocketStreamWriter] Accepted connection from %s\n",
                   inet_ntoa(address.sin_addr));
        }
        

        if (self->_clientSockCount == RTI_SOCKET_ADAPTER_MAX_CLIENTS) {
            printf("[SocketStreamWriter] reached max clients\n");
            break;
        }
      
    }

    return NULL;
}

/* ========================================================================= */

int RTI_RoutingServiceSocketStreamWriter_write(
    RTI_RoutingServiceStreamWriter stream_writer,
    const RTI_RoutingServiceSample * sample_list,
    const RTI_RoutingServiceSampleInfo * info_list,
    int count,
    RTI_RoutingServiceEnvironment * env) 
{
    struct RTI_RoutingServiceSocketStreamWriter * self = 
        (struct RTI_RoutingServiceSocketStreamWriter *) stream_writer;
    struct DDS_DynamicData * sample = NULL;
    struct DDS_SampleInfo * info = NULL;
    struct sockaddr_in addr;
    int i, j, writeCount = 0, sampleLength;

    if (self->_clientSockCount == 0) {
        return 0;
    }

  #ifdef RTI_WIN32
    WaitForSingleObject(self->_clientsMutex, INFINITE);
  #else
    pthread_mutex_lock(&self->_clientsMutex);
  #endif

    memset(&addr, 0, sizeof (struct sockaddr_in));

    for(i=0; i<count; i++) {

        sample = (struct DDS_DynamicData *) sample_list[i];
        info = (struct DDS_SampleInfo *) 
            (info_list == NULL ? NULL : info_list[i]);

        if (info != NULL && !info->valid_data) {
            continue;
        }

        sampleLength = RTI_RoutingServiceSocketAdapter_serialize_sample(
                sample, self->_writeBuffer, self->_maxSampleSize, env);

        if (sampleLength < 0) {
            return i;
        } else if (sampleLength == 0) {
            continue;
        }

        for (j=0; j<self->_clientSockCount; j++) {
            if (self->_clientSocks[j] == -1) {
                /* Empty position in the array */
                continue;
            }

            if(!RTI_RoutingServiceSocket_socket_send(
                self->_clientSocks[j], &addr, 
                self->_writeBuffer, sampleLength)) {

                if (RTI_RoutingServiceEnvironment_get_verbosity(env) >= 
                    RTI_ROUTING_SERVICE_VERBOSITY_WARN) {
                    printf("[SocketStreamWriter] Connection to client closed\n");
                }

                /* Close the failing socket and leave its spot in the array
                   available for later use */
                RTI_RoutingServiceSocket_close_socket(self->_clientSocks[j]);
                self->_clientSocks[j] = -1;
            }
        }

        writeCount++;
    }

   #ifdef RTI_WIN32
     ReleaseMutex(self->_clientsMutex);
   #else
     pthread_mutex_unlock(&self->_clientsMutex);
   #endif

    return count;
}

/* ========================================================================= */
/*                                                                           */
/* Connection methods                                                        */
/*                                                                           */
/* ========================================================================= */

RTI_RoutingServiceSession 
RTI_RoutingServiceSocketConnection_create_session(
    RTI_RoutingServiceConnection connection,
    const struct RTI_RoutingServiceProperties * properties,
    RTI_RoutingServiceEnvironment * env) 
{

    /* We don't need sessions in this example, 
     * we can just return the connection
     * or we could not have implemented this function 
     */
    return connection;
}

/*****************************************************************************/

void RTI_RoutingServiceSocketConnection_delete_session(
    RTI_RoutingServiceConnection connection,
    RTI_RoutingServiceSession session,
    RTI_RoutingServiceEnvironment * env) 
{
    /* We don't need sessions in this example */
}


/*****************************************************************************/

void RTI_RoutingServiceSocketStreamReader_delete(
    struct RTI_RoutingServiceSocketStreamReader * self);

/*****************************************************************************/

RTI_RoutingServiceStreamReader 
RTI_RoutingServiceSocketConnection_create_stream_reader(
    RTI_RoutingServiceConnection connection,
    RTI_RoutingServiceSession session,
    const struct RTI_RoutingServiceStreamInfo * stream_info,
    const struct RTI_RoutingServiceProperties * properties,
    const struct RTI_RoutingServiceStreamReaderListener * listener,
    RTI_RoutingServiceEnvironment * env) 
{

    struct RTI_RoutingServiceSocketStreamReader * stream_reader = NULL;
    int ok = 0;
    const char * maxSampleSizeProp = NULL;
    int maxSampleSizeIntProp;
    int error;
  #ifdef RTI_WIN32
  #else
    pthread_attr_t threadAttr;
  #endif


    maxSampleSizeProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "MaxSampleSize");
    if (maxSampleSizeProp == NULL) {
        maxSampleSizeIntProp = 4096;
    } else {
        maxSampleSizeIntProp = atoi(maxSampleSizeProp);
        if(maxSampleSizeIntProp <= 0) {
            RTI_RoutingServiceEnvironment_set_error(
                env, "Property MaxSampleSize needs a positive value");
            return NULL;
        }
    }

    /*
     * Check that the type representation is DDS type code
     */
    if (stream_info->type_info.type_representation_kind != 
        RTI_ROUTING_SERVICE_TYPE_REPRESENTATION_DYNAMIC_TYPE) {

        RTI_RoutingServiceEnvironment_set_error(
            env, "Unsupported type format");
        return NULL;
    }

    /*
     * Create the stream reader object
     */

    stream_reader = calloc(
        1, sizeof(struct RTI_RoutingServiceSocketStreamReader));

    if (stream_reader == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
        return NULL;
    }

  #ifdef RTI_WIN32
    stream_reader->_bufferMutex = CreateMutex(NULL, 0, NULL);
    stream_reader->_bufferFullSem = CreateSemaphore(NULL, 0, 1, NULL);
  #else
    pthread_attr_init(&threadAttr);
    pthread_attr_setdetachstate(&threadAttr, PTHREAD_CREATE_JOINABLE);
    pthread_mutex_init(&stream_reader->_bufferMutex, NULL);
    sem_init(&stream_reader->_bufferFullSem, 0, 0);
  #endif

    stream_reader->_readSock = -1;
    stream_reader->_unblockSock = -1;
    stream_reader->_readBuffer = NULL;
    stream_reader->_serializedSampleBuffer = NULL;
    stream_reader->_dynamicDataBuffer = NULL;
    stream_reader->_readBufferLength = maxSampleSizeIntProp+1;
    stream_reader->_readBufferCurrentLength = 0;
    stream_reader->_serializedSampleBufferLength = 
        stream_reader->_readBufferLength * 2;
    stream_reader->_serializedSampleBufferCurrentLength = 0;
    stream_reader->_dynamicDataBufferLength = 1024;


    stream_reader->_readBuffer = 
        calloc(stream_reader->_readBufferLength, sizeof(char));
    
    if (stream_reader->_readBuffer == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
        goto done;
    }

    stream_reader->_serializedSampleBuffer = 
        calloc(stream_reader->_serializedSampleBufferLength, sizeof(char));

    if (stream_reader->_serializedSampleBuffer == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
        goto done;
    }

    stream_reader->_dynamicDataBuffer = 
        calloc(stream_reader->_dynamicDataBufferLength, 
               sizeof(struct DDS_DynamicData *));

    if (stream_reader->_dynamicDataBuffer == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
        goto done;
    }

    /*
     * Socket create and bind
     */
    if(!RTI_RoutingServiceSocketStreamReader_connect(
        stream_reader, properties, env)) {
        goto done;
    }

    stream_reader->listener = *listener;    
    stream_reader->_typeCode = 
        (struct DDS_TypeCode *) stream_info->type_info.type_representation;
    stream_reader->_run = 1;

  #ifdef RTI_WIN32
    stream_reader->_thread = (HANDLE) _beginthread(
        (void(__cdecl*)(void*))RTI_RoutingServiceSocketStreamReader_run,
        0, (void*)stream_reader);
    error = !stream_reader->_thread;
  #else
    error = pthread_create(
                &stream_reader->_thread, 
                &threadAttr, 
                RTI_RoutingServiceSocketStreamReader_run,
                (void *)stream_reader);
  #endif

    if(error) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Error creating thread");
        goto done;
    }

    ok = 1;
  done:
  #ifndef RTI_WIN32
    pthread_attr_destroy(&threadAttr);
  #endif
    if (!ok && stream_reader != NULL) {
        RTI_RoutingServiceSocketStreamReader_delete(stream_reader);
        stream_reader = NULL;
    }
    return (RTI_RoutingServiceStreamReader) stream_reader;
}

/*****************************************************************************/

void RTI_RoutingServiceSocketStreamReader_delete(
    struct RTI_RoutingServiceSocketStreamReader * self)
{
    if (self->_readSock >= 0) {
        RTI_RoutingServiceSocket_close_socket(self->_readSock);
        self->_readSock = -1;
    }

  #ifdef RTI_WIN32
    CloseHandle(self->_bufferFullSem);
    CloseHandle(self->_bufferMutex);
  #else
    sem_destroy(&self->_bufferFullSem);
    pthread_mutex_destroy(&self->_bufferMutex);
  #endif

    if (self->_readBuffer != NULL) {
        free(self->_readBuffer);
        self->_readBuffer = NULL;
    }

    if (self->_serializedSampleBuffer != NULL) {
        free(self->_serializedSampleBuffer);
        self->_serializedSampleBuffer = NULL;
    }

    free(self);
}

/*****************************************************************************/

void RTI_RoutingServiceSocketConnection_delete_stream_reader(
        RTI_RoutingServiceConnection connection,
	RTI_RoutingServiceStreamReader stream_reader,
	RTI_RoutingServiceEnvironment * env) {

    struct RTI_RoutingServiceSocketStreamReader * self =
        (struct RTI_RoutingServiceSocketStreamReader *) stream_reader;

  #ifndef RTI_WIN32
    void * value;
  #endif

    self->_run = 0;

    /* In case the thread is waiting there */
  #ifdef RTI_WIN32
    ReleaseSemaphore(self->_bufferFullSem, 1, NULL);
    WaitForSingleObject(self->_thread, INFINITE);
  #else
    sem_post(&self->_bufferFullSem);
    pthread_join(self->_thread, &value);
  #endif

    RTI_RoutingServiceSocketStreamReader_delete(self);

}

/*****************************************************************************/

void RTI_RoutingServiceSocketStreamWriter_delete(
    struct RTI_RoutingServiceSocketStreamWriter * self);

/*****************************************************************************/

int RTI_RoutingServiceSocketStreamWriter_bind_server(
    struct RTI_RoutingServiceSocketStreamWriter * self,
    const struct RTI_RoutingServiceProperties * properties,
    RTI_RoutingServiceEnvironment * env) {

    const char * portProp = NULL;
    int portIntProp;
    struct sockaddr_in addr;
    int sock;

    portProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "Port");
    if (portProp == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Missing property Port");
        return 0;
    } else {
        portIntProp = atoi(portProp);
        if(portIntProp <= 0 || portIntProp > 65535) {
            RTI_RoutingServiceEnvironment_set_error(
                env, "Incorrect value for property Port");
            return 0;
        }
    }

    sock = RTI_RoutingServiceSocket_create_socket(0);

    if (sock < 0) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Error creating TCP socket");
        return 0;
    }

    if (!RTI_RoutingServiceSocket_bind_tcp_server_socket(
            sock, &addr, portIntProp)) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Could not bind TCP server to port %d",
            portIntProp);
        return 0;
    }

    if (RTI_RoutingServiceEnvironment_get_verbosity(env) >= 
            RTI_ROUTING_SERVICE_VERBOSITY_INFO) {
        printf("[SocketAdapter] Writer TCP server bound to port %d\n",
               portIntProp);
    }

    self->_serverAddress = addr;
    self->_serverSock = sock;

    return 1;
}

/*****************************************************************************/

RTI_RoutingServiceStreamWriter 
RTI_RoutingServiceSocketConnection_create_stream_writer(
        RTI_RoutingServiceConnection connection,
	RTI_RoutingServiceSession session,
	const struct RTI_RoutingServiceStreamInfo * stream_info,
	const struct RTI_RoutingServiceProperties * properties,
	RTI_RoutingServiceEnvironment * env) 
{

    struct RTI_RoutingServiceSocketStreamWriter * stream_writer = NULL;
    int ok = 0;
    const char * maxSampleSizeProp = NULL;
    int maxSampleSizeIntProp;
    int error;
  #ifndef RTI_WIN32
    pthread_attr_t threadAttr;
  #endif

    maxSampleSizeProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "MaxSampleSize");
    if (maxSampleSizeProp == NULL) {
        maxSampleSizeIntProp = 4096;
    } else {
        maxSampleSizeIntProp = atoi(maxSampleSizeProp);
        if(maxSampleSizeIntProp <= 0) {
            RTI_RoutingServiceEnvironment_set_error(
                env, "Property MaxSampleSize needs a positive value");
            return NULL;
        }
    }

    /*
     * Check that the type representation is DDS type code
     */
    if (stream_info->type_info.type_representation_kind != 
        RTI_ROUTING_SERVICE_TYPE_REPRESENTATION_DYNAMIC_TYPE) {

        RTI_RoutingServiceEnvironment_set_error(
            env, "Unsupported type format");
        return NULL;
    }

    /*
     * Create the stream writer object
     */

    stream_writer = calloc(
        1, sizeof(struct RTI_RoutingServiceSocketStreamWriter));

    if (stream_writer == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
        return NULL;
    }


  #ifdef RTI_WIN32
    stream_writer->_clientsMutex = CreateMutex(NULL, 0, NULL);
  #else
    pthread_attr_init(&threadAttr);
    pthread_attr_setdetachstate(&threadAttr, PTHREAD_CREATE_JOINABLE);
    pthread_mutex_init(&stream_writer->_clientsMutex, NULL);
  #endif

    stream_writer->_infoVerbosity =
        RTI_RoutingServiceEnvironment_get_verbosity(env) >=
            RTI_ROUTING_SERVICE_VERBOSITY_INFO;

    stream_writer->_serverSock = -1;
    stream_writer->_clientSockCount = 0;
    stream_writer->_maxSampleSize = maxSampleSizeIntProp;

    stream_writer->_writeBuffer = 
        calloc(stream_writer->_maxSampleSize, sizeof(char));
    
    if (stream_writer->_writeBuffer == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
        goto done;
    }

    /*
     * Socket create and bind
     */
    if(!RTI_RoutingServiceSocketStreamWriter_bind_server(
        stream_writer, properties, env)) {
        goto done;
    }

    stream_writer->_run = 1;

  #ifdef RTI_WIN32
    stream_writer->_thread = (HANDLE) _beginthread(
        (void(__cdecl*)(void*))RTI_RoutingServiceSocketStreamWriter_run,
        0, (void*)stream_writer);
    error = !stream_writer->_thread;
  #else
    error = pthread_create(
                &stream_writer->_thread, 
                &threadAttr, 
                RTI_RoutingServiceSocketStreamWriter_run,
                (void *)stream_writer);
  #endif

    if(error) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Error creating thread");
        goto done;
    }

    ok = 1;
  done:
  #ifndef RTI_WIN32
    pthread_attr_destroy(&threadAttr);
  #endif
    if (!ok && stream_writer != NULL) {
        RTI_RoutingServiceSocketStreamWriter_delete(stream_writer);
        stream_writer = NULL;
    }
    return (RTI_RoutingServiceStreamWriter) stream_writer;
}

/*****************************************************************************/

void RTI_RoutingServiceSocketStreamWriter_delete(
    struct RTI_RoutingServiceSocketStreamWriter * self)
{
    if (self->_serverSock >= 0) {
        RTI_RoutingServiceSocket_close_socket(self->_serverSock);
        self->_serverSock = -1;
    }

  #ifdef RTI_WIN32
    CloseHandle(self->_clientsMutex);
  #else
    pthread_mutex_destroy(&self->_clientsMutex);
  #endif

    if (self->_writeBuffer != NULL) {
        free(self->_writeBuffer);
        self->_writeBuffer = NULL;
    }

    free(self);
}

/*****************************************************************************/

void RTI_RoutingServiceSocketConnection_delete_stream_writer(
        RTI_RoutingServiceConnection connection,
	RTI_RoutingServiceStreamWriter stream_writer,
	RTI_RoutingServiceEnvironment * env) 
{

    int unblockSock;
    struct sockaddr_in unblockAddr;
    struct RTI_RoutingServiceSocketStreamWriter * self =
        (struct RTI_RoutingServiceSocketStreamWriter *) stream_writer;
  #ifndef RTI_WIN32
    void * value;
  #endif

    /*
     * The thread accepting tcp connection must exit
     */
    self->_run = 0;

    /*
     * We're going to unblock "accept" by creating a 
     * TCP connection to our own server
     */
    unblockAddr.sin_family = AF_INET;
    unblockAddr.sin_port = self->_serverAddress.sin_port;
    unblockAddr.sin_addr.s_addr = htonl(INADDR_LOOPBACK);

    unblockSock = RTI_RoutingServiceSocket_create_socket(0);
    if (unblockSock < 0) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Error creating unblock socket");
        return;
    }

    if (!RTI_RoutingServiceSocket_connect_tcp_socket(
            unblockSock, &unblockAddr)) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Could not connect to server to unblock");
        return;
    }

  #ifdef RTI_WIN32  
    WaitForSingleObject(self->_thread, INFINITE);
  #else
    pthread_join(self->_thread, &value);
  #endif

    RTI_RoutingServiceSocketStreamWriter_delete(self);
}

/* ========================================================================= */
/*                                                                           */
/* AdapterPlugin methods                                                     */
/*                                                                           */
/* ========================================================================= */

RTI_RoutingServiceConnection 
RTI_RoutingServiceSocketAdapterPlugin_create_connection(
    struct RTI_RoutingServiceAdapterPlugin * adapter,
    const char * routing_service_name,
    const char * routing_service_group_name,
    const struct RTI_RoutingServiceStreamReaderListener * input_disc_listener,
    const struct RTI_RoutingServiceStreamReaderListener * output_disc_listener,
    const struct RTI_RoutingServiceTypeInfo ** registeredTypes,
    int registeredTypeCount,
    const struct RTI_RoutingServiceProperties * properties,
    RTI_RoutingServiceEnvironment * env) 
{

    struct RTI_RoutingServiceSocketConnection * connection;

    connection = calloc(1, sizeof(struct RTI_RoutingServiceSocketConnection));

    if (connection == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
        return NULL;
    }

    connection->adapter = (struct RTI_RoutingServiceSocketAdapterPlugin *) adapter;

    return connection;
}

/*****************************************************************************/

void RTI_RoutingServiceSocketAdapterPlugin_delete_connection(
    struct RTI_RoutingServiceAdapterPlugin * adapter,
    RTI_RoutingServiceConnection connection,
    RTI_RoutingServiceEnvironment * env) 
{
    free(connection);
}

/*****************************************************************************/

void RTI_RoutingServiceSocketAdapterPlugin_delete(
    struct RTI_RoutingServiceAdapterPlugin * adapter,
    RTI_RoutingServiceEnvironment * env) 
{
    free(adapter);
}

/*****************************************************************************/

/*
 * Entry point to the adapter plugin
 */
DllExport
struct RTI_RoutingServiceAdapterPlugin * 
RTI_RoutingServiceSocketAdapterPlugin_create(
    const struct RTI_RoutingServiceProperties * properties,
    RTI_RoutingServiceEnvironment * env) 
{

    struct RTI_RoutingServiceSocketAdapterPlugin * adapter = NULL;
    struct RTI_RoutingServiceVersion version = {1,0,0,0};

    adapter = calloc(1, sizeof(struct RTI_RoutingServiceSocketAdapterPlugin));

    if (adapter == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
        return NULL;
    }

    RTI_RoutingServiceAdapterPlugin_initialize(&adapter->_base);

    adapter->_base.plugin_version = version;

    /*
     * Assign the function pointers
     */

    adapter->_base.adapter_plugin_delete = 
        RTI_RoutingServiceSocketAdapterPlugin_delete;

    adapter->_base.adapter_plugin_create_connection = 
        RTI_RoutingServiceSocketAdapterPlugin_create_connection;
    adapter->_base.adapter_plugin_delete_connection = 
        RTI_RoutingServiceSocketAdapterPlugin_delete_connection;

    adapter->_base.connection_create_session = 
        RTI_RoutingServiceSocketConnection_create_session;
    adapter->_base.connection_delete_session = 
        RTI_RoutingServiceSocketConnection_delete_session;
    adapter->_base.connection_create_stream_reader = 
        RTI_RoutingServiceSocketConnection_create_stream_reader;
    adapter->_base.connection_delete_stream_reader = 
        RTI_RoutingServiceSocketConnection_delete_stream_reader;

    adapter->_base.connection_create_stream_writer = 
        RTI_RoutingServiceSocketConnection_create_stream_writer;
    adapter->_base.connection_delete_stream_writer = 
        RTI_RoutingServiceSocketConnection_delete_stream_writer;

    adapter->_base.stream_writer_write = 
        RTI_RoutingServiceSocketStreamWriter_write;

    adapter->_base.stream_reader_read = 
        RTI_RoutingServiceSocketStreamReader_read;
    adapter->_base.stream_reader_return_loan = 
        RTI_RoutingServiceSocketStreamReader_return_loan;

    adapter->_base.stream_reader_update = 
        RTI_RoutingServiceSocketStreamReader_update;

    return (struct RTI_RoutingServiceAdapterPlugin *) adapter;
}

#undef ROUTER_CURRENT_SUBMODULE

