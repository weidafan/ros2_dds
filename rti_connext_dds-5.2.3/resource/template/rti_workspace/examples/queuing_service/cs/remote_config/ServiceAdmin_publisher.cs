
/* ****************************************************************************
 *         (c) Copyright, Real-Time Innovations, All rights reserved.       
 *                                                                          
 *         Permission to modify and use for internal purposes granted.      
 * This software is provided "as is", without warranty, express or implied. 
 *                                                                          
 * ****************************************************************************
 */
using System;
using System.Collections.Generic;
using System.Text;
using RTI.Service.Admin;
using RTI.QueuingService.Monitoring;
using DDS;
using RTI.Connext.RequestReply;
using RTI.Connext.Infrastructure;


class ServiceCommandRequester : IDisposable
{
    // --- Members: -------------------------------------------------------
    private DomainParticipant participant;
    private Requester<CommandRequest, CommandReply> requester;
    private String targetService;

    // --- Constructor: ---------------------------------------------------
    public ServiceCommandRequester(int domainId, String serviceName, String libraryName, String profileName)
    {
        // Create participant
        if (!libraryName.Equals(""))
        {
            participant = DomainParticipantFactory.get_instance()
                .create_participant_with_profile(
                    domainId,
                    libraryName,
                    profileName,
                    null,
                    StatusMask.STATUS_MASK_NONE);
        }
        else
        {
            participant = DomainParticipantFactory.get_instance()
                .create_participant(
                    domainId,
                    DomainParticipantFactory.PARTICIPANT_QOS_DEFAULT,
                    null,
                    StatusMask.STATUS_MASK_NONE);
        }
        if (participant == null)
        {
            throw new SystemException("Error creating participant");
        }

        // Create replier with that participant and:
        // - The DDS TypeSupport for the request and reply types
        // - A service name
        // - (Optionally) a QoS profile, in USER_QOS_PROFILES.xml
        RequesterParams reqParams =
            new RequesterParams(
                participant,
                CommandRequestTypeSupport.get_instance(),
                CommandReplyTypeSupport.get_instance());

        reqParams.SetRequestTopicName(COMMAND_REQUEST_TOPIC_NAME.VALUE);
        reqParams.SetReplyTopicName(COMMAND_REPLY_TOPIC_NAME.VALUE);

        if (!libraryName.Equals(""))
        {
            reqParams.SetQosProfile(libraryName, profileName);
        }

        requester = new Requester<CommandRequest, CommandReply>(
                        reqParams);
        this.targetService = serviceName;
    }

    // --- Dispose: -------------------------------------------------------
    public void Dispose()
    {
        if (requester != null)
        {
            requester.Dispose();
            requester = null;
        }

        if (participant != null)
        {
            participant.delete_contained_entities();
            DomainParticipantFactory.get_instance().delete_participant(ref participant);
            participant = null;
        }
    }

    static String getCreateQueueSnippet(
        QueueParameters_t queueParams)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendFormat(
            "str://\"<shared_reader_queue name=\"{0}\" session=\"{1}\">\n",
            queueParams.topicName,
            queueParams.sessionName);
        stringBuilder.Append("<datareader_qos base_name=\"HelloWorldQS_Library::HelloWorldQS_Profile\"/>\n");
        stringBuilder.Append("<datawriter_qos base_name=\"HelloWorldQS_Library::HelloWorldQS_ProfileLargeData\"/>\n");
        stringBuilder.AppendFormat("<topic_name>{0}</topic_name>\n", queueParams.topicName);
        stringBuilder.AppendFormat("<type_name>{0}</type_name>\n", queueParams.typeName);
        stringBuilder.AppendFormat("<reply_type>{0}</reply_type>\n", queueParams.replyTypeName);
        stringBuilder.Append("<queue_qos>\n");
        stringBuilder.Append("<resource_limits>\n");
        stringBuilder.Append("<queue_allocation_settings>\n");
        stringBuilder.Append("<max_count>10000</max_count>\n");
        stringBuilder.Append("</queue_allocation_settings>\n");
        stringBuilder.Append("</resource_limits>");
        stringBuilder.Append("<distribution>\n");       
        stringBuilder.Append("<kind>ROUND_ROBIN</kind>\n");
        stringBuilder.Append("<property>\n");
        stringBuilder.Append("<value>\n");
        stringBuilder.Append("<element>\n");
        stringBuilder.Append("<name>UNACKED_THRESHOLD</name>\n");
        stringBuilder.Append("<value>5</value>\n");
        stringBuilder.Append("</element>\n");
        stringBuilder.Append("</value>\n");
        stringBuilder.Append("</property>\n");
        stringBuilder.Append("</distribution>\n");
        stringBuilder.Append("<reliability>\n");
        stringBuilder.Append("<app_ack_sample_to_producer>1</app_ack_sample_to_producer>\n");
        stringBuilder.Append("</reliability>\n");
        stringBuilder.Append("<redelivery>\n");
        stringBuilder.Append("<max_delivery_retries>6</max_delivery_retries>\n");
        stringBuilder.Append("<response_timeout>\n");
        stringBuilder.Append("<duration>\n");
        stringBuilder.Append("<sec>30</sec>\n");
        stringBuilder.Append("<nanosec>0</nanosec>\n");
        stringBuilder.Append("</duration>\n");
        stringBuilder.Append("</response_timeout>\n");
        stringBuilder.Append("</redelivery>\n");
        stringBuilder.Append("</queue_qos>\n");
        stringBuilder.Append("</shared_reader_queue>\"");

