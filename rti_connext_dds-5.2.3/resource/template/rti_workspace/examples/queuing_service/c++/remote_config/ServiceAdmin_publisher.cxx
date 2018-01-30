/****************************************************************************/
/*         (c) Copyright, Real-Time Innovations, All rights reserved.       */
/*                                                                          */
/*         Permission to modify and use for internal purposes granted.      */
/* This software is provided "as is", without warranty, express or implied. */
/*                                                                          */
/****************************************************************************/

#include <iostream>
#include <sstream>
#include <iomanip>

/*
* Include the generated support for the administration request and reply types
*/
#include "ServiceAdmin.h"
#include "ServiceAdminSupport.h"
/*
* Include queuing service types
*/
#include "QueuingServiceTypes.h"
#include "QueuingServiceTypesSupport.h"

/*
* Include the request-reply API
*/
#include "ndds/ndds_requestreply_cpp.h"


struct QueueParameters_t {
    std::string sessionName;
    std::string topicName;
    std::string typeName;
    std::string replyTypeName;
};

QueueParameters_t DEFAULT_QUEUE_PARAMETERS = {
    "Session",
    "HelloWorldTopic",
    "HelloWorld",
    "HelloWorld"};

    
class ServiceAdminRequesterExample {

private:
    DDS::DomainParticipant * participant;

public:

    ServiceAdminRequesterExample(
        int domain_id, 
        char * qosLibrary, 
        char * qosProfile) {

            /* Create the participant */
            if (qosProfile == NULL) {
                participant = DDS::DomainParticipantFactory::get_instance()->
                    create_participant(
                    domain_id, DDS::PARTICIPANT_QOS_DEFAULT,
                    NULL /* listener */, DDS::STATUS_MASK_NONE);
            } else {
                participant = DDS::DomainParticipantFactory::get_instance()->
                    create_participant_with_profile(
                    domain_id, qosLibrary, qosProfile,
                    NULL /* listener */, DDS::STATUS_MASK_NONE);
            }

            if (participant == NULL) {
                throw std::runtime_error("create_participant error");
            }
    }

    ~ServiceAdminRequesterExample() {
        /* Delete the participant and all contained entities */

        DDS::ReturnCode_t retcode = participant->delete_contained_entities();
        if (retcode != DDS::RETCODE_OK) {
            printf("delete_contained_entities error %d\n", retcode);
        }

        retcode = DDS::DomainParticipantFactory::get_instance()->
            delete_participant(participant);
        if (retcode != DDS::RETCODE_OK) {
            printf("delete_participant error %d\n", retcode);
        }
    }

