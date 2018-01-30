/*****************************************************************************/
/*         (c) Copyright, Real-Time Innovations, All rights reserved.        */
/*                                                                           */
/*         Permission to modify and use for internal purposes granted.       */
/* This software is provided "as is", without warranty, express or implied.  */
/*                                                                           */
/*****************************************************************************/

/* ========================================================================= */
/* RTI Routing Service File Adapter                                          */
/* ========================================================================= */
/* This a pluggable adapter that reads lines from a file                     */
/* providing them to Routing Service as DynamicData samples                  */
/* and receives samples from Routing Service to write them in a file         */
/*                                                                           */
/* To customize to your data format, edit LineConversion.c                   */
/*                                                                           */
/* ========================================================================= */

#include <stdio.h>
#include <string.h>

#ifdef RTI_WIN32
  /* strtok, fopen warnings */
  #pragma warning( disable : 4996 )
#endif 
/*
 * The mapping between samples and file lines is implemented
 * in LineConversion.c
 */

#include "LineConversion.h"
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


struct RTI_RoutingServiceFileAdapterPlugin {
    struct RTI_RoutingServiceAdapterPlugin _base;
};

/*****************************************************************************/

struct RTI_RoutingServiceFileConnection {
    struct RTI_RoutingServiceFileAdapterPlugin * adapter;
};

/*****************************************************************************/

struct RTI_RoutingServiceFileStreamWriter {
    FILE * file;
    int flushEnabled;
};

/*****************************************************************************/

struct RTI_RoutingServiceFileStreamReader {
    struct RTI_RoutingServiceStreamReaderListener listener;
    const struct RTI_RoutingServiceStreamInfo * info;

    const char * promptText;

    struct DDS_TypeCode * _typeCode;
    char * _buffer;

    int _run;
    
  #ifdef RTI_WIN32
    HANDLE _thread;
  #else 
    pthread_t _thread;
  #endif
    
    int loop;
    struct DDS_Duration_t readPeriod;
    int samplesPerRead;
    int maxSampleSize;
    FILE * file;
};

/* ========================================================================= */
/*                                                                           */
/* Stream reader methods                                                     */
/*                                                                           */
/* ========================================================================= */

void * RTI_RoutingServiceFileStreamReader_run(void * threadParam) {

    struct RTI_RoutingServiceFileStreamReader * self = 
        (struct RTI_RoutingServiceFileStreamReader *) threadParam;

    /*
     * This thread will notify of data availability in the file
     */

    while (self->_run) {

        NDDS_Utility_sleep(&self->readPeriod);

        if (!feof(self->file)) {
            self->listener.on_data_available(
                self, self->listener.listener_data);
        } else if (self->loop) {
            fseek(self->file, 0, SEEK_SET);
            self->listener.on_data_available(
                self, self->listener.listener_data);
        }

    }

    return NULL;
}

/*****************************************************************************/

void RTI_RoutingServiceFileStreamReader_freeDynamicDataArray(
        struct DDS_DynamicData ** samples,
        int count)
{
    int i;
    for(i = 0; i < count; i++) {
        DDS_DynamicData_delete(samples[i]);
    }
    free(samples);
}

/*****************************************************************************/