        return stringBuilder.ToString();
    }


    // --- Run requester: -------------------------------------------------
    public void sendQueuingServiceCommand(
        CommandActionKind action,
        string resourceIdentifier,
        string sampleSelector,
        QueueParameters_t queueParams)
    {
        // Wait for the discovery of a service
        uint waitCount = 0;
        PublicationMatchedStatus matchedStatus = new PublicationMatchedStatus();
        while (matchedStatus.current_count < 1 && waitCount < WAIT_TIMEOUT_SEC_MAX)
        {
            requester.RequestDataWriter.get_publication_matched_status(ref matchedStatus);
            //sleep
            waitCount++;
            System.Threading.Thread.Sleep(1000);
        }
        if (matchedStatus.current_count < 1)
        {
            throw new SystemException("No matching QS found");
        }

        // Create a request sample
        WriteSample<CommandRequest> request = requester.CreateRequestSample();
        request.Data.service = RTI.Service.Admin.ServiceKind.RTI_SERVICE_QUEUING_SERVICE;
        request.Data.service_name = this.targetService;
        request.Data.action = action;
        request.Data.resource_identifier = resourceIdentifier; 

        // set the request body for the actions that require it
        if (action == CommandActionKind.RTI_SERVICE_COMMAND_ACTION_CREATE)
        {
            request.Data.string_body = getCreateQueueSnippet(queueParams);
        }
        else
        {
            request.Data.string_body = sampleSelector;
        }

        //send request
        requester.SendRequest(request);
        Console.WriteLine("Command request sent:\n    target service: {0}\n    action: {1}\n    resource: {2}\n    body:{3}",
            request.Data.service_name,
            request.Data.action.ToString(),
            request.Data.resource_identifier,
            request.Data.string_body);

        Boolean expectingMoreReplies = true;
        while (expectingMoreReplies)
        {
            //
            // Receive replies (one or more at a time)
            //
            // We read a collection of loaned samples that
            // is returned (Disposed) to the middleware
            // when the application exits the using block.
            //
            using (LoanedSamples<CommandReply> replies =
                requester.ReceiveReplies(Duration_t.from_seconds(WAIT_TIMEOUT_SEC_MAX)))
            {
                if (replies.Count == 0)
                {
                    // The Requester doesn't report a timeouts as exceptions
                    // but as a empty collection instead.
                    throw new TimeoutException("Timed out waiting for replies");
                }

                // Iterate through the sample collection
                foreach (Sample<CommandReply> reply in replies)
                {
                    if (reply.Data.retcode != CommandReplyRetcode.RTI_SERVICE_COMMAND_REPLY_OK)
                    {
                        throw new SystemException(reply.Data.string_body);
                    }
                    else
                    {
                        // set the request body for the actions that require it
                        Console.WriteLine(reply.Data.string_body);
                        if (action == CommandActionKind.RTI_SERVICE_COMMAND_ACTION_GET)
                        {
                            handleReplyforGetRequest(resourceIdentifier, reply.Data);
                        }

                        if ((reply.Info.flag & (int)SampleFlagBits.INTERMEDIATE_REPLY_SEQUENCE_SAMPLE) == 0)
                        {
                            expectingMoreReplies = false;
                        }
                    }
                }
            }
        }
    }

    /**
     * Performs the corresponding operation depending on the retrieved resource
     */
    void handleReplyforGetRequest(
        string resourceIdentifier,
        CommandReply reply)
    {
        if (resourceIdentifier.EndsWith("status"))
        {
            SharedReaderQueueStatus queueStatus = new SharedReaderQueueStatus();
            SharedReaderQueueStatusTypeSupport.deserialize_data_from_cdr_buffer(
                queueStatus,
                reply.octet_body.Value.buffer,
                (uint)reply.octet_body.Value.length);
            SharedReaderQueueStatusTypeSupport.print_data(queueStatus);
        }
        else if (resourceIdentifier.EndsWith("data"))
        {
            ServiceData serviceData = new ServiceData();
            ServiceDataTypeSupport.deserialize_data_from_cdr_buffer(
                serviceData,
                reply.octet_body.Value.buffer,
                (uint)reply.octet_body.Value.length);
            if (serviceData.shared_reader_queue_data_list.length == 0)
            {
                System.Console.WriteLine("no queues in service");
            }
            else
            {
                for (int i = 0; i < serviceData.shared_reader_queue_data_list.length; i++)
                {
                    System.Console.Write("\nqueue[{0}]:", i);
                    SharedReaderQueueData queueData = serviceData.shared_reader_queue_data_list.get_at(i);
                    SharedReaderQueueDataTypeSupport.print_data(queueData);
                }
            }
            
        }
        else if (resourceIdentifier.EndsWith("message"))
        {
            //if lenght is zero then no messages with the specified
            //attributes were found in the queue
            if (reply.octet_body.Value.length == 0) {
                return;
            }
            RTI.QueuingService.Message message = new RTI.QueuingService.Message();            
            RTI.QueuingService.MessageTypeSupport.deserialize_data_from_cdr_buffer(
                message,
                reply.octet_body.Value.buffer,
                (uint)reply.octet_body.Value.length);
            System.Console.WriteLine("\nretrieved message:");
            System.Console.WriteLine("status: {0}",
                message.status);
            System.Console.WriteLine("identity: {0}",
                sampleIdentityToString(message.original_virtual_sample_identity));
            /*
             * Use here the type plugin used in your app to retrieve the 
             * application data, that is in the sample_buffer field.
             * 
             * i.e: 
             * HelloWorldRequest helloWorldRequest = new HelloWorldRequest();
             * HelloWorldRequestTypeSupport.deserialize_data_from_cdr_buffer(
             *      helloWorldRequest,
             *      message.sample_buffer.Value.buffer,
             *      (uint) message.sample_buffer.Value.length);
             * HelloWorldRequestTypeSupport.print_data(helloWorldRequest);
             */ 
        }

    }

    /**
    * Formats the SampleIdentity as string
    */
    public static String sampleIdentityToString(RTI.QueuingService.SampleIdentity_t sampleIdentity)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.Append("writer GUID: ");
        for (int i = 0; i <= 15; i++)
        {
            stringBuilder.AppendFormat(
                "{0,0:X2}",
                sampleIdentity.writer_guid.value.GetValue(i));
        }
        stringBuilder.AppendFormat(", SN: ({0},{1})", 
            sampleIdentity.sequence_number.high,
            sampleIdentity.sequence_number.low);

        return stringBuilder.ToString();
    }

    static readonly uint WAIT_TIMEOUT_SEC_MAX = 10;

    static readonly QueueParameters_t DEFAULT_QUEUE_PARAMETERS = new QueueParameters_t(
        "Session",
        "HelloWorldTopic",
        "DDS::Octets",
        "DDS::Octets");

    // --- Application execution: -----------------------------------------

    private static void PrintFormat()
    {
        Console.WriteLine("Usage: -d <domainId> -q <serviceName> -o <profileName> [create|delete|get] <resourceIdentifier> {command options}");
        Console.WriteLine("-d <domainId>     default: 1");
        Console.WriteLine("-q <serviceName>  default: RemoteConfigQS");
        Console.WriteLine("-o <profileName>  default: <none>");
        Console.WriteLine("{create options}: -s <sessionName> -p <topicName> -t <typeName> -r <replyTypeName>");
        Console.WriteLine("-s <sessionName>    default: Session");
        Console.WriteLine("-p <topicName>      default: HelloWorldTopic");
        Console.WriteLine("-t <typeName>       default: DDS::Octets");
        Console.WriteLine("-r <replyTypeName>  default: DDS::Octets");
        Console.WriteLine("{delete options}: <sampleSelector>");
        Console.WriteLine("{get options}:    <sampleSelector>");
    }

    public static void Main(string[] args)
    {
        int domainId = 1;
        string targetService = "RemoteConfigQS";
        CommandActionKind action = CommandActionKind.RTI_SERVICE_COMMAND_ACTION_CREATE;
        string requestAction = "create";
        string resourceIdentifier = "/domain_participant/DomainParticipant/shared_subscriber/SharedSubscriber";
        string sampleSelector = "";
        string qosLibrary = "";
        string qosProfile = "";
        bool isActionFound =  false;
        bool isResourceIdentifierFound = false;
        bool isSelectorFound = false;
        QueueParameters_t queueParams = DEFAULT_QUEUE_PARAMETERS;
        
        // Parse arguments
        for (int i = 0; i < args.Length; i++)
        {
            if (args[i].Equals("-d"))
            {
                domainId = Int32.Parse(args[++i]);
            }
            else if (args[i].Equals("-o"))
            {
                String[] qosProfileFqn = args[++i].Split(
                    new char[] { ':' },
                    StringSplitOptions.RemoveEmptyEntries);
                qosLibrary = qosProfileFqn[0];
                qosProfile = qosProfileFqn[1];
            }
            else if (args[i].Equals("-q"))
            {
                targetService = args[++i];
            }
            else if (args[i].Equals("-s"))
            {
                queueParams.sessionName = args[++i];
            }
            else if (args[i].Equals("-p"))
            {
                queueParams.topicName = args[++i];
            }
            else if (args[i].Equals("-t"))
            {
                queueParams.typeName = args[++i];
            }
            else if (args[i].Equals("-r"))
            {
                queueParams.replyTypeName = args[++i];
            }
            else {
                if (!isActionFound)
                {
                    requestAction = args[i];
                    if (requestAction.Equals("create"))
                    {
                        resourceIdentifier = 
                            "/domain_participant/DomainParticipant/shared_subscriber/SharedSubscriber";
                        action = CommandActionKind.RTI_SERVICE_COMMAND_ACTION_CREATE;
                    }
                    else if (requestAction.Equals("delete"))
                    {
                        resourceIdentifier =
                            "/domain_participant/DomainParticipant/shared_subscriber/SharedSubscriber/shared_reader_queue/SharedReaderQueue";
                        action = CommandActionKind.RTI_SERVICE_COMMAND_ACTION_DELETE;
                    }
                    else if (requestAction.Equals("get"))
                    {
                        action = CommandActionKind.RTI_SERVICE_COMMAND_ACTION_GET;
                        resourceIdentifier = "/data";
                    }
                    else
                    {
                        System.Console.WriteLine("unsupported command action");
                        PrintFormat();
                        return;  
                    }
                    isActionFound = true;
                }
                else if (!isResourceIdentifierFound) 
                {
                    resourceIdentifier = args[i];
                    isResourceIdentifierFound = true;
                }
                else if (!isSelectorFound)
                {
                    sampleSelector = args[i];
                    isSelectorFound = true;

                }
                else 
                {
                    System.Console.WriteLine("unrecognized program option");
                    PrintFormat();
                    return;  
                }

            }
        }

        // Run the example
        using (ServiceCommandRequester requester =
            new ServiceCommandRequester(domainId, targetService,qosLibrary,qosProfile))
        {
            try
            {
                requester.sendQueuingServiceCommand(
                    action,
                    resourceIdentifier,
                    sampleSelector,
                    queueParams);
            }
            catch (System.Exception ex)
            {
                Console.WriteLine("Exception: " + ex.Message);
            }
        }
    }

    public class QueueParameters_t
    {
        public String sessionName;
        public String topicName;
        public String typeName;
        public String replyTypeName;

        public QueueParameters_t(
            String sessionName,
            String topicName,
            String typeName,
            String replyTypeName)
        {
            this.sessionName = sessionName;
            this.topicName = topicName;
            this.typeName = typeName;
            this.replyTypeName = replyTypeName;
        }
    }

}


