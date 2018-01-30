using System;
using System.Collections.Generic;
using System.Text;
using System.Diagnostics;
using DDS;
using NDDS;
using RTI.Connext.Queuing;
using RTI.Connext.Queuing.Infrastructure;
using RTI.Connext.Infrastructure;
using System.Threading;

/**
 * Configuration options of the requester application
 */
public class HelloWorldRequesterParams_t
{
    const long SLEEP_RESOLUTION_NANOS = 10 * 1000L * 1000L;

    public int domainId = 0;
    public String sharedSubscriberName = "SharedSubscriber";
    public String requestQueueTopicName = "HelloWorldTopic";
    public String qosLibrary = null;
    public String qosProfile = null;
    public String entityName = null;
    public int requestCount = 0;
    public int sampleRate = 1000;
    public int payloadSize = 32;
    public uint timeoutInSec = 0;
    public uint waitForAck = 1;
    public bool verbose = false;

    public long GetWriteIntervalNanos() 
    {

        long writeIntervalNanos = (1000L * 1000L * 1000L) / this.sampleRate;
        if (writeIntervalNanos < SLEEP_RESOLUTION_NANOS)
        {
            writeIntervalNanos = SLEEP_RESOLUTION_NANOS;
        }

        return writeIntervalNanos;
    }

    public int GetSamplesPerInterval()
    { 
        Stopwatch sleepTimer = Stopwatch.StartNew();
        long writeIntervalNanos = this.GetWriteIntervalNanos();
        int oneSecondCount = (int)(1000000000 / writeIntervalNanos);
        oneSecondCount++;
        for (int i = 0; i < oneSecondCount; i++)
        {
            System.Threading.Thread.Sleep((int) writeIntervalNanos / 1000000);
        }
        sleepTimer.Stop();
        long correctedWriteIntervalNanos = (1000000L) * sleepTimer.ElapsedMilliseconds / 100;
        return (int) Math.Ceiling((double) this.sampleRate * correctedWriteIntervalNanos / 1000000000L);
    }
}

/**
 * 
 */