void RTI_RoutingServiceFileStreamReader_read(
    RTI_RoutingServiceStreamReader stream_reader,
    RTI_RoutingServiceSample ** sample_list,
    RTI_RoutingServiceSampleInfo ** info_list,
    int * count,
    RTI_RoutingServiceEnvironment * env) 
{
    int i, j = 0, result;
    struct DDS_DynamicData * sample = NULL;
    struct DDS_DynamicDataProperty_t dynamicDataProps = 
        DDS_DynamicDataProperty_t_INITIALIZER;
    struct RTI_RoutingServiceFileStreamReader * self = 
        (struct RTI_RoutingServiceFileStreamReader *) stream_reader;

    /*
     * Assign the memory for the array we are going to produce
     */
    *sample_list = calloc(self->maxSampleSize, sizeof(DDS_DynamicData *));
    if(*sample_list == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
                env, "Failure creating dynamic data sample");
        return;
    }
    
    /*
     * Read as many as samplesPerRead (or less if we encounter the end of file)
     */
    for (i=0; i<self->samplesPerRead && !feof(self->file); i++) {

        /*
         * Create a dynamic data sample for every buffer we read. We use
         * the type we received when the stream reader was created
         */
        sample = DDS_DynamicData_new(self->_typeCode, &dynamicDataProps);

        if (sample == NULL) {
            RTI_RoutingServiceEnvironment_set_error(
                env, "Failure creating dynamic data sample");
            RTI_RoutingServiceFileStreamReader_freeDynamicDataArray(
                (struct DDS_DynamicData **) *sample_list, j);
            *sample_list = NULL;
            return;
        }

        /*
         * Fill the dynamic data sample fields
         * with the buffer read from the file.
         *
         * This function is meant to be customized to specific
         * file formats
         */
        result = RTI_RoutingServiceFileAdapter_read_sample(
                    sample, self->file, 
                    self->_buffer, self->maxSampleSize, env);

        if (result == -1) {
            /*
             * No sample read
             */
            DDS_DynamicData_delete(sample);
            continue;
        } else if (result == 0) {
            /*
             * Error
             */ 
            RTI_RoutingServiceFileStreamReader_freeDynamicDataArray(
                (struct DDS_DynamicData **) *sample_list, j);
            *sample_list = NULL;
            RTI_RoutingServiceEnvironment_set_error(
                env, "Incorrect file");
            return;
        }

        (*sample_list)[j++] = sample;
    }

    /*
     * Set the count to the actual number of samples we have generated
     */
    *count = j;
    if (*count == 0) {
        /*
         * If we report zero samples we have to free the array now
         */
        free(*sample_list);
        *sample_list = NULL;
    }

    /*
     * We don't provide sample info in this adapter, which
     * is an optional feature
     */
    *info_list = NULL;
}


/*****************************************************************************/

void RTI_RoutingServiceFileStreamReader_return_loan(
        RTI_RoutingServiceStreamReader stream_reader,
        RTI_RoutingServiceSample * sample_list,
        RTI_RoutingServiceSampleInfo * info_list,
        int count,
        RTI_RoutingServiceEnvironment * env) 
{
    /*
     * Release all the memory allocated with read()
     */
    RTI_RoutingServiceFileStreamReader_freeDynamicDataArray(
        (struct DDS_DynamicData **) sample_list, count);
}

/*****************************************************************************/

void RTI_RoutingServiceFileStreamReader_update(
    RTI_RoutingServiceAdapterEntity stream_reader,
    const struct RTI_RoutingServiceProperties * properties,
    RTI_RoutingServiceEnvironment * env)
{
    
    const char * readPeriodProp = NULL;
    int readPeriodIntProp;
    const char * samplesPerReadProp = NULL;
    int samplesPerReadIntProp;
    const char * maxSampleSizeProp = NULL;
    int maxSampleSizeIntProp;
    const char * loopProp = NULL;
    int loop = 0;

    struct RTI_RoutingServiceFileStreamReader * self = 
        (struct RTI_RoutingServiceFileStreamReader *) stream_reader;

    /*
     * Get the configuration properties in <route>/<input>/<property>
     */

    loopProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "Loop");
    if (loopProp != NULL) {
        if (!strcmp(loopProp, "yes") || !strcmp(loopProp, "true") ||
            !strcmp(loopProp, "1")) {
            loop = 1;
        }
    }

    readPeriodProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "ReadPeriod");
    if (readPeriodProp == NULL) {
        readPeriodIntProp = 1000;
    } else {
        readPeriodIntProp = atoi(readPeriodProp);
        if(readPeriodIntProp < 0) {
            RTI_RoutingServiceEnvironment_set_error(
                env, "Negative value for property ReadPeriod");
            return;
        }
    }

    samplesPerReadProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "SamplesPerRead");
    if (samplesPerReadProp == NULL) {
        samplesPerReadIntProp = 1;
    } else {
        samplesPerReadIntProp = atoi(samplesPerReadProp);
        if(samplesPerReadIntProp <= 0) {
            RTI_RoutingServiceEnvironment_set_error(
                env, "Non-positive value for property SamplesPerRead");
            return;
        }
    }

    maxSampleSizeProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "MaxSampleSize");
    if (maxSampleSizeProp == NULL) {
        maxSampleSizeIntProp = 4096;
    } else {
        maxSampleSizeIntProp = atoi(maxSampleSizeProp);
    }

    if (maxSampleSizeIntProp != self->maxSampleSize) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Property MaxSampleSize immutable while running");
        return;
    }


    self->samplesPerRead = samplesPerReadIntProp;
    self->readPeriod.sec =  readPeriodIntProp / 1000;
    self->readPeriod.nanosec = (readPeriodIntProp % 1000) * 1000000;
    self->loop = loop;
}

