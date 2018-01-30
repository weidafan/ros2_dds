/*****************************************************************************/
/*         (c) Copyright, Real-Time Innovations, All rights reserved.        */
/*                                                                           */
/*         Permission to modify and use for internal purposes granted.       */
/* This software is provided "as is", without warranty, express or implied.  */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    const char * sharedSubscriberName;
    const char * qosLibrary;
    const char * qosProfile;
    unsigned int sampleCount;
    
    HelloWorldParams() {
        domainId = 0;
        queueTopicName = "HelloWorldTopic";  
        sharedSubscriberName = "SharedSubscriber";
        qosLibrary = NULL;
        qosProfile = NULL;
        sampleCount = 0;
    }
};

class HelloWorldListener : public DataReaderListener {
  public:
    unsigned int sampleCount;
    bool foundQS;
    
    virtual void on_requested_deadline_missed(
        DataReader* /*reader*/,
        const RequestedDeadlineMissedStatus& /*status*/) {}
    
    virtual void on_requested_incompatible_qos(
        DataReader* /*reader*/,
        const RequestedIncompatibleQosStatus& /*status*/) {}
    
    virtual void on_sample_rejected(
        DataReader* /*reader*/,
        const SampleRejectedStatus& /*status*/) {}

    virtual void on_liveliness_changed(
        DataReader* /*reader*/,
        const LivelinessChangedStatus& /*status*/) {}

    virtual void on_sample_lost(
        DataReader* /*reader*/,
        const SampleLostStatus& /*status*/) {}

    virtual void on_subscription_matched(
        DataReader* /*reader*/,
        const SubscriptionMatchedStatus& /*status*/);

    virtual void on_data_available(DataReader* reader);
    
    HelloWorldListener() {
        sampleCount = 0;
        foundQS = false;
    }
};

void HelloWorldListener::on_subscription_matched(
        DataReader* reader,
        const SubscriptionMatchedStatus& status) 
{
    PublicationBuiltinTopicData publicationData;
    ReturnCode_t retcode;
    
    if (status.current_count_change > 0) {
        retcode = reader->get_matched_publication_data (
                publicationData, 
                status.last_publication_handle);
        
        if (retcode == RETCODE_OK) {
            if (publicationData.service.kind == DDS_QUEUING_SERVICE_QOS ) {
                foundQS = true;
            }
        }
    }
}

void HelloWorldListener::on_data_available(DataReader* reader)
{
    HelloWorldDataReader *HelloWorld_reader = NULL;
    HelloWorldSeq dataSeq;
    SampleInfoSeq infoSeq;
    ReturnCode_t retcode;
    int i;
    DDS_AckResponseData_t responseData;

    HelloWorld_reader = HelloWorldDataReader::narrow(reader);
    if (HelloWorld_reader == NULL) {
        printf("DataReader narrow error\n");
        return;
    }

    retcode = HelloWorld_reader->take(
        dataSeq, infoSeq, LENGTH_UNLIMITED,
        ANY_SAMPLE_STATE, ANY_VIEW_STATE, ANY_INSTANCE_STATE);

    if (retcode == RETCODE_NO_DATA) {
        return;
    } else if (retcode != RETCODE_OK) {
        printf("take error %d\n", retcode);
        return;
    }

    responseData.value.ensure_length(1,1);
    responseData.value[0] = 1;
    
    for (i = 0; i < dataSeq.length(); ++i) {
        if (infoSeq[i].valid_data) {
            sampleCount++;
            printf("Received sample with message ID: %d and sequence number: %d\n", 
                    dataSeq[i].messageId, infoSeq[i].original_publication_virtual_sequence_number.low);
            retcode = reader->acknowledge_sample(infoSeq[i],responseData);
            
            if (retcode != RETCODE_OK) {
                printf("acknowledge_sample error %d\n", retcode);
            }
        }
    }

    retcode = HelloWorld_reader->return_loan(dataSeq, infoSeq);
    if (retcode != RETCODE_OK) {
        printf("return loan error %d\n", retcode);
    }
}