    void run_example(
        std::string targetService, 
        RTI::Service::Admin::CommandActionKind action,
        std::string resourceIdentifier,
        QueueParameters_t& queueParams,
        std::string sampleSelector) {
            std::string requestAction = "create";
            DDS_Duration_t one_sec = {1, 0};
            DDS_Duration_t ten_sec = {10, 0};
            unsigned int WAIT_TIMEOUT_SEC_MAX = 10;
            unsigned int waitCount = 0;
            struct DDS_PublicationMatchedStatus matchedStatus =
                    DDS_PublicationMatchedStatus_INITIALIZER;
            const DDS::Duration_t MAX_WAIT = {20, 0};
            bool expectingMoreReplies = true;
            connext::WriteSample<RTI::Service::Admin::CommandRequest> request;


            /* Create the requester with the participant, and a QoS profile
            * defined in USER_QOS_PROFILES.xml
            */
            connext::RequesterParams requester_params(participant);
            requester_params.request_topic_name(RTI::Service::Admin::COMMAND_REQUEST_TOPIC_NAME);
            requester_params.reply_topic_name(RTI::Service::Admin::COMMAND_REPLY_TOPIC_NAME);

            requester_params.qos_profile( "HelloWorldQueue_Library", "HelloWorldQueue_Profile");

            /* In this example we create the requester on the stack, but you
            * can create on the heap as well
            */
            connext::Requester<
                RTI::Service::Admin::CommandRequest, 
                RTI::Service::Admin::CommandReply> requester(requester_params);
            
            std::cout << "Waiting for a matching QS..." << std::endl;
            while (matchedStatus.current_count < 1 && waitCount < WAIT_TIMEOUT_SEC_MAX) {
                requester.get_request_datawriter()->get_publication_matched_status(matchedStatus);
                waitCount++;
                NDDSUtility::sleep(one_sec);
            }

            if (matchedStatus.current_count < 1)
            {
                throw std::runtime_error("No matching QS found");
            }

            /* Send the request */
            
            request.data().service = RTI::Service::Admin::RTI_SERVICE_QUEUING_SERVICE;
            request.data().service_name = DDS_String_dup(targetService.c_str());
            request.data().action = action;
            request.data().resource_identifier = DDS_String_dup(resourceIdentifier.c_str());

            // set the request body for the actions that require it
            if (action == RTI::Service::Admin::RTI_SERVICE_COMMAND_ACTION_CREATE) {
                request.data().string_body = DDS_String_dup(create_queue_snippet(queueParams).c_str());
            } else {
                request.data().string_body = DDS_String_dup(sampleSelector.c_str());
            }

            requester.send_request(request);
            std::cout << "Command request sent" << std::endl;
            std::cout << "		target service: " << request.data().service_name << std::endl;
            std::cout << "		action: " << request.data().action << std::endl;
            std::cout << "		resource: " << request.data().resource_identifier << "\n" << std::endl;
            std::cout << request.data().string_body << "\n" << std::endl;


            while(expectingMoreReplies) {
                typedef connext::LoanedSamples<RTI::Service::Admin::CommandReply>::iterator iterator;
                connext::LoanedSamples<RTI::Service::Admin::CommandReply> replies =
                    requester.receive_replies(MAX_WAIT);

                /* When receive_replies times out,
                * it returns an empty reply collection
                */
                if (replies.length() == 0) {
                    throw std::runtime_error("Timed out waiting for replies");
                    return;
                }

                /* Print the replies received */
                for (iterator it = replies.begin(); it != replies.end(); ++it) {
                    if (it->info().valid_data) {

                        if (it->data().retcode == RTI::Service::Admin::RTI_SERVICE_COMMAND_REPLY_OK) {
                            std::cout << "\nCommand returned: " << it->data().string_body << std::endl;
                            if (action == RTI::Service::Admin::RTI_SERVICE_COMMAND_ACTION_GET){
                                handle_reply_for_get_request(resourceIdentifier, it->data());
                            } else {
                                std::cout << "COMMAND REPLY OK" << std::endl;
                            }
                        } else { 
                            std::cout << "COMMAND REPLY RECEIVED" << std::endl;
                            std::cout << "Unsuccessful command returned value " << it->data().retcode << "." << std::endl;
                            NDDSUtility::sleep(ten_sec);
                            throw std::runtime_error("Error in replier");
                        }
                        if ((it->info().flag & (int)INTERMEDIATE_REPLY_SEQUENCE_SAMPLE) == 0){
                            expectingMoreReplies = false;
                        }
                    }
                }

                /* We don't need to call replies.return_loan(); the destructor
                * takes care of doing it every time replies goes out of scope
                */
            }
            std::cout << "\nDone" << std::endl;
    }