/* ========================================================================= */
/*                                                                           */
/* Stream stream_writer methods                                              */
/*                                                                           */
/* ========================================================================= */


int RTI_RoutingServiceFileStreamWriter_write(
    RTI_RoutingServiceStreamWriter stream_writer,
    const RTI_RoutingServiceSample * sample_list,
    const RTI_RoutingServiceSampleInfo * info_list,
    int count,
    RTI_RoutingServiceEnvironment * env) 
{
    struct RTI_RoutingServiceFileStreamWriter * self = 
        (struct RTI_RoutingServiceFileStreamWriter *) stream_writer;
    struct DDS_DynamicData * sample = NULL;
    int i;

    for(i=0; i<count; i++) {

        sample = (struct DDS_DynamicData *) sample_list[i];

        if (!RTI_RoutingServiceFileAdapter_write_sample(
                sample, self->file, env)) {
            return i;
        }

        if (self->flushEnabled) {
            fflush(self->file);
        }

    }

    return count;

}

/* ========================================================================= */
/*                                                                           */
/* Connection methods                                                        */
/*                                                                           */
/* ========================================================================= */

RTI_RoutingServiceSession 
RTI_RoutingServiceFileConnection_create_session(
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

void RTI_RoutingServiceFileConnection_delete_session(
    RTI_RoutingServiceConnection connection,
    RTI_RoutingServiceSession session,
    RTI_RoutingServiceEnvironment * env) 
{
    /* We don't need sessions in this example */
}

/*****************************************************************************/

void RTI_RoutingServiceStreamReader_delete(
    struct RTI_RoutingServiceFileStreamReader * self)
{
    if (self->file != stdin) {
        fclose(self->file);
    }

    if (self->_buffer != NULL) {
        free(self->_buffer);
        self->_buffer = NULL;
    }
    
    free(self);
}

/*****************************************************************************/

RTI_RoutingServiceStreamReader 
RTI_RoutingServiceFileConnection_create_stream_reader(
    RTI_RoutingServiceConnection connection,
    RTI_RoutingServiceSession session,
    const struct RTI_RoutingServiceStreamInfo * stream_info,
    const struct RTI_RoutingServiceProperties * properties,
    const struct RTI_RoutingServiceStreamReaderListener * listener,
    RTI_RoutingServiceEnvironment * env) 
{

    struct RTI_RoutingServiceFileStreamReader * stream_reader = NULL;
    const char * readPeriodProp = NULL;
    int readPeriodIntProp;
    const char * samplesPerReadProp = NULL;
    int samplesPerReadIntProp;
    const char * maxSampleSizeProp = NULL;
    int maxSampleSizeIntProp;
    const char * fileNameProp = NULL;
    FILE * file = NULL;
    const char * loopProp = NULL;
    int loop = 0;
    int error;
  #ifndef RTI_WIN32
    pthread_attr_t threadAttr;
  #endif

    /*
     * Get the configuration properties in <route>/<input>/<property>
     */


    fileNameProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "FileName");
    if (fileNameProp == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Missing property FileName");
        return NULL;
    }

    loopProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "Loop");
    if (loopProp != NULL) {
        if (!strcmp(loopProp, "yes") || !strcmp(loopProp, "true") ||
            !strcmp(loopProp, "1")) {
            loop = 1;
        }
    }

    readPeriodProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "ReadPeriod");
    if (readPeriodProp == NULL) {
        readPeriodIntProp = 1000;
    } else {
        readPeriodIntProp = atoi(readPeriodProp);
        if(readPeriodIntProp < 0) {
            RTI_RoutingServiceEnvironment_set_error(
                env, "Negative value for property ReadPeriod");
            return NULL;
        }
    }

    samplesPerReadProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "SamplesPerRead");
    if (samplesPerReadProp == NULL) {
        samplesPerReadIntProp = 1;
    } else {
        samplesPerReadIntProp = atoi(samplesPerReadProp);
        if(samplesPerReadIntProp <= 0) {
            RTI_RoutingServiceEnvironment_set_error(
                env, "Non-positive value for property SamplesPerRead");
            return NULL;
        }
    }

    maxSampleSizeProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "MaxSampleSize");
    if (maxSampleSizeProp == NULL) {
        maxSampleSizeIntProp = 4096;
    } else {
        maxSampleSizeIntProp = atoi(maxSampleSizeProp);
        if(maxSampleSizeIntProp < 0) {
            RTI_RoutingServiceEnvironment_set_error(
                env, "Negative value for property MaxCharsPerRead");
            return NULL;
        }
    }

    if (strcmp("stdin", fileNameProp)) {
        file = fopen(fileNameProp, "r");

        if (file == NULL) {
            RTI_RoutingServiceEnvironment_set_error(
                env, "Could not open file for read: %s", fileNameProp);

            return NULL;
        }
    } else {
        file = stdin;
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
        1, sizeof(struct RTI_RoutingServiceFileStreamReader));

    if (stream_reader == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
        if(file != stdin) {
            fclose(file);
        }
        return NULL;
    }

    stream_reader->_buffer = 
        calloc(maxSampleSizeIntProp+1, sizeof(char));

    if (stream_reader->_buffer == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
        free(stream_reader);
        if(file != stdin) {
            fclose(file);
        }
    }

    stream_reader->samplesPerRead = samplesPerReadIntProp;
    stream_reader->maxSampleSize = maxSampleSizeIntProp;
    stream_reader->readPeriod.sec =  readPeriodIntProp / 1000;
    stream_reader->readPeriod.nanosec = (readPeriodIntProp % 1000) * 1000000;
    stream_reader->loop = loop;
    stream_reader->file = file;
    stream_reader->listener = *listener;    
    stream_reader->_typeCode = 
        (struct DDS_TypeCode *) stream_info->type_info.type_representation;
    stream_reader->_run = 1;

  #ifdef RTI_WIN32
    stream_reader->_thread = (HANDLE) _beginthread(
        (void(__cdecl*)(void*))RTI_RoutingServiceFileStreamReader_run,
        0, (void*)stream_reader);
    error = !stream_reader->_thread;
  #else
    pthread_attr_init(&threadAttr);
    pthread_attr_setdetachstate(&threadAttr, PTHREAD_CREATE_JOINABLE);
    error = pthread_create(
                &stream_reader->_thread, 
                &threadAttr, 
                RTI_RoutingServiceFileStreamReader_run,
                (void *)stream_reader);
    pthread_attr_destroy(&threadAttr);
  #endif

    if(error) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Error creating thread");
        RTI_RoutingServiceStreamReader_delete(stream_reader);
        return NULL;
    }

    return (RTI_RoutingServiceStreamReader) stream_reader;
}

