/******************************************************************/
/*                    Simple File Adapter                         */
/******************************************************************/

#include <stdio.h>
#include <string.h>
#ifdef RTI_WIN32
  #include <process.h>
#else
  #include <pthread.h> 
#endif

#include "ndds/ndds_c.h"
#include "routingservice/routingservice_adapter.h"

#ifdef RTI_WIN32
  /* Disbale strtok, fopen warnings */
  #pragma warning( disable : 4996 )
  #define DllExport __declspec( dllexport )
#else
  #define DllExport
#endif

/*----------------------------------------------------------------*/
/*                Simple File Adapter: Connection                 */
/*----------------------------------------------------------------*/

/*
 * Connection.
 */
struct SimpleFileAdapterConnection {
    char * directory;
};

/*
 * Deletes a connection.
 */
void SimpleFileAdapter_delete_connection(
    struct RTI_RoutingServiceAdapterPlugin * adapter,
    RTI_RoutingServiceConnection connection,
    RTI_RoutingServiceEnvironment * env) 
{
    struct SimpleFileAdapterConnection * cx =
	(struct SimpleFileAdapterConnection *)connection;
    int verbosity;

    verbosity = RTI_RoutingServiceEnvironment_get_verbosity(env);

    if (verbosity == RTI_ROUTING_SERVICE_VERBOSITY_DEBUG) {
	printf("CALL SimpleFileAdapter_delete_connection\n");
    }

    if (cx->directory != NULL) {
	free(cx->directory);
    }

    free(cx);
}

/*
 * Creates a connection.
 */
RTI_RoutingServiceConnection 
SimpleFileAdapter_create_connection(
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
    const char * directory;
    struct SimpleFileAdapterConnection * cx;
    int verbosity;

    verbosity = RTI_RoutingServiceEnvironment_get_verbosity(env);

    if (verbosity == RTI_ROUTING_SERVICE_VERBOSITY_DEBUG) {
        printf("CALL SimpleFileAdapter_create_connection\n");
    }

    cx = calloc(1, sizeof(struct SimpleFileAdapterConnection));

    if (cx == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
        return NULL;
    }

    directory = RTI_RoutingServiceProperties_lookup_property(
                    properties,
                    "directory");

    if (directory == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "directory property is required");
		free(cx);
        return NULL;	
    }

    cx->directory = (char *)malloc(strlen(directory)+1);

    if (cx->directory == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
		free(cx);
        return NULL;
    }

    strcpy(cx->directory, directory);
    return cx;
}

/*----------------------------------------------------------------*/
/*             Simple File Adapter: StreamReader                  */
/*----------------------------------------------------------------*/

/*
 * StreamReader.
 */
struct SimpleFileAdapterStreamReader {
    int run;
  #ifdef RTI_WIN32
    HANDLE thread;
  #else 
    pthread_t thread;
  #endif
    DDS_DynamicData * sample[1];
    struct DDS_Duration_t readPeriod;
    struct RTI_RoutingServiceStreamReaderListener listener;
    FILE * fHandle;
};

/*
 * Returns sample loan
 */
void SimpleFileAdapterStreamReader_return_loan(
    RTI_RoutingServiceStreamReader stream_reader,
    RTI_RoutingServiceSample * sample_list,
    RTI_RoutingServiceSampleInfo * info_list,
    int count,
    RTI_RoutingServiceEnvironment * env) 
{
    int verbosity;

    verbosity = RTI_RoutingServiceEnvironment_get_verbosity(env);

    if (verbosity == RTI_ROUTING_SERVICE_VERBOSITY_DEBUG) {
        printf("CALL SimpleFileAdapterStreamReader_return_loan\n");
    }

    return;
}

/*
 * Reads one line from the StreamReader file
 */