    void handle_reply_for_get_request(
        std::string& resourceIdentifier,
        RTI::Service::Admin::CommandReply& reply) {

            if (check_string_end(resourceIdentifier, "status")) {
                RTI::QueuingService::Monitoring::SharedReaderQueueStatus queueStatus;

                RTI::QueuingService::Monitoring::SharedReaderQueueStatus_initialize(&queueStatus);

                RTI::QueuingService::Monitoring::SharedReaderQueueStatusTypeSupport::deserialize_data_from_cdr_buffer(
                    &queueStatus,
                    (const char *) reply.octet_body.get_contiguous_buffer(),
                    (unsigned int) reply.octet_body.length());
                RTI::QueuingService::Monitoring::SharedReaderQueueStatusTypeSupport::print_data(&queueStatus);
            } else if (check_string_end(resourceIdentifier, "data")) {
                RTI::QueuingService::Monitoring::ServiceData serviceData;
	
                RTI::QueuingService::Monitoring::ServiceData_initialize(&serviceData);

                RTI::QueuingService::Monitoring::ServiceDataTypeSupport::deserialize_data_from_cdr_buffer(
                    &serviceData,
                    (const char *) reply.octet_body.get_contiguous_buffer(),
                    (unsigned int) reply.octet_body.length());
                if (serviceData.shared_reader_queue_data_list.length() == 0) {
                    std::cout << "\nno queues in service" << std::endl;
                } else {
                    for (int i = 0; i < serviceData.shared_reader_queue_data_list.length(); i++){
                        std::cout << "\nqueue[" << i << "]:" << std::endl;
                        RTI::QueuingService::Monitoring::SharedReaderQueueData queueData = 
                                serviceData.shared_reader_queue_data_list.get_at(i);
                        RTI::QueuingService::Monitoring::SharedReaderQueueDataTypeSupport::print_data(&queueData);
                    }
                }
            } else if (check_string_end(resourceIdentifier, "message")) {
                //if length is zero then no messages with the specified
                //attributes were found in the queue
                if (reply.octet_body.length() == 0) {
                    return;
                }
                RTI::QueuingService::Message message;           

                RTI::QueuingService::Message_initialize(&message);
 
                RTI::QueuingService::MessageTypeSupport::deserialize_data_from_cdr_buffer(
                    &message,
                    (const char *) reply.octet_body._contiguous_buffer,
                    (unsigned int) reply.octet_body.length());
                std::cout << "\nretrieved message:" << std::endl;
                std::cout << "  status: " <<  message.status << std::endl;
                std::cout << "  identity: " << sample_identity_to_string(message.original_virtual_sample_identity);
                /*
                * Use here the type plugin used in your app to retrieve the 
                * application data, that is in the sample_buffer field.
                * 
                * i.e: 
                * HelloWorldRequest helloWorldRequest;
                * HelloWorldRequestTypeSupport.deserialize_data_from_cdr_buffer(
                *      &helloWorldRequest,
                *      (const char *) message.sample_buffer._contiguous_buffer,
                *      (unsigned int) message.sample_buffer.length());
                * HelloWorldRequestTypeSupport::print_data(&helloWorldRequest);
                */ 
            }
    }


    bool check_string_end(std::string const &fullString, std::string const &ending) {
        
        if (ending.size() > fullString.size()) { 
            return false; 
        }

        return std::equal(ending.rbegin(), ending.rend(), fullString.rbegin());
    }