/*****************************************************************************/

void RTI_RoutingServiceFileConnection_delete_stream_reader(
        RTI_RoutingServiceConnection connection,
	RTI_RoutingServiceStreamReader stream_reader,
	RTI_RoutingServiceEnvironment * env) {

    struct RTI_RoutingServiceFileStreamReader * self =
        (struct RTI_RoutingServiceFileStreamReader *) stream_reader;
  #ifndef RTI_WIN32
    void * value = NULL;
  #endif
    self->_run = 0;

  #ifdef RTI_WIN32
    WaitForSingleObject(self->_thread, INFINITE);
  #else
    pthread_join(self->_thread, &value);
  #endif

    RTI_RoutingServiceStreamReader_delete(self);

}

/*****************************************************************************/

RTI_RoutingServiceStreamWriter 
RTI_RoutingServiceFileConnection_create_stream_writer(
        RTI_RoutingServiceConnection connection,
	RTI_RoutingServiceSession session,
	const struct RTI_RoutingServiceStreamInfo * stream_info,
	const struct RTI_RoutingServiceProperties * properties,
	RTI_RoutingServiceEnvironment * env) {

    struct RTI_RoutingServiceFileStreamWriter * stream_writer = NULL;
    const char * fileNameProp = NULL;
    const char * modeProp = NULL;
    const char * flushProp = NULL;
    int flushEnabled = 0;
    char * fileName = NULL;
    FILE * file;
    char * pos;
    int error = 0;
    

    modeProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "WriteMode");
    if (modeProp != NULL) {
        if (strcmp(modeProp, "overwrite") && 
            strcmp(modeProp, "append") &&
            strcmp(modeProp, "keep") ) {
            RTI_RoutingServiceEnvironment_set_error(
                env, "Invalid value for WriteMode (%s). Allowed values: keep (default), overwrite, append",
                modeProp);
            return NULL;
        }
    } else {
        modeProp = "keep";
    }

    /*
     * Get the configuration properties in <route>/<input>/<property>
     */

    fileNameProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "FileName");
    if (fileNameProp == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Missing property FileName");
        return NULL;
    }

    flushProp = RTI_RoutingServiceProperties_lookup_property(
        properties, "Flush");
    if (flushProp != NULL) {
        if (!strcmp(flushProp, "yes") || !strcmp(flushProp, "true") ||
            !strcmp(flushProp, "1")) {
            flushEnabled = 1;
        }
    }

    /*
     * Replace (stream_name) in the file name with the stream name of this writer
     */
    
    pos = strstr(fileNameProp, "(stream_name)");
    if (pos != NULL) {
        fileName = calloc(strlen(fileNameProp) + 
                          strlen(stream_info->stream_name) + 1, sizeof(char));

        strcpy(fileName, fileNameProp);
        strcpy(fileName + (pos - fileNameProp), 
               stream_info->stream_name);
        strcpy(fileName + (pos - fileNameProp) + 
               strlen(stream_info->stream_name),
               pos + strlen("(stream_name)"));
    } else {
        fileName = (char *) fileNameProp;
    }

    if (strcmp("stdout", fileName)) {
        if (!strcmp(modeProp, "keep")) {
            file = fopen(fileName, "r");
            if (file != NULL) {
                RTI_RoutingServiceEnvironment_set_error(
                    env, "File exists and WriteMode is keep");
                fclose(file);
                file = NULL;
                error = 1;
            }
        }
        file = fopen(fileName, !strcmp(modeProp, "append") ? "a" : "w");
        if (file == NULL) {
            RTI_RoutingServiceEnvironment_set_error(
                env, "Could not open file for write: %s", fileName);
            error = 1;
        }
    } else {
        file = stdout;
    }

    if (fileName != fileNameProp) {
        free(fileName);
    }

    if (error) {
        if (file != NULL && file != stdout) {
            fclose (file);
            file = NULL;
        }
        return NULL;
    }

    stream_writer = calloc(
        1, sizeof(struct RTI_RoutingServiceFileStreamWriter));

    if (stream_writer == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
        return NULL;
    }

    stream_writer->file = file;
    stream_writer->flushEnabled = flushEnabled;

    return stream_writer;
}