void SimpleFileAdapterStreamReader_read(
    RTI_RoutingServiceStreamReader stream_reader,
    RTI_RoutingServiceSample ** sample_list,
    RTI_RoutingServiceSampleInfo ** info_list,
    int * count,
    RTI_RoutingServiceEnvironment * env) 
{
    DDS_ReturnCode_t retCode;
    char line[2048];
    char * str;
    struct SimpleFileAdapterStreamReader * self = 
        (struct SimpleFileAdapterStreamReader *) stream_reader;
    int verbosity;
    int length;

    verbosity = RTI_RoutingServiceEnvironment_get_verbosity(env);

    if (verbosity == RTI_ROUTING_SERVICE_VERBOSITY_DEBUG) {
        printf("CALL SimpleFileAdapterStreamReader_read\n");
    }

    *count = 0;
    *sample_list = NULL;

    /*
     * We don't provide sample info in this adapter, which
     * is an optional feature
     */
    *info_list = NULL;

    DDS_DynamicData_clear_all_members(self->sample[0]);

    str = fgets(line, sizeof(line), self->fHandle);

    if (!str) {
	return;
    }

    length = strlen(str);
    if (length > 0 && str[length-1] == '\n') {
        str[length-1] = '\0';
        if (length > 1 && str[length-2] == '\r') {
            str[length-2] = '\0';
        }
    }

    retCode = DDS_DynamicData_set_string(
                self->sample[0], "value", 
                DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, 
                line);

    if (retCode != DDS_RETCODE_OK) {
        RTI_RoutingServiceEnvironment_set_error(
                env, "Error assigning value=%s", line);
        return;
    }

    *sample_list = (RTI_RoutingServiceSample *)self->sample;
    *count = 1;

    return;
}

/*
 * Notification thread.
 *
 * This thread will notify of data availability in the file.
 */
void * SimpleFileAdapterStreamReader_run(void * threadParam) 
{
    struct SimpleFileAdapterStreamReader * self = 
        (struct SimpleFileAdapterStreamReader *) threadParam;

    while (self->run) {
        NDDS_Utility_sleep(&self->readPeriod);

        if (!feof(self->fHandle)) {
            self->listener.on_data_available(
                self, self->listener.listener_data);
        }
    }

    return NULL;
}

/*
 * Deletes a StreamReader.
 */
void SimpleFileAdapterConnection_delete_stream_reader(	
    RTI_RoutingServiceConnection connection,
    RTI_RoutingServiceStreamReader stream_reader,
    RTI_RoutingServiceEnvironment * env) 
{
    struct SimpleFileAdapterStreamReader * reader =
        (struct SimpleFileAdapterStreamReader *) stream_reader;
  #ifndef RTI_WIN32
    void * value = NULL;
  #endif

    int verbosity;

    verbosity = RTI_RoutingServiceEnvironment_get_verbosity(env);

    if (verbosity == RTI_ROUTING_SERVICE_VERBOSITY_DEBUG) {
        printf("CALL SimpleFileAdapterConnection_delete_stream_reader\n");
    }

    reader->run = 0;

  #ifdef RTI_WIN32
    WaitForSingleObject(reader->thread, INFINITE);
  #else
    pthread_join(reader->thread, &value);
  #endif

    if (reader->fHandle) {
        fclose(reader->fHandle);
    }

    if (reader->sample[0]) {
        DDS_DynamicData_delete(reader->sample[0]);
    }

    free(reader);
}

/*
 * Creates a StreamReader
 */
RTI_RoutingServiceStreamReader 
    SimpleFileAdapterConnection_create_stream_reader(
        RTI_RoutingServiceConnection connection,
        RTI_RoutingServiceSession session,
        const struct RTI_RoutingServiceStreamInfo * stream_info,
        const struct RTI_RoutingServiceProperties * properties,
        const struct RTI_RoutingServiceStreamReaderListener * listener,
        RTI_RoutingServiceEnvironment * env) 
{
    const char * readPeriodStr;
    unsigned int readPeriod;
    char * file;
    struct SimpleFileAdapterConnection * self =
        (struct SimpleFileAdapterConnection *)connection;
    struct SimpleFileAdapterStreamReader * reader = NULL;
    struct DDS_DynamicDataProperty_t dynamicDataProps = 
        DDS_DynamicDataProperty_t_INITIALIZER;
    int error = 0;
  #ifndef RTI_WIN32
    pthread_attr_t threadAttr;
  #endif
    int verbosity;

    verbosity = RTI_RoutingServiceEnvironment_get_verbosity(env);

    if (verbosity == RTI_ROUTING_SERVICE_VERBOSITY_DEBUG) {
	printf("CALL SimpleFileAdapterConnection_create_stream_reader\n");
    }

    /* Create StreamReader */
    reader = calloc(1, sizeof(struct SimpleFileAdapterStreamReader));

    if (reader == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
        return NULL;
    }

    /*
     * Create a dynamic data sample to return the next line. We use the type 
	 * we received when the stream reader was created
     */
    reader->sample[0] = DDS_DynamicData_new(
		(struct DDS_TypeCode *) stream_info->type_info.type_representation,
		&dynamicDataProps);

    if (reader->sample[0] == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Failure creating dynamic data sample");
		free(reader);
        return NULL;
    }

    /* Open input file */
    file = malloc(strlen(self->directory) + strlen("/") +
                  strlen(stream_info->stream_name) + 
                  strlen(".txt") + 1);

    if (file == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
            DDS_DynamicData_delete(reader->sample[0]);
            free(reader);
        return NULL;
    }

    sprintf(file, "%s/%s.txt",self->directory, stream_info->stream_name);

    reader->fHandle = fopen(file, "r");

    if (reader->fHandle == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Error opening %s", file);
        free(file);
        DDS_DynamicData_delete(reader->sample[0]);
        free(reader);
        return NULL;
    }

    free(file);

    /* Creates notification thread */
    readPeriodStr = 
        RTI_RoutingServiceProperties_lookup_property(
            properties,
            "read_period");

    if (readPeriodStr != NULL) {
        readPeriod = atoi(readPeriodStr);
    } else {
        readPeriod = 1000; /* 1 Sec */
    }

    reader->readPeriod.sec = readPeriod / 1000;
    reader->readPeriod.nanosec = (readPeriod % 1000) * 1000000;
    reader->run = 1;
    reader->listener = *listener;

  #ifdef RTI_WIN32
    reader->thread = (HANDLE) _beginthread(
            (void(__cdecl*)(void*))SimpleFileAdapterStreamReader_run,
            0, (void*)reader);

    if (!reader->thread) {
        error = 1;
    }

  #else
    pthread_attr_init(&threadAttr);
    pthread_attr_setdetachstate(&threadAttr, PTHREAD_CREATE_JOINABLE);
    error = pthread_create(&reader->thread,
                           &threadAttr,
                           SimpleFileAdapterStreamReader_run,
                           (void *)reader);
    pthread_attr_destroy(&threadAttr);
  #endif

    if (error) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Error creating notification thread");
        DDS_DynamicData_delete(reader->sample[0]);
        fclose(reader->fHandle);
        free(reader);
        return NULL;
    }

    return reader;
}