    std::string create_queue_snippet(QueueParameters_t& queueParams) {	
        std::ostringstream stringStream;
        stringStream << "str://\"<shared_reader_queue name=\"" << queueParams.topicName <<
            "\" session=\"" << queueParams.sessionName << "\">\n";
        stringStream << "<datareader_qos base_name=\"HelloWorldQS_Library::HelloWorldQS_Profile\"/>\n";
        stringStream << "<datawriter_qos base_name=\"HelloWorldQS_Library::HelloWorldQS_Profile\"/>\n"; 
        stringStream << "<topic_name>" << queueParams.topicName << "</topic_name>\n";
        stringStream << "<type_name>" << queueParams.typeName << "</type_name>\n";
        stringStream << "<queue_qos>\n";
        stringStream << "<resource_limits>\n";
        stringStream << "<queue_allocation_settings>\n";
        stringStream << "<max_count>10000</max_count>\n";
        stringStream << "</queue_allocation_settings>\n";
        stringStream << "</resource_limits>";
        stringStream << "<distribution>\n";       
        stringStream << "<kind>ROUND_ROBIN</kind>\n";
        stringStream << "<property>\n";
        stringStream << "<value>\n";
        stringStream << "<element>\n";
        stringStream << "<name>UNACKED_THRESHOLD</name>\n";
        stringStream << "<value>5</value>\n";
        stringStream << "</element>\n";
        stringStream << "</value>\n";
        stringStream << "</property>\n";
        stringStream << "</distribution>\n";
        stringStream << "<reliability>\n";
        stringStream << "<app_ack_sample_to_producer>1</app_ack_sample_to_producer>\n";
        stringStream << "</reliability>\n";
        stringStream << "<redelivery>\n";
        stringStream << "<max_delivery_retries>6</max_delivery_retries>\n";
        stringStream << "<response_timeout>\n";
        stringStream << "<duration>\n";
        stringStream << "<sec>30</sec>\n";
        stringStream << "<nanosec>0</nanosec>\n";
        stringStream << "</duration>\n";
        stringStream << "</response_timeout>\n";
        stringStream << "</redelivery>\n";
        stringStream << "</queue_qos>\n";
        stringStream << "</shared_reader_queue>\""; 
        return stringStream.str();
    }

    std::string sample_identity_to_string(RTI::QueuingService::SampleIdentity_t sampleIdentity) {
        std::ostringstream stringStream;
        stringStream << "writer GUID: ";
        for (int i = 0; i < 16; i++) {
            stringStream << std::uppercase << std::hex << std::setfill('0') << std::setw(2) << (int) sampleIdentity.writer_guid.value[i];
            if ((i < 15) && (i % 2 == 1)) { stringStream << ":"; }
        }
        stringStream << std::dec << "  SN: (" << sampleIdentity.sequence_number.high << "," << sampleIdentity.sequence_number.low << ")\n"; 
        return stringStream.str();
    }

};


void print_usage() {
    std::cout <<  "Usage: -d <domainId> -q <serviceName> -o <profileName> [create|delete|get] <resourceIdentifier> {command options}" << std::endl;
    std::cout <<  "-d <domainId>     default: 1" << std::endl;
    std::cout <<  "-q <serviceName>  default: RemoteConfigQS" << std::endl;
    std::cout <<  "-o <profileName>  default: <none>" << std::endl;
    std::cout <<  "{create options}: -s <sessionName> -p <topicName> -t <typeName> -r <replyTypeName>" << std::endl;
    std::cout <<  "-s <sessionName>    default: Session" << std::endl;
    std::cout <<  "-p <topicName>      default: HelloWorldTopic" << std::endl;
    std::cout <<  "-t <typeName>       default: HelloWorld" << std::endl;
    std::cout <<  "-r <replyTypeName>  default: HelloWorld" << std::endl;
    std::cout <<  "{delete options}: <sampleSelector>" << std::endl;
    std::cout <<  "{get options}:    <sampleSelector>" << std::endl;
}


int serviceadmin_main(int domain_id, char *qosLibrary, char *qosProfile,
        std::string targetService,
        RTI::Service::Admin::CommandActionKind action,
        std::string resourceIdentifier,
        QueueParameters_t& queueParams,
        std::string sampleSelector){

    try {
        ServiceAdminRequesterExample(domain_id, qosLibrary, qosProfile)
            .run_example(targetService, action, resourceIdentifier, queueParams, sampleSelector);
        return 0;
    } catch (const std::exception& ex) {
        std::cout << "Exception: " << ex.what() << std::endl;
        return -1;
    }
}