/*****************************************************************************/

void RTI_RoutingServiceFileConnection_delete_stream_writer(
        RTI_RoutingServiceConnection connection,
	RTI_RoutingServiceStreamWriter stream_writer,
	RTI_RoutingServiceEnvironment * env) 
{

    struct RTI_RoutingServiceFileStreamWriter * self = 
        (struct RTI_RoutingServiceFileStreamWriter *) stream_writer;

    if (self->file != stdout) {
        fclose(self->file);
    }
    
    free(self);
}

/* ========================================================================= */
/*                                                                           */
/* AdapterPlugin methods                                                     */
/*                                                                           */
/* ========================================================================= */

RTI_RoutingServiceConnection 
RTI_RoutingServiceFileAdapterPlugin_create_connection(
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

    struct RTI_RoutingServiceFileConnection * connection;

    connection = calloc(1, sizeof(struct RTI_RoutingServiceFileConnection));

    if (connection == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
        return NULL;
    }

    connection->adapter = (struct RTI_RoutingServiceFileAdapterPlugin *) adapter;

    return connection;
}

/*****************************************************************************/

void RTI_RoutingServiceFileAdapterPlugin_delete_connection(
    struct RTI_RoutingServiceAdapterPlugin * adapter,
    RTI_RoutingServiceConnection connection,
    RTI_RoutingServiceEnvironment * env) 
{
    free(connection);
}

