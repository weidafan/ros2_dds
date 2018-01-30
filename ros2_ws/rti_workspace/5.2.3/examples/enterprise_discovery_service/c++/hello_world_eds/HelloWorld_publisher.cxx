/* HelloWorld_publisher.cxx

   A publication of data of type HelloWorld

   This file is derived from code automatically generated by the rtiddsgen 
   command:

   rtiddsgen -language C++ -example <arch> HelloWorld.idl

   Example publication of type HelloWorld automatically generated by 
   'rtiddsgen'. To test them follow these steps:

   (1) Compile this file and the example subscription.

   (2) Start the subscription on the same domain used for RTI Connext
       with the command
       objs/<arch>/HelloWorld_subscriber <domain_id> <sample_count>
                
   (3) Start the publication on the same domain used for RTI Connext
       with the command
       objs/<arch>/HelloWorld_publisher <domain_id> <sample_count>

   (4) [Optional] Specify the list of discovery initial peers and 
       multicast receive addresses via an environment variable or a file 
       (in the current working directory) called NDDS_DISCOVERY_PEERS. 
       
   You can run any number of publishers and subscribers programs, and can 
   add and remove them dynamically from the domain.

                                   
   Example:
        
       To run the example application on domain <domain_id>:
                          
       On Unix: 
       
       objs/<arch>/HelloWorld_publisher <domain_id> o
       objs/<arch>/HelloWorld_subscriber <domain_id> 
                            
       On Windows:
       
       objs\<arch>\HelloWorld_publisher <domain_id>  
       objs\<arch>\HelloWorld_subscriber <domain_id>    

       
modification history
------------ -------       
*/

#include <stdio.h>
#include <stdlib.h>
#include "ndds/ndds_cpp.h"
#include "HelloWorld.h"
#include "HelloWorldSupport.h"

/* Delete all entities */
static int publisher_shutdown(
    DDSDomainParticipant *participant)
{
    DDS_ReturnCode_t retcode;
    int status = 0;

    if (participant != NULL) {
        retcode = participant->delete_contained_entities();
        if (retcode != DDS_RETCODE_OK) {
            printf("delete_contained_entities error %d\n", retcode);
            status = -1;
        }

        retcode = DDSTheParticipantFactory->delete_participant(participant);
        if (retcode != DDS_RETCODE_OK) {
            printf("delete_participant error %d\n", retcode);
            status = -1;
        }
    }

    /* RTI Connext provides finalize_instance() method for
       people who want to release memory used by the participant factory
       singleton. Uncomment the following block of code for clean destruction of
       the participant factory singleton. */
/*
    retcode = DDSDomainParticipantFactory::finalize_instance();
    if (retcode != DDS_RETCODE_OK) {
        printf("finalize_instance error %d\n", retcode);
        status = -1;
    }
*/

    return status;
}