#if !(defined(RTI_VXWORKS) && !defined(__RTP__)) && !defined(RTI_PSOS)
int main(int argc, char *argv[]) {

    char profileName[128];
    char * profileNamePtr;
    bool isActionFound =  false;
    bool isResourceIdentifierFound = false;
    bool isSelectorFound = false; 

    /* Default values */
    int domain_id = 1;
    std::string targetService = "RemoteConfigQS";
    char * qosProfile = NULL;
    char * qosLibrary = NULL;
    RTI::Service::Admin::CommandActionKind action =
            RTI::Service::Admin::RTI_SERVICE_COMMAND_ACTION_CREATE;
    std::string resourceIdentifier =
            "/domain_participant/DomainParticipant/shared_subscriber/SharedSubscriber";
    std::string sampleSelector = "";
    QueueParameters_t queueParams = DEFAULT_QUEUE_PARAMETERS;

    for (int i = 1; i < argc; ++i) {
        if (!strcmp(argv[i],"-d")) {
            if (i == argc-1) {
                printf("Expected <domainId>\n");
                print_usage();
                return -1;
            }
            domain_id = atoi(argv[++i]);
        } else if (!strcmp(argv[i],"-q")) {
            if (i == argc-1) {
                printf("Expected <serviceName>\n");
                print_usage();
                return -1;
            }
            targetService = argv[++i];
        } else if (!strcmp(argv[i],"-o")) {
            if (i == argc-1) {
                printf("Expected <qosProfileName>\n");
                print_usage();
                return -1;
            }
            strncpy(profileName,argv[++i],128);
            profileNamePtr = strstr(profileName,"::");
            if (profileNamePtr == NULL) {
                printf("Expected <qosProfileName> as <libraryName>::<profileName>\n");
                print_usage();
                return -1;
            }
            *profileNamePtr = 0;
            profileNamePtr+=2;
            qosProfile = profileNamePtr;
            qosLibrary = profileName;
        } else if (!strcmp(argv[i],"-s")) {
            if (i == argc-1) {
                printf("Expected <sessionName>\n");
                print_usage();
                return -1;
            }
            queueParams.sessionName = argv[++i];
        } else if (!strcmp(argv[i],"-p")) {
            if (i == argc-1) {
                printf("Expected <topicName>\n");
                print_usage();
                return -1;
            }
            queueParams.topicName = argv[++i];
        } else if (!strcmp(argv[i],"-t")) {
            if (i == argc-1) {
                printf("Expected <typeName>\n");
                print_usage();
                return -1;
            }
            queueParams.typeName = argv[++i];
        } else if (!strcmp(argv[i],"-r")) {
            if (i == argc-1) {
                printf("Expected <replyTypeName>\n");
                print_usage();
                return -1;
            }
            queueParams.replyTypeName = argv[++i];
        } else if (!isActionFound) {
            if (!strcmp(argv[i],"create")) {
                resourceIdentifier = 
                    "/domain_participant/DomainParticipant/shared_subscriber/SharedSubscriber";
                action = RTI::Service::Admin::RTI_SERVICE_COMMAND_ACTION_CREATE;
            } else if (!strcmp(argv[i],"delete")) {
                resourceIdentifier =
                    "/domain_participant/DomainParticipant/shared_subscriber/SharedSubscriber/shared_reader_queue/SharedReaderQueue";
                action = RTI::Service::Admin::RTI_SERVICE_COMMAND_ACTION_DELETE;
            } else if (!strcmp(argv[i],"get")) {
                action = RTI::Service::Admin::RTI_SERVICE_COMMAND_ACTION_GET;
                resourceIdentifier = "/data";
            } else {
                print_usage();
                std::cout << "Unsupported command action." << std::endl;
                return -1;
            }
            isActionFound = true;
        } else if (!isResourceIdentifierFound)  {
            resourceIdentifier = argv[i];
            isResourceIdentifierFound = true;
        } else if (!isSelectorFound) {
            sampleSelector = argv[i];
            isSelectorFound = true;
        } else {
            std::cout << "unrecognized program option" << std::endl;
            print_usage();
            return -1;  
        } 
    }

    return serviceadmin_main(domain_id, qosLibrary, qosProfile, targetService,
            action, resourceIdentifier, queueParams, sampleSelector);
}
#endif