/*----------------------------------------------------------------*/
/*             Simple File Adapter: StreamWriter                  */
/*----------------------------------------------------------------*/

/*
 * StreamWriter
 */
struct SimpleFileAdapterStreamWriter {
    int printToStdout;
    FILE * fHandle;
};

int SimpleFileAdapterStreamWriter_write(
    RTI_RoutingServiceStreamWriter stream_writer,
    const RTI_RoutingServiceSample * sample_list,
    const RTI_RoutingServiceSampleInfo * info_list,
    int count,
    RTI_RoutingServiceEnvironment * env) 
{
    int i, samplesWritten;
    DDS_DynamicData * sample;
    DDS_ReturnCode_t retCode;
    char * line;
    struct SimpleFileAdapterStreamWriter * self = 
        (struct SimpleFileAdapterStreamWriter *) stream_writer;
    int verbosity;

    verbosity = RTI_RoutingServiceEnvironment_get_verbosity(env);

    if (verbosity == RTI_ROUTING_SERVICE_VERBOSITY_DEBUG) {
        printf("CALL SimpleFileAdapterStreamWriter_write\n");
    }

    if (!self->fHandle) {
        return 0;
    }

    samplesWritten = 0;

    for (i=0; i<count; i++) {
        sample = (DDS_DynamicData *)sample_list[i];

        line = NULL;
        retCode = DDS_DynamicData_get_string(
                    sample, &line, NULL, "value", 
                    DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED);

        if (retCode != DDS_RETCODE_OK) {
            RTI_RoutingServiceEnvironment_set_error(
		env, "Error assigning value");
	} else {
            samplesWritten++;
        }

        fputs(line, self->fHandle);
        fputs("\n", self->fHandle);
        fflush(self->fHandle);

        if (self->printToStdout) {
            printf("%s\n",line);
            fflush(stdout);
        }

	DDS_String_free(line);
    }

    return samplesWritten;
}

/*
 * Deletes a StreamWriter
 */
void SimpleFileAdapterConnection_delete_stream_writer(
    RTI_RoutingServiceConnection connection,
    RTI_RoutingServiceStreamWriter stream_writer,
    RTI_RoutingServiceEnvironment * env) 
{
    struct SimpleFileAdapterStreamWriter * writer = 
        (struct SimpleFileAdapterStreamWriter *) stream_writer;
    int verbosity;

    verbosity = RTI_RoutingServiceEnvironment_get_verbosity(env);

    if (verbosity == RTI_ROUTING_SERVICE_VERBOSITY_DEBUG) {
        printf("CALL SimpleFileAdapterConnection_delete_stream_writer\n");
    }

    if (writer->fHandle) {
        fclose(writer->fHandle);
    }
    
    free(writer);
}

/*
 * Creates a StreamWriter
 */