public class HelloWorldRequester<TReq, TRep> : IDisposable
    where TReq : class, global::DDS.ICopyable<TReq>, new()
    where TRep : class, global::DDS.ICopyable<TRep>, new()
{
    DomainParticipant participant;

    HelloWorldRequesterParams_t appParams;
    SampleContentHandler sampleContentHandler;
    QueueRequester<TReq, TRep> requester;
    HelloWorldRequesterListener listener;

    public static int requestCount = 0;
    public static int replyCount = 0;
    public static int rejectedCount = 0;

    public static Stopwatch requestWatch;
    public static Stopwatch replyWatch;

    public static System.Timers.Timer requestTimer;
    public static System.Timers.Timer replyTimer;
                
    public HelloWorldRequester(
        HelloWorldRequesterParams_t appParams,
        SampleContentHandler sampleContentHandler,
        TypeSupport requestTypeSupport,
        TypeSupport replyTypeSupport)
    {
        this.appParams = appParams;
        this.sampleContentHandler = sampleContentHandler;
        this.listener = new HelloWorldRequesterListener(appParams.verbose);

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

        this.requester = new QueueRequester<TReq, TRep>(
            new QueueRequesterParams<TReq,TRep>(
                this.participant,
                requestTypeSupport,
                replyTypeSupport)
                .SetRequestQueueTopicName(appParams.requestQueueTopicName)
                .SetSharedSubscriberName(appParams.sharedSubscriberName)
                .SetQosProfile(appParams.qosLibrary, appParams.qosProfile)
                .SetEntityName(appParams.entityName)
                .SetEnableWaitForAck(appParams.waitForAck>0?true:false)
                .SetListener(this.listener));

        requestTimer = new System.Timers.Timer(2000);
        requestTimer.Elapsed += OnRequestTimer;
        replyTimer = new System.Timers.Timer(2000);
        replyTimer.Elapsed += OnReplyTimer;
    }

    private static void OnRequestTimer(Object source, System.Timers.ElapsedEventArgs e)
    {
        requestWatch.Stop();

        if (requestWatch.ElapsedMilliseconds != 0)
        {
            Console.WriteLine(
                "Request throughput (requests sent/second): {0} Requests Sent: {1} Rejected count: {2}",
                ((requestCount * 1000.0) / requestWatch.ElapsedMilliseconds), requestCount, rejectedCount);
        }

        requestWatch.Start();
    }

    private static void OnReplyTimer(Object source, System.Timers.ElapsedEventArgs e)
    {
        replyWatch.Stop();

        if (replyWatch.ElapsedMilliseconds != 0)
        {
            Console.WriteLine(
                "Reply throughput (replies received/second): {0}",
                ((replyCount * 1000.0) / replyWatch.ElapsedMilliseconds));
        }

        replyWatch.Start();
    }

    public void Dispose()
    {
        if (this.requester != null)
        {
            this.requester.Dispose();
            this.requester = null;
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
        while (!this.requester.HasMatchingRequestSharedReaderQueue() ||
            !this.requester.HasMatchingReplySharedReaderQueue())
        {
            System.Threading.Thread.Sleep(1000);
            discoveryCount++;
            if (timeout.Equals(Duration_t.DURATION_INFINITE))
            {
                continue;
            }
            else  if (discoveryCount > timeout.sec)
            {
                throw new NoMatchingQueueException(this.requester.Guid);
            }
        }
        Console.WriteLine("Queuing Service discovered ..");

        //Send requests
        WriteSample<TReq> request = this.requester.CreateRequestSample();
        this.sampleContentHandler.SetRequestPayloadSize(
            request.Data,
            this.appParams.payloadSize);

        long writeIntervalNanos = this.appParams.GetWriteIntervalNanos();
        int samplesPerInterval = this.appParams.GetSamplesPerInterval();

        Console.WriteLine(
           "Target throughput (samples/s): {0}\n" +
           "Interval (ms): {1}\n" +
           "samplesPerInterval (samples): {2}\n",
           this.appParams.sampleRate,
           (double) writeIntervalNanos / 1000000,
           samplesPerInterval);

        Console.WriteLine("Sending samples ..");

        requestWatch = Stopwatch.StartNew();
        requestTimer.Enabled = true;

        for (requestCount = 0;
            requestCount < this.appParams.requestCount || this.appParams.requestCount == 0;
            requestCount++)
        {
            this.sampleContentHandler.SetRequestPayload(request.Data, requestCount);

            this.requester.SendRequest(request);

            if (this.appParams.verbose) {
                Console.Write(
                    "Request sent {0}:\n    " + 
                    "Request identity: {1}\n",
                    requestCount,
                    SampleIdentityToString(request.Identity));
                this.sampleContentHandler.PrintRequestSample(request.Data);
            }

            if (this.appParams.waitForAck > 0)
            {
                bool result;
                result = this.requester.WaitForAcknowledgements(Duration_t.DURATION_INFINITE);

                if (!result)
                {
                    rejectedCount++;
                }

                if (this.appParams.verbose && !result)
                {
                    Console.Write(
                       "Request {0} rejected by Queuing Service\n", requestCount);
                }
            }

            if ((requestCount + 1) % samplesPerInterval == 0)
            {
                System.Threading.Thread.Sleep((int)(writeIntervalNanos / 1000000));
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

    class HelloWorldRequesterListener : QueueRequesterListener<TReq, TRep>
    {
        bool verbose;

        public HelloWorldRequesterListener(bool verbose)
        {
            this.verbose = verbose;
        }

        public void OnRequestAcknowledged(
            QueueRequester<TReq, TRep> requester,
            AcknowledgmentInfo info)
        {
            if (verbose) {
                 Console.Write(
                    "Received ACK from QS for sample:\n    {0}\n    Process result: {1}\n",
                    SampleIdentityToString(info.sample_identity),
                    QueuingSupport.IsPositiveAck(info.response_data) ? "success" : "error");
            }
        }

        public void OnRequestSharedReaderQueueMatched(
            QueueRequester<TReq, TRep> requester,
            ref PublicationMatchedStatus status)
        {
            if (status.current_count_change > 0)
            {
                if (verbose)
                {
                    Console.Write(
                        "Matched a Request SharedReaderQueue with handle {0}\n",
                        status.last_subscription_handle);
                }
            }
        }

        public void OnReplySharedReaderQueueMatched(
            QueueRequester<TReq, TRep> requester,
            ref SubscriptionMatchedStatus status)
        {
            if (status.current_count_change > 0)
            {
                if (verbose)
                {
                    Console.Write(
                        "Matched a Reply SharedReaderQueue with handle {0}\n",
                        status.last_publication_handle);
                }
            }
        }

        public void OnReplyAvailable(
            QueueRequester<TReq, TRep> requester)
        {
            if (replyCount == 0)
            {
                replyWatch = Stopwatch.StartNew();
                replyTimer.Enabled = true;
            }
            using (LoanedSamples<TRep> replies = requester.TakeReplies())
            {
                foreach (Sample<TRep> reply in replies)
                {
                    if (verbose)
                    {
                        Console.Write("Received reply:\n    Reply identity: {0}\n    " +
                            "Reply related identity: {1}\n",
                            SampleIdentityToString(reply.Identity),
                            SampleIdentityToString(reply.RelatedIdentity));
                    }
                    replyCount++;
                }  
            }
            requester.AcknowledgeAll(true);  
        }
    }

    public interface SampleContentHandler {

        void SetRequestPayloadSize(TReq request, int payloadSize);

        void SetRequestPayload(TReq request, int count);
        
        void PrintRequestSample(TReq request);
        
        void PrintReplySample(TRep reply);
    }
}

public class HelloWorldTypeHandler : 
    HelloWorldRequester<HelloWorldRequest, HelloWorldReply>.SampleContentHandler
{
    public void SetRequestPayloadSize(HelloWorldRequest request, int payloadSize)
    {
        request.payload.ensure_length(payloadSize, payloadSize);
    }

    public void SetRequestPayload(HelloWorldRequest request, int count) 
    {
         request.messageId = (uint) count;
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
    HelloWorldRequester<Bytes, Bytes>.SampleContentHandler
{
    private void SetInt(Bytes payload, int value)
    {
        for (int i = 0; i < 4; i++) 
        {
            payload.value[i] = (byte) (value >> i);
        }
    }

    private int GetInt(Bytes payload)
    {
        int value = 0;
        for (int i = 0; i < 4; i++) 
        {
            value |= ((int ) payload.value[i]) << i;
            payload.value[i] = (byte) (value >> i);
        }

        return value;
    }

    public void SetRequestPayloadSize(Bytes request, int payloadSize)
    {
        Bytes value = new Bytes(payloadSize);
        value.length = payloadSize;
        request.copy_from(value);
    }

    public void SetRequestPayload(Bytes request, int count) 
    {
         this.SetInt(request, count);
    }

    public void PrintRequestSample(Bytes request) 
    {
        Console.WriteLine("    Serialized int: " + this.GetInt(request));
    }

    public void PrintReplySample(Bytes reply) 
    {
        Console.WriteLine("    Serialized int: " + this.GetInt(reply));
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
        Console.WriteLine("\t-s <requestPerSecond>      default: 1000");
        Console.WriteLine("\t-l <requestPayloadLength>  default: 32");
        Console.WriteLine("\t-g                         Use generated type. default: Use Built-in Octets");
        Console.WriteLine("\t-a <waitForAck>            default: 1");
        Console.WriteLine("\t-t <discoveryTimeutSec>    default: 0 - UNLIMITED -");
        Console.WriteLine("\t-v                         Verbose mode. default: No verbose mode");
    }

    public static void Main(string[] args)
    {
        HelloWorldRequesterParams_t appParams =
            new HelloWorldRequesterParams_t();
        bool useBuiltinOctets = true;

        // --- Run --- //
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
                  args[i].Equals("-requestQueueTopicName"))
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
                else if (args[i].Equals("-s") ||
                  args[i].Equals("-sampleRate"))
                {
                    appParams.sampleRate = Int32.Parse(args[++i]);
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
                else if (args[i].Equals("-a") ||
                args[i].Equals("-waitForAck"))
                {
                    appParams.waitForAck = UInt32.Parse(args[++i]);
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
                HelloWorldRequester<Bytes, Bytes>
                    requesterApp = new HelloWorldRequester<Bytes, Bytes>(
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
                HelloWorldRequester<HelloWorldRequest, HelloWorldReply>
                    requesterApp = new HelloWorldRequester<HelloWorldRequest, HelloWorldReply>(
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
