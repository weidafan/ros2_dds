using System;
using System.Collections.Generic;
using System.Text;
using DDS;
using RTI.Connext.Queuing;
using RTI.Connext.Queuing.Infrastructure;
using RTI.Connext.Infrastructure;
using System.Threading;
using System.Diagnostics;

/**
 * Configuration options of the replier application
 */
public class HelloWorldReplierParams_t
{
    public int domainId = 0;
    public String sharedSubscriberName = "SharedSubscriber";
    public String requestQueueTopicName = "HelloWorldTopic";
    public String qosLibrary = null;
    public String qosProfile = null;
    public String entityName = null;
    public int requestCount = 0;
    public int payloadSize = 4;
    public uint timeoutInSec = 0;
    public bool verbose = false;
}

/**
 * 
 */
public class HelloWorldReplier<TReq, TRep> : IDisposable
    where TReq : class, global::DDS.ICopyable<TReq>, new()
    where TRep : class, global::DDS.ICopyable<TRep>, new()
{

    //Participant for DDS entities
    DomainParticipant participant;

    HelloWorldReplierParams_t appParams;
    SampleContentHandler sampleContentHandler;
    QueueReplier<TReq, TRep> replier;

    public static int requestCount = 0;
    public static int replyCount = 0;

    public static Stopwatch requestWatch;
    public static Stopwatch replyWatch;

    public static System.Timers.Timer throughputTimer;

    public HelloWorldReplier(
        HelloWorldReplierParams_t appParams,
        SampleContentHandler sampleContentHandler,
        TypeSupport requestTypeSupport,
        TypeSupport replyTypeSupport)        
    {
        if (appParams.qosProfile == null)
        {
            this.participant = DomainParticipantFactory.get_instance().create_participant(
                appParams.domainId,
                DomainParticipantFactory.PARTICIPANT_QOS_DEFAULT,
                null,
                StatusMask.STATUS_MASK_NONE);
        }
        else
        {
            this.participant = DomainParticipantFactory.get_instance().create_participant_with_profile(
                appParams.domainId,
                appParams.qosLibrary, appParams.qosProfile,
                null,
                StatusMask.STATUS_MASK_NONE);
        }

        this.replier = new QueueReplier<TReq, TRep>(
            new QueueReplierParams<TReq, TRep>(
                this.participant,
                requestTypeSupport,
                replyTypeSupport)
                .SetRequestQueueTopicName(appParams.requestQueueTopicName)
                .SetSharedSubscriberName(appParams.sharedSubscriberName)
                .SetQosProfile(appParams.qosLibrary, appParams.qosProfile)
                .SetEntityName(appParams.entityName)
                .SetEnableWaitForAck(false)
                .SetListener(new HelloWorldReplierListener(appParams.verbose)));

        this.appParams = appParams;
        this.sampleContentHandler = sampleContentHandler;
        throughputTimer = new System.Timers.Timer(2000);
        throughputTimer.Elapsed += OnTimer;
    }

    private static void OnTimer(Object source, System.Timers.ElapsedEventArgs e)
    {
        requestWatch.Stop();
        replyWatch.Stop();

        if (requestWatch.ElapsedMilliseconds != 0)
        {
            Console.WriteLine(
                "Request throughput (requests received/second): {0} Requests Received: {1}",
                ((requestCount * 1000.0) / requestWatch.ElapsedMilliseconds), requestCount);
        }


        if (replyWatch.ElapsedMilliseconds != 0)
        {
            Console.WriteLine(
                "Reply throughput (replies sent/second): {0}",
                ((replyCount * 1000.0) / replyWatch.ElapsedMilliseconds));
        }

        requestWatch.Start();
        replyWatch.Start();
    }

    public void Dispose()
    {
        if (this.replier != null)
        {
            this.replier.Dispose();
            this.replier = null;
        }

        if (this.participant != null)
        {
            this.participant.delete_contained_entities();
            DomainParticipantFactory.get_instance().delete_participant(
                ref this.participant);
            this.participant = null;
        }
    }

    public void Run()
    {

        Duration_t timeout = Duration_t.DURATION_INFINITE;
        if (this.appParams.timeoutInSec != 0)
        {
            timeout = Duration_t.from_seconds(this.appParams.timeoutInSec);
        }
        
        //Wait for discovery of at least one QS

        Console.WriteLine("Waiting to discover Queuing Service ..");
        int discoveryCount = 0;
        while (!this.replier.HasMatchingRequestSharedReaderQueue() ||
            !this.replier.HasMatchingReplySharedReaderQueue())
        {
            System.Threading.Thread.Sleep(1000);
            discoveryCount++;
            if (timeout.Equals(Duration_t.DURATION_INFINITE))
            {
                continue;
            }
            else if (discoveryCount > timeout.sec)
            {
                throw new NoMatchingQueueException(this.replier.Guid);
            }
        }
        Console.WriteLine("Queuing Service discovered ..");

        WriteSample<TRep> reply = this.replier.CreateReplySample();
        reply.Info.replace_auto = true;
        this.sampleContentHandler.SetReplyPayloadSize(
            reply.Data,
            this.appParams.payloadSize);

        //Receive messages and send replies  
        requestCount = 0;
        while (requestCount < this.appParams.requestCount || this.appParams.requestCount == 0)
        {
            if (!this.replier.WaitForRequests(timeout))
            {
                throw new System.Exception("wait for requests");
            }

            using (LoanedSamples<TReq> requests = this.replier.TakeRequests())
            {
                foreach (Sample<TReq> request in requests)
                {
                    if (request.Info.valid_data)
                    {
                        if (requestCount == 0)
                        {
                            requestWatch = Stopwatch.StartNew();
                            replyWatch = Stopwatch.StartNew();
                            throughputTimer.Enabled = true;
                        }

                        if (appParams.verbose)
                        {
                            Console.Write("Received request: {0}\n    Request identity: {1}\n",
                                requestCount,
                                SampleIdentityToString(request.Identity));
                            this.sampleContentHandler.PrintRequestSample(request.Data);
                        }
                        requestCount++;

                        this.replier.AcknowledgeRequest(request.Info, true);

                        this.sampleContentHandler.SetReplyPayload(reply.Data, requestCount-1);
                        reply.Info.identity = SampleIdentity_t.AUTO_SAMPLE_IDENTITY;
                        this.replier.SendReply(reply, request.Info);

                        if (appParams.verbose)
                        {
                            Console.Write("Reply sent: {0}\n    reply identity: {1}\n",
                                 replyCount,
                                 SampleIdentityToString(reply.Identity));
                            this.sampleContentHandler.PrintReplySample(reply.Data);
                        }
                        replyCount++;

                    }
                }
            }
        }
    }

    public static String SampleIdentityToString(SampleIdentity_t sampleIdentity)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.Append("GUID: ");
        for (int i = 1; i <= 16; i++)
        {
            stringBuilder.AppendFormat(
                "{0,0:X2}",
                sampleIdentity.writer_guid.GetValueAt(i));
        }
        stringBuilder.AppendFormat(", SN: {0}", sampleIdentity.sequence_number);

        return stringBuilder.ToString();
    }

    class HelloWorldReplierListener : QueueReplierListener<TReq, TRep>
    {
        bool verbose;

        public HelloWorldReplierListener(bool verbose)
        {
            this.verbose = verbose;
        }

        public void OnReplyAcknowledged(
            QueueReplier<TReq, TRep> replier,
            AcknowledgmentInfo info)
        {
            if (verbose)
            {
                Console.Write(
                    "Received ACK from QS for sample:\n    {0}\n    Process result: {1}\n",
                    SampleIdentityToString(info.sample_identity),
                    QueuingSupport.IsPositiveAck(info.response_data) ? "success" : "error");
            }
        }

        public void OnRequestSharedReaderQueueMatched(
            QueueReplier<TReq, TRep> replier,
            ref SubscriptionMatchedStatus status)
        {
            if (status.current_count_change > 0)
            {
                if (verbose)
                {
                    Console.Write(
                        "Matched a Request SharedReaderQueue with handle {0}\n",
                        status.last_publication_handle);
                }
            }
        }

        public void OnReplySharedReaderQueueMatched(
            QueueReplier<TReq, TRep> replier,
            ref PublicationMatchedStatus status)
        {
            if (status.current_count_change > 0)
            {
                if (verbose)
                {
                    if (verbose)
                    {
                        Console.Write(
                            "Matched a Reply SharedReaderQueue with handle {0}\n",
                            status.last_subscription_handle);
                    }
                }
            }
        }

        public void OnRequestAvailable(
            QueueReplier<TReq, TRep> replier)
        {
            //process of requests is performed in the main loop
        }
    }

    public interface SampleContentHandler
    {
        void SetReplyPayloadSize(TRep reply, int payloadSize);

        void SetReplyPayload(TRep reply, int count);

        void PrintRequestSample(TReq request);

        void PrintReplySample(TRep reply);
    }
}