/*****************************************************************************/

void RTI_RoutingServiceFileAdapterPlugin_delete(
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
RTI_RoutingServiceFileAdapterPlugin_create(
    const struct RTI_RoutingServiceProperties * properties,
    RTI_RoutingServiceEnvironment * env) 
{

    struct RTI_RoutingServiceFileAdapterPlugin * adapter = NULL;
    struct RTI_RoutingServiceVersion version = {1,0,0,0};

    adapter = calloc(1, sizeof(struct RTI_RoutingServiceFileAdapterPlugin));

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
        RTI_RoutingServiceFileAdapterPlugin_delete;

    adapter->_base.adapter_plugin_create_connection = 
        RTI_RoutingServiceFileAdapterPlugin_create_connection;
    adapter->_base.adapter_plugin_delete_connection = 
        RTI_RoutingServiceFileAdapterPlugin_delete_connection;

    adapter->_base.connection_create_session = 
        RTI_RoutingServiceFileConnection_create_session;
    adapter->_base.connection_delete_session = 
        RTI_RoutingServiceFileConnection_delete_session;
    adapter->_base.connection_create_stream_reader = 
        RTI_RoutingServiceFileConnection_create_stream_reader;
    adapter->_base.connection_delete_stream_reader = 
        RTI_RoutingServiceFileConnection_delete_stream_reader;

    adapter->_base.connection_create_stream_writer = 
        RTI_RoutingServiceFileConnection_create_stream_writer;
    adapter->_base.connection_delete_stream_writer = 
        RTI_RoutingServiceFileConnection_delete_stream_writer;

    adapter->_base.stream_writer_write = 
        RTI_RoutingServiceFileStreamWriter_write;

    adapter->_base.stream_reader_read = 
        RTI_RoutingServiceFileStreamReader_read;
    adapter->_base.stream_reader_return_loan = 
        RTI_RoutingServiceFileStreamReader_return_loan;
    adapter->_base.stream_reader_update = 
        RTI_RoutingServiceFileStreamReader_update;


    return (struct RTI_RoutingServiceAdapterPlugin *) adapter;
}

#undef ROUTER_CURRENT_SUBMODULE

