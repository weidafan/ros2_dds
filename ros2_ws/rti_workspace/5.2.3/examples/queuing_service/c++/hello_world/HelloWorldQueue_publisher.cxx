/*****************************************************************************/
/*         (c) Copyright, Real-Time Innovations, All rights reserved.        */
/*                                                                           */
/*         Permission to modify and use for internal purposes granted.       */
/* This software is provided "as is", without warranty, express or implied.  */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "HelloWorldQueue.h"
#include "HelloWorldQueueSupport.h"
#include "ndds/ndds_cpp.h"

#include "ndds/ndds_namespace_cpp.h"

using namespace DDS;

class HelloWorldParams
{
  public:
    int domainId;
    const char * queueTopicName;
    const char * qosLibrary;
    const char * qosProfile;
    unsigned int sampleCount;
    unsigned int payloadSize;
    
    HelloWorldParams() {
        domainId = 0;
        queueTopicName = "HelloWorldTopic";  
        qosLibrary = NULL;
        qosProfile = NULL;
        sampleCount = 0;
        payloadSize = 32;
    }
};

class HelloWorldListener : public DataWriterListener {
  public:
    bool foundQS;
    
    virtual void on_offered_deadline_missed(
            DDSDataWriter *writer, const OfferedDeadlineMissedStatus &status) {};
     
    virtual void on_liveliness_lost(
            DDSDataWriter *writer, const LivelinessLostStatus &status) {};
     
    virtual void on_offered_incompatible_qos(
            DDSDataWriter *writer, const OfferedIncompatibleQosStatus &status) {}
     
    virtual void on_publication_matched(
            DDSDataWriter *writer, const PublicationMatchedStatus &status) 
    {
        SubscriptionBuiltinTopicData subscriptionData;
        ReturnCode_t retcode;
        
        if (status.current_count_change > 0) {
            retcode = writer->get_matched_subscription_data (
                    subscriptionData, 
                    status.last_subscription_handle);
            
            if (retcode == RETCODE_OK) {
                if (subscriptionData.service.kind == DDS_QUEUING_SERVICE_QOS ) {
                    foundQS = true;
                }
            }
        }
    }
     
    virtual void on_reliable_writer_cache_changed(
            DDSDataWriter *writer, const ReliableWriterCacheChangedStatus &status) {};
     
    virtual void on_reliable_reader_activity_changed(
            DDSDataWriter *writer, const ReliableReaderActivityChangedStatus &status) {};
     
    virtual void on_instance_replaced(
            DDSDataWriter *writer, const InstanceHandle_t &handle) {};
    
    virtual void on_application_acknowledgment(DDSDataWriter *writer, const AcknowledgmentInfo &info)
    {
        const char * response;
        
        if (info.valid_response_data) {
            if (info.response_data.value[0] == 1) {
                response = "Accepted";
            } else {
                response = "Rejected";
            }
            
            printf("Received ACK from QS for sample with sequence number: %d Process result: %s\n",
                    info.sample_identity.sequence_number.low, 
                    response);
        }
    }
    
    HelloWorldListener() {
        foundQS = false;
    }
};

/* Delete all entities */
static int publisher_shutdown(
    DomainParticipant *participant)
{
    ReturnCode_t retcode;
    int status = 0;

    if (participant != NULL) {
        retcode = participant->delete_contained_entities();
        if (retcode != RETCODE_OK) {
            printf("delete_contained_entities error %d\n", retcode);
            status = -1;
        }

        retcode = TheParticipantFactory->delete_participant(participant);
        if (retcode != RETCODE_OK) {
            printf("delete_participant error %d\n", retcode);
            status = -1;
        }
    }

    /* RTI Connext provides finalize_instance() method on
       domain participant factory for people who want to release memory used
       by the participant factory. Uncomment the following block of code for
       clean destruction of the singleton. */
/*
    retcode = DomainParticipantFactory::finalize_instance();
    if (retcode != RETCODE_OK) {
        printf("finalize_instance error %d\n", retcode);
        status = -1;
    }
*/

    return status;
}