public static class HelloWorldMain
{
    private static void PrintFormat()
    {
        Console.WriteLine("Usage: ");
        Console.WriteLine("\t-d <domainId>              default: 0");
        Console.WriteLine("\t-e <entityName>            default: <none>");
        Console.WriteLine("\t-r <sharedSubscriberName>  default: SharedSubscriber");
        Console.WriteLine("\t-q <requestQueueTopicName> default: HelloWorldTopic");
        Console.WriteLine("\t-p <qosProfileName>        default: <none>");
        Console.WriteLine("\t-c <requestCount>          default: 0 - UNLIMITED -");
        Console.WriteLine("\t-l <replyPayloadLength>    default: 32");
        Console.WriteLine("\t-g <generatedType>         default: Use Built-in Octets");
        Console.WriteLine("\t-t <discoveryTimeutSec>    default: 0 - UNLIMITED -");
    }

    public static void Main(string[] args)
    {
        HelloWorldReplierParams_t appParams =
            new HelloWorldReplierParams_t();
        bool useBuiltinOctets = true;

        try
        {
            for (int i = 0; i < args.Length; i++)
            {
                if (args[i].Equals("-d") ||
                    args[i].Equals("-domainId"))
                {
                    appParams.domainId = Int32.Parse(args[++i]);
                }
                else if (args[i].Equals("-r") ||
                  args[i].Equals("-sharedSubscriber"))
                {
                    appParams.sharedSubscriberName = args[++i];
                }
                else if (args[i].Equals("-q") ||
                  args[i].Equals("-queueTopicName"))
                {
                    appParams.requestQueueTopicName = args[++i];
                }
                else if (args[i].Equals("-p") ||
                    args[i].Equals("-qosProfile"))
                {
                    String[] qosProfileFqn = args[++i].Split(
                        new char[] { ':' },
                        StringSplitOptions.RemoveEmptyEntries);
                    appParams.qosLibrary = qosProfileFqn[0];
                    appParams.qosProfile = qosProfileFqn[1];
                }
                else if (args[i].Equals("-c") ||
                  args[i].Equals("-requestCount"))
                {
                    appParams.requestCount = Int32.Parse(args[++i]);
                }
                else if (args[i].Equals("-l") ||
                args[i].Equals("-payloadLength"))
                {
                    appParams.payloadSize = Int32.Parse(args[++i]);
                }
                else if (args[i].Equals("-t") ||
                  args[i].Equals("-timeout"))
                {
                    appParams.timeoutInSec = UInt32.Parse(args[++i]);
                }
                else if (args[i].Equals("-e") ||
                    args[i].Equals("-entityName"))
                {
                    appParams.entityName = args[++i];
                }
                else if (args[i].Equals("-g") ||
                args[i].Equals("-generatedType"))
                {
                    useBuiltinOctets = false;
                }
                else if (args[i].Equals("-v") ||
                args[i].Equals("-verbose"))
                {
                    appParams.verbose = true;
                }
                else
                {
                    PrintFormat();
                    return;
                }
            }

            if (useBuiltinOctets)
            {
                HelloWorldReplier<Bytes, Bytes>
                       requesterApp = new HelloWorldReplier<Bytes, Bytes>(
                           appParams,
                           new HelloWorldBuiltinBytesHandler(),
                           BytesTypeSupport.get_instance(),
                           BytesTypeSupport.get_instance());
                using (requesterApp)
                {
                    requesterApp.Run();
                }  
            }
            else
            {                
                HelloWorldReplier<HelloWorldRequest, HelloWorldReply>
                   requesterApp = new HelloWorldReplier<HelloWorldRequest, HelloWorldReply>(
                       appParams,
                       new HelloWorldTypeHandler(),
                       HelloWorldRequestTypeSupport.get_instance(),
                       HelloWorldReplyTypeSupport.get_instance());
                using (requesterApp)
                {
                    requesterApp.Run();
                }
            }
        }
        catch (DDS.Exception retcode)
        {
            Console.Error.WriteLine("DDS error: {0}", retcode);
        }
        catch (System.Exception exception)
        {
            Console.Error.WriteLine("application error: {0}", exception);
        }
    }
}