RTI_RoutingServiceStreamWriter
	SimpleFileAdapterConnection_create_stream_writer(
		RTI_RoutingServiceConnection connection,
		RTI_RoutingServiceSession session,
		const struct RTI_RoutingServiceStreamInfo * stream_info,
		const struct RTI_RoutingServiceProperties * properties,
		RTI_RoutingServiceEnvironment * env) 
{
    const char * printToStdoutStr;
    char * file;
    struct SimpleFileAdapterConnection * self =
        (struct SimpleFileAdapterConnection *)connection;
    struct SimpleFileAdapterStreamWriter * writer = NULL;
    int verbosity;

    verbosity = RTI_RoutingServiceEnvironment_get_verbosity(env);

    if (verbosity == RTI_ROUTING_SERVICE_VERBOSITY_DEBUG) {
        printf("CALL SimpleFileAdapterConnection_create_stream_writer\n");
    }

    /* Create StreamWriter */
    writer = calloc(1, sizeof(struct SimpleFileAdapterStreamWriter));

    if (writer == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
        return NULL;
    }

    /* Open output file */
    file = malloc(strlen(self->directory) + strlen("/") +
                  strlen(stream_info->stream_name) + 
                  strlen(".txt") + 1);

    if (file == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
		free(writer);
        return NULL;
    }

    sprintf(file,"%s/%s.txt",self->directory, stream_info->stream_name);

    writer->fHandle = fopen(file, "w+");

    if (writer->fHandle == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Error opening %s", file);
		free(file);
		free(writer);
        return NULL;
    }

    free(file);

    /* Creates notification thread */
    printToStdoutStr = 
        RTI_RoutingServiceProperties_lookup_property(
            properties,
            "print_to_stdout");

    if (printToStdoutStr != NULL) {
	writer->printToStdout = atoi(printToStdoutStr);
    } else {
        writer->printToStdout = 0;
    }

    return writer;
}

/*----------------------------------------------------------------*/
/*             Simple File Adapter: Adapter                       */
/*----------------------------------------------------------------*/

/*
 * Destroys a plugin instance
 */
void SimpleFileAdapter_delete(
    struct RTI_RoutingServiceAdapterPlugin * adapter,
    RTI_RoutingServiceEnvironment * env) 
{
    int verbosity;

    verbosity = RTI_RoutingServiceEnvironment_get_verbosity(env);

    if (verbosity == RTI_ROUTING_SERVICE_VERBOSITY_DEBUG) {
        printf("CALL SimpleFileAdapter_delete\n");
    }

    free(adapter);
}

/*
 * Entry point to the adapter plugin
 */
DllExport
struct RTI_RoutingServiceAdapterPlugin * 
    SimpleFileAdapter_create(
        const struct RTI_RoutingServiceProperties * properties,
        RTI_RoutingServiceEnvironment * env) 
{
    struct RTI_RoutingServiceAdapterPlugin * adapter = NULL;
    struct RTI_RoutingServiceVersion version = {1,0,0,0};
    int verbosity;

    verbosity = RTI_RoutingServiceEnvironment_get_verbosity(env);

    if (verbosity == RTI_ROUTING_SERVICE_VERBOSITY_DEBUG) {
        printf("CALL SimpleFileAdapter_create\n");
    }

    adapter = calloc(1, sizeof(struct RTI_RoutingServiceAdapterPlugin));

    if (adapter == NULL) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Memory allocation error");
        return NULL;
    }

    RTI_RoutingServiceAdapterPlugin_initialize(adapter);

    adapter->plugin_version = version;

    /*
     * Assign the function pointers
     */
    adapter->adapter_plugin_delete = 
        SimpleFileAdapter_delete;

    adapter->adapter_plugin_create_connection =
	SimpleFileAdapter_create_connection;
    adapter->adapter_plugin_delete_connection =
	SimpleFileAdapter_delete_connection;

    adapter->connection_create_stream_reader =
        SimpleFileAdapterConnection_create_stream_reader;
    adapter->connection_delete_stream_reader =
        SimpleFileAdapterConnection_delete_stream_reader;
    adapter->stream_reader_read =
        SimpleFileAdapterStreamReader_read;
    adapter->stream_reader_return_loan =
        SimpleFileAdapterStreamReader_return_loan;

    adapter->connection_create_stream_writer =
        SimpleFileAdapterConnection_create_stream_writer;
    adapter->connection_delete_stream_writer =
        SimpleFileAdapterConnection_delete_stream_writer;
    adapter->stream_writer_write =
        SimpleFileAdapterStreamWriter_write;

    return (struct RTI_RoutingServiceAdapterPlugin *) adapter;
}