extern "C" int publisher_main(int domainId, int sample_count)
{
    DDSDomainParticipant *participant = NULL;
    DDSPublisher *publisher = NULL;
    DDSTopic *topic = NULL;
    DDSDataWriter *writer = NULL;
    HelloWorldDataWriter * HelloWorld_writer = NULL;
    HelloWorld *instance = NULL;
    DDS_ReturnCode_t retcode;
    DDS_InstanceHandle_t instance_handle = DDS_HANDLE_NIL;
    const char *type_name = NULL;
    int count = 0;  
    struct DDS_Duration_t send_period = {4,0};

    struct DDS_DomainParticipantQos participant_qos;

    /* Get default participant QoS from participant factory */
    retcode = DDSDomainParticipantFactory::get_instance()->get_default_participant_qos(
        participant_qos);
    if (retcode != DDS_RETCODE_OK) {
        printf("could not get default participant qos\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* Enable EDS as our discovery plugin. */
    participant_qos.discovery_config.builtin_discovery_plugins =
        DDS_DISCOVERYCONFIG_BUILTIN_EDS;

    /* Include EDS's multicast receive address (239.255.0.2) in our
       initial_peers list */
    if (!participant_qos.discovery.initial_peers.maximum(0) ||
        !participant_qos.discovery.initial_peers.maximum(1) ||
        !participant_qos.discovery.initial_peers.length(1)) {
        printf("set_length initial_peers error %d\n", retcode);
        publisher_shutdown(participant);
        return -1;
    }        
    participant_qos.discovery.initial_peers[0] = DDS_String_dup("239.255.0.2");

    participant = DDSDomainParticipantFactory::get_instance()->create_participant(
        domainId, participant_qos, 
        NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (participant == NULL) {
        printf("create_participant error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* To customize publisher QoS, use
       participant->get_default_publisher_qos() */
    publisher = participant->create_publisher(
        DDS_PUBLISHER_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (publisher == NULL) {
        printf("create_publisher error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* Register type before creating topic */
    type_name = HelloWorldTypeSupport::get_type_name();
    retcode = HelloWorldTypeSupport::register_type(
        participant, type_name);
    if (retcode != DDS_RETCODE_OK) {
        printf("register_type error %d\n", retcode);
        publisher_shutdown(participant);
        return -1;
    }

    /* To customize topic QoS, use
       participant->get_default_topic_qos() */
    topic = participant->create_topic(
        "Example HelloWorld",
        type_name, DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
        DDS_STATUS_MASK_NONE);
    if (topic == NULL) {
        printf("create_topic error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* To customize data writer QoS, use
       publisher->get_default_datawriter_qos() */
    writer = publisher->create_datawriter(
        topic, DDS_DATAWRITER_QOS_DEFAULT, NULL /* listener */,
        DDS_STATUS_MASK_NONE);
    if (writer == NULL) {
        printf("create_datawriter error\n");
        publisher_shutdown(participant);
        return -1;
    }
    HelloWorld_writer = HelloWorldDataWriter::narrow(writer);
    if (HelloWorld_writer == NULL) {
        printf("DataWriter narrow error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* Create data sample for writing */
    instance = HelloWorldTypeSupport::create_data();
    if (instance == NULL) {
        printf("HelloWorldTypeSupport::create_data error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* For data type that has key, if the same instance is going to be
       written multiple times, initialize the key here
       and register the keyed instance prior to writing */
/*
    instance_handle = HelloWorld_writer->register_instance(*instance);
*/

    /* Main loop */
    for (count=0; (sample_count == 0) || (count < sample_count); ++count) {

        printf("Writing HelloWorld, count %d\n", count);

        /* Modify the data to be sent here */
        instance->data = count;

        retcode = HelloWorld_writer->write(*instance, instance_handle);
        if (retcode != DDS_RETCODE_OK) {
            printf("write error %d\n", retcode);
        }

        NDDSUtility::sleep(send_period);
    }

/*
    retcode = HelloWorld_writer->unregister_instance(
        *instance, instance_handle);
    if (retcode != DDS_RETCODE_OK) {
        printf("unregister instance error %d\n", retcode);
    }
*/

    /* Delete data sample */
    retcode = HelloWorldTypeSupport::delete_data(instance);
    if (retcode != DDS_RETCODE_OK) {
        printf("HelloWorldTypeSupport::delete_data error %d\n", retcode);
    }

    /* Delete all entities */
    return publisher_shutdown(participant);
}

#if defined(RTI_WINCE)
int wmain(int argc, wchar_t** argv)
{
    int domainId = 0;
    int sample_count = 0; /* infinite loop */ 
    
    if (argc >= 2) {
        domainId = _wtoi(argv[1]);
    }
    if (argc >= 3) {
        sample_count = _wtoi(argv[2]);
    }

     /* Uncomment this to turn on additional logging
    NDDSConfigLogger::get_instance()->
        set_verbosity_by_category(NDDS_CONFIG_LOG_CATEGORY_API, 
                                  NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);
    */
    
    return publisher_main(domainId, sample_count);
}
 
#elif !(defined(RTI_VXWORKS) && !defined(__RTP__)) && !defined(RTI_PSOS)
int main(int argc, char *argv[])
{
    int domainId = 0;
    int sample_count = 0; /* infinite loop */

    if (argc >= 2) {
        domainId = atoi(argv[1]);
    }
    if (argc >= 3) {
        sample_count = atoi(argv[2]);
    }

    /* Uncomment this to turn on additional logging
    NDDSConfigLogger::get_instance()->
        set_verbosity_by_category(NDDS_CONFIG_LOG_CATEGORY_API, 
                                  NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);
    */
    
    return publisher_main(domainId, sample_count);
}
#endif