public class HelloWorldTypeHandler :
    HelloWorldReplier<HelloWorldRequest, HelloWorldReply>.SampleContentHandler
{
    public void SetReplyPayloadSize(HelloWorldReply reply, int payloadSize)
    {
        reply.payload.ensure_length(payloadSize, payloadSize);
    }

    public void SetReplyPayload(HelloWorldReply reply, int count)
    {
        reply.messageId = (uint) count;
    }

    public void PrintRequestSample(HelloWorldRequest request)
    {
        Console.WriteLine("    Message Id: " + request.messageId);
    }

    public void PrintReplySample(HelloWorldReply reply)
    {
        Console.WriteLine("    Message id: " + reply.messageId);
    }
}

public class HelloWorldBuiltinBytesHandler :
    HelloWorldReplier<Bytes, Bytes>.SampleContentHandler
{
    private void SetInt(Bytes payload, int value)
    {
        for (int i = 0; i < 4; i++)
        {
            payload.value[i] = (byte)(value >> i);
        }
    }

    private int GetInt(Bytes payload)
    {
        int value = 0;
        for (int i = 0; i < 4; i++)
        {
            value |= ((int)payload.value[i]) << i;
            payload.value[i] = (byte)(value >> i);
        }

        return value;
    }

    public void SetReplyPayloadSize(Bytes request, int payloadSize)
    {
        Bytes value = new Bytes(payloadSize);
        value.length = payloadSize;
        request.copy_from(value);
    }

    public void SetReplyPayload(Bytes request, int count)
    {
        this.SetInt(request, count);
    }

    public void PrintRequestSample(Bytes request)
    {
        Console.WriteLine("    Payload size: " + request.length + 
                          "\n    Serialized int: " + this.GetInt(request));
    }

    public void PrintReplySample(Bytes reply)
    {
        Console.WriteLine("    Payload size: " +  reply.length +  
                          "\n    Serialized int: " + this.GetInt(reply));
    }
}