int publisher_main(HelloWorldParams & params)
{
    DomainParticipant *participant = NULL;
    Publisher *publisher = NULL;
    Topic *topic = NULL;
    DataWriter *writer = NULL;
    HelloWorld *instance = NULL;
    ReturnCode_t retcode;
    InstanceHandle_t instance_handle = HANDLE_NIL;
    const char *type_name = NULL;
    Duration_t send_period = {1,0}, waitPeriod = {0,100000000};
    HelloWorldListener writerListener;
    WriteParams_t writeParams;

    /* To customize participant QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    if (params.qosProfile == NULL) {
        participant = TheParticipantFactory->create_participant(
            params.domainId, PARTICIPANT_QOS_DEFAULT, 
            NULL /* listener */, STATUS_MASK_NONE);
    } else {
        participant = TheParticipantFactory->create_participant_with_profile(
            params.domainId, params.qosLibrary, params.qosProfile, 
            NULL /* listener */, STATUS_MASK_NONE);
    }

    if (participant == NULL) {
        printf("create_participant error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* To customize publisher QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    if (params.qosProfile == NULL) {
        publisher = participant->create_publisher(
            PUBLISHER_QOS_DEFAULT, NULL /* listener */, STATUS_MASK_NONE);
    } else {
        publisher = participant->create_publisher_with_profile(
            params.qosLibrary, params.qosProfile,
            NULL /* listener */, STATUS_MASK_NONE);        
    }
    
    if (publisher == NULL) {
        printf("create_publisher error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* Register type before creating topic */
    type_name = "HelloWorld";

    retcode = HelloWorldTypeSupport::register_type(
            participant, type_name);
    if (retcode != RETCODE_OK) {
        printf("register_type error %d\n", retcode);
        publisher_shutdown(participant);
        return -1;
    }
    
    /* To customize topic QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    if (params.qosProfile == NULL) {
        topic = participant->create_topic(
            params.queueTopicName,
            type_name, TOPIC_QOS_DEFAULT, NULL /* listener */,
            STATUS_MASK_NONE);
    } else {
        topic = participant->create_topic_with_profile(
            params.queueTopicName,
            type_name, params.qosLibrary, params.qosProfile, 
            NULL /* listener */,
            STATUS_MASK_NONE);        
    }
    
    if (topic == NULL) {
        printf("create_topic error\n");
        publisher_shutdown(participant);
        return -1;
    }
        
    /* To customize data writer QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    if (params.qosProfile == NULL) {
        writer = publisher->create_datawriter(
            topic, DATAWRITER_QOS_DEFAULT, &writerListener /* listener */,
            STATUS_MASK_ALL);
    } else {
        writer = publisher->create_datawriter_with_profile(
            topic, params.qosLibrary, params.qosProfile, 
            &writerListener /* listener */,
            STATUS_MASK_ALL);        
    }
    
    if (writer == NULL) {
        printf("create_datawriter error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* Wait for Queuing Service discovery */
    printf("Waiting to discover SharedReaderQueue ...\n");
    
    while (!writerListener.foundQS) {
        NDDSUtility::sleep(waitPeriod);
    }

    printf("SharedReaderQueue discovered...\n");

    /* Create data sample for writing */
    instance = HelloWorldTypeSupport::create_data();

    if (instance == NULL) {
        printf("HelloWorldTypeSupport::create_data error\n");
        publisher_shutdown(participant);
        return -1;
    }

    instance->payload.ensure_length(params.payloadSize,params.payloadSize);

    writeParams.identity = DDS_AUTO_SAMPLE_IDENTITY;
    writeParams.replace_auto = DDS_BOOLEAN_TRUE;
    
    /* Main loop */
    for (int count=0; (params.sampleCount == 0) || (count < (int) params.sampleCount); ++count) {
        instance->messageId = count;

        /* Modify the data to be sent here */
        retcode = ((HelloWorldDataWriter *)writer)->write_w_params(*instance, writeParams);

        if (retcode != RETCODE_OK) {
            printf("write error %d\n", retcode);
        }

        printf("Wrote sample with message ID: %d and sequence number: %d\n", count, writeParams.identity.sequence_number.low);
        writeParams.identity = DDS_AUTO_SAMPLE_IDENTITY;
        NDDSUtility::sleep(send_period);
    }

    /* Delete data sample */
    if (instance != NULL) {
        retcode = HelloWorldTypeSupport::delete_data(instance);
        if (retcode != RETCODE_OK) {
            printf("HelloWorldTypeSupport::delete_data error %d\n", retcode);
        }
    }
    
    /* Delete all entities */
    return publisher_shutdown(participant);
}

void print_usage()
{
    HelloWorldParams params;
    
    printf("Usage:\n");
    printf("\t-d <domainId>              default: %d\n", params.domainId);
    printf("\t-q <queueTopicName>        default: %s\n", params.queueTopicName);
    printf("\t-p <qosProfileName>        default: <none>\n");
    printf("\t-c <sampleCount>           default: %d - UNLIMITED -\n", params.sampleCount);
    printf("\t-l <samplePayloadLength>   default: %d\n", params.payloadSize);
}

int main(int argc, char *argv[])
{
    HelloWorldParams params; 
    char profileName[128];
    char * profileNamePtr;
    
    /* Parse command-line arguments */
    for (int i = 1; i < argc; ++i) {
        if (!strcmp(argv[i],"-d")) {
            if (i == argc-1) {
                printf("Expected <domainId>\n");
                print_usage();
                return -1;
            }
            params.domainId = atoi(argv[++i]);
        } else if (!strcmp(argv[i],"-q")) {
            if (i == argc-1) {
                printf("Expected <queueTopicName>\n");
                print_usage();
                return -1;
            }
            params.queueTopicName = argv[++i];
        } else if (!strcmp(argv[i],"-c")) {
            if (i == argc-1) {
                printf("Expected <sampleCount>\n");
                print_usage();
                return -1;
            }
            params.sampleCount = atoi(argv[++i]);
        } else if (!strcmp(argv[i],"-l")) {
            if (i == argc-1) {
                printf("Expected <samplePayloadLength>\n");
                print_usage();
                return -1;
            }
            params.payloadSize = atoi(argv[++i]);
        } else if (!strcmp(argv[i],"-p")) {
            if (i == argc-1) {
                printf("Expected <qosProfileName>\n");
                print_usage();
                return -1;
            }
            strcpy(profileName,argv[++i]);
            profileNamePtr = strstr(profileName,"::");
            
            if (profileNamePtr == NULL) {
                printf("Expected <qosProfileName> as <libraryName>::<profileName>\n");
                print_usage();
                return -1;
            }
            
            *profileNamePtr = 0;
            profileNamePtr+=2;
            
            params.qosProfile = profileNamePtr;
            params.qosLibrary = profileName;
        } else {
            printf("Unknown option: %s\n", argv[i]);
            print_usage();
            return -1;
        }
    }

    /* Uncomment this to turn on additional logging
    NDDSConfigLogger::get_instance()->
        set_verbosity_by_category(NDDS_CONFIG_LOG_CATEGORY_API, 
                                  NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);
    */
    
    return publisher_main(params);
    
    return 1;
}