/* Delete all entities */
static int subscriber_shutdown(
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

    /* RTI Connext provides the finalize_instance() method on
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

void generatedReaderGuidExpr(char * readerGuidExpr)
{
    char * ptr = readerGuidExpr;
    
    strcpy(ptr, "@related_reader_guid.value = &hex(");
    ptr+= strlen(ptr);
    sprintf(ptr,"%032llx",(long long)readerGuidExpr);
    ptr+= strlen(ptr);
    strcpy(ptr,")");
}

int subscriber_main(HelloWorldParams & params)
{
    DomainParticipant *participant = NULL;
    Subscriber *subscriber = NULL;
    Topic *topic = NULL;
    HelloWorldListener *readerListener = NULL; 
    DataReader *reader = NULL;
    ReturnCode_t retcode;
    const char *typeName = NULL;
    Duration_t receivePeriod = {4,0}, waitPeriod = {0,100000000};
    int status = 0;
    DataReaderQos readerQos;
    char topicName[255],readerGuidExpr[255];
    DDS_StringSeq cftParams;
    DDSContentFilteredTopic * cftTopic = NULL;
    

    /* To customize the participant QoS, use 
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
        subscriber_shutdown(participant);
        return -1;
    }

    /* To customize the subscriber QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    if (params.qosProfile == NULL) {
        subscriber = participant->create_subscriber(
            SUBSCRIBER_QOS_DEFAULT, NULL /* listener */, STATUS_MASK_NONE);
    } else {
        subscriber = participant->create_subscriber_with_profile(
            params.qosLibrary, params.qosProfile, NULL /* listener */, STATUS_MASK_NONE);        
    }
    
    if (subscriber == NULL) {
        printf("create_subscriber error\n");
        subscriber_shutdown(participant);
        return -1;
    }

    /* Register the type before creating the topic */
    typeName = "HelloWorld";

    retcode = HelloWorldTypeSupport::register_type(
            participant, typeName);
    if (retcode != RETCODE_OK) {
        printf("register_type error %d\n", retcode);
        subscriber_shutdown(participant);
        return -1;
    }

    sprintf(topicName,"%s@%s", params.queueTopicName, params.sharedSubscriberName);

    /* To customize the topic QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    if (params.qosProfile == NULL) {
        topic = participant->create_topic(
            topicName,
            typeName, TOPIC_QOS_DEFAULT, NULL /* listener */,
            STATUS_MASK_NONE);
    } else {
        topic = participant->create_topic_with_profile(
            topicName,
            typeName, params.qosLibrary, params.qosProfile, 
            NULL /* listener */,
            STATUS_MASK_NONE);        
    }
    if (topic == NULL) {
        printf("create_topic error\n");
        subscriber_shutdown(participant);
        return -1;
    }
    
    generatedReaderGuidExpr(readerGuidExpr);
    
    cftTopic = participant->create_contentfilteredtopic(
                "CFT", 
                topic, 
                readerGuidExpr,
                cftParams);
    if (cftTopic == NULL) {
        printf("create_topic error\n");
        subscriber_shutdown(participant);
        return -1;
    }

    /* Create a data reader listener */
    readerListener = new HelloWorldListener();
    
    /* To customize the data reader QoS, use 
       the configuration file USER_QOS_PROFILES.xml */
    if (params.qosProfile == NULL) {
        retcode = subscriber->get_default_datareader_qos(readerQos);
    } else {
        retcode = DDSDomainParticipantFactory::get_instance()->get_datareader_qos_from_profile(readerQos,params.qosLibrary,params.qosProfile);        
    }
    if (retcode != RETCODE_OK) {
        printf("get_default_datareader_qos error %d\n", retcode);
        subscriber_shutdown(participant);
        return -1;
    }
    
    retcode = DDSPropertyQosPolicyHelper::assert_property(
        readerQos.property,
        "dds.data_reader.shared_subscriber_name",
        params.sharedSubscriberName,
        DDS_BOOLEAN_TRUE);
    if (retcode != RETCODE_OK) {
        printf("assert_property error %d\n", retcode);
        subscriber_shutdown(participant);
        return -1;
    }
    
    reader = subscriber->create_datareader(
        cftTopic, readerQos, readerListener,
        STATUS_MASK_ALL);
    if (reader == NULL) {
        printf("create_datareader error\n");
        subscriber_shutdown(participant);
        delete readerListener;
        return -1;
    }
    
    /* Wait for Queuing Service discovery */
    printf("Waiting to discover SharedReaderQueue ...\n");
    
    while (!readerListener->foundQS) {
        NDDSUtility::sleep(waitPeriod);
    }

    printf("SharedReaderQueue discovered...\n");

    /* Main loop */
    while (params.sampleCount == 0 ||
            readerListener->sampleCount < params.sampleCount) {
        NDDSUtility::sleep(receivePeriod);
    }

    /* Delete all entities */
    status = subscriber_shutdown(participant);
    delete readerListener;

    return status;
}

void print_usage()
{
    HelloWorldParams params;
    
    printf("Usage:\n");
    printf("\t-d <domainId>              default: %d\n", params.domainId);
    printf("\t-q <queueTopicName>        default: %s\n", params.queueTopicName);
    printf("\t-r <sharedSubscriberName>  default: %s\n", params.sharedSubscriberName);
    printf("\t-p <qosProfileName>        default: <none>\n");
    printf("\t-c <sampleCount>           default: %d - UNLIMITED -\n", params.sampleCount);
}

extern "C" int main(int argc, char *argv[])
{
    HelloWorldParams params;
    char profileName[128];
    char * profileNamePtr;

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
        } else if (!strcmp(argv[i],"-r")) {
            if (i == argc-1) {
                printf("Expected <sharedSubscriberName>\n");
                print_usage();
                return -1;
            }
            params.sharedSubscriberName = argv[++i];
        } else if (!strcmp(argv[i],"-c")) {
            if (i == argc-1) {
                printf("Expected <sampleCount>\n");
                print_usage();
                return -1;
            }
            params.sampleCount = atoi(argv[++i]);
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
                                  
    return subscriber_main(params);
}

