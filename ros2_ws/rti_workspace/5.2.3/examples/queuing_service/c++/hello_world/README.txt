===========================================================================
 Example Code -- HelloWorld example of interaction with RTI Queuing Service
===========================================================================

This example is a modified version of the helloWorld example that can
be generated using rtiddsgen with the -example command-line option.
The original example was modified to create a DataWriter that
publishes samples into a SharedReaderQueue and 
DataReader(s) that receive samples from the SharedReaderQueue.

This example does not use the Queuing Service Wrapper API that 
is only available in .NET

Building C++ Example
===================

Before compiling or running the example, make sure the environment variable 
NDDSHOME is defined and it refers to your RTI Connext DDS installation directory. 

Run rtiddsgen with the -example option and the target architecture of your 
choice (e.g., x64Darwin12clang4.1).
 
Do not use the -replace option. Do not replace the following files included 
with this example:
- HelloWorldQueue_publisher.cxx
- HelloWorldQueue_subscriber.cxx
- USER_QOS_PROFILES.xml

This example also shows the unbounded sequence and string feature. This requires
you to generate the code with the -unboundedSupport option.

For example, assuming you want to generate an example for the architecture 
x64Darwin12clang4.1, run:

   <RTI connext installation dir>/bin/rtiddsgen -language C++ -namespace -example x64Darwin12clang4.1 
             -ppDisable -unboundedSupport HelloWorldQueue.idl

After running rtiddsgen, you will see messages that look like this:

WARN com.rti.ndds.nddsgen.emitters.FileEmitter File exists and will not be overwritten :
./helloWorld/HelloWorldQueue_subscriber.cxx
WARN com.rti.ndds.nddsgen.emitters.FileEmitter File exists and will not be overwritten :
./helloWorld/HelloWorldQueue_publisher.cxx
WARN com.rti.ndds.nddsgen.emitters.FileEmitter File exists and will not be overwritten :
./helloWorld/USER_QOS_PROFILES.xml

This is normal output and is only informing you that the publisher/subscriber code has
not been replaced, which is fine since all the source files for the example are
already provided.

The generated projects will include the publisher and subscriber files 
(HelloWorldQueue_publisher.cxx and HelloWorldQueue_subscriber.cxx).

Command-Line Parameters
=======================

HelloWorldQueue_publisher
Usage:
-d <domainId>              default: 0
-q <queueTopicName>        default: HelloWorldTopic
-p <qosProfileName>        default: <none>
-c <sampleCount>           default: 0 - UNLIMITED -
-l <samplePayloadLength>   default: 32

HelloWorldQueue_subscriber
Usage:\n");
-d <domainId>              default: 0
-q <queueTopicName>        default: HelloWorldTopic
-r <sharedSubscriberName>  default: SharedSubscriber
-p <qosProfileName>        default: <none>
-c <sampleCount>           default: 0 - UNLIMITED

Running C++ Example
===================
After building the example using the generated makefile or Visual Studio solution, 
you are ready to run the examples. Note that if you linked the example 
dynamically you will need to add <RTI Connext Installation dir>/lib/<architecture> 
to your path environment variable.

Note: The following examples are configured to use the UDPv4 built-in transport by
default. In certain cases (e.g. when multicast is not enabled), you might need
to enable the SHMEM transport or add the localhost to the variable NDDS_DISCOVERY_PEERS 
to make them work properly: 

   (Linux)
   setenv NDDS_DISCOVERY_PEERS 10@localhost

   (Windows)
   set NDDS_DISCOVERY_PEERS=10@localhost


** Scenario 1: 1Producer/1Consumer/1QS UDP VOLATILE **

1. This example requires RTI Queuing Service. In one terminal, from 
   the example installation directory, enter:

   <RTI Connext installation dir>/bin/rtiqueuingservice -cfgFile QsHelloWorld.xml 
          -cfgName HelloWorldQS

2. On another terminal, run the subscriber. 

   The executable is here:

   objs/<architecture>/HelloWorldQueue_subscriber   

3. On another terminal, run the publisher. 

   The executable is here:

   objs/<architecture>/HelloWorldQueue_publisher

** Scenario 2: 1Producer/1Consumer/1QS UDP PERSISTENT **

1. Delete any previously created database files in the example directory.
2. Run RTI Queuing Service using -cfgName HelloWorldQSPersistence.
3. Run the publisher. 
4. Run the subscriber.

** Scenario 3: 1Producer/1Consumer/2ReplicatedQS UDP VOLATILE **

1. Run two RTI Queuing Service instances using -cfgName HelloWorldQSReplication.
2. Run the publisher. 
3. Run the subscriber.

NOTE: In this scenario, the first samples might be rejected and the publisher output will look like this:

Wrote sample with message ID: 1 and sequence number: 1
Received ACK from QS for sample with sequence number: 1 Process result: Rejected
Received ACK from QS for sample with sequence number: 1 Process result: Rejected
Wrote sample with message ID: 1 and sequence number: 2
Received ACK from QS for sample with sequence number: 2 Process result: Rejected
Received ACK from QS for sample with sequence number: 2 Process result: Rejected
Wrote sample with message ID: 2 and sequence number: 3
Received ACK from QS for sample with sequence number: 3 Process result: Accepted
Received ACK from QS for sample with sequence number: 3 Process result: Accepted

This is an expected behavior. When using replicated SharedReaderQueues, 
samples are not accepted by RTI Queuing Service instances until the master 
election protocol is finished and the master instance has discovered the minimum 
number of replicas to reach the quorum. See Section 7.1 of RTI Queuing Service Users Manual 
for more information about SharedReaderQueue replication. 


** Scenario 4: 1Producer/1Consumer/2ReplicatedQS UDP PERSISTENT **

1. Delete any previously created database files in the example directory.
2. Run two RTI Queuing Service instances using -cfgName HelloWorldQSPersistenceReplication.
3. Run the publisher. 
4. Run the subscriber.

NOTE: In this scenario, the first samples might be rejected and the publisher output will look like this:

Wrote sample with message ID: 1 and sequence number: 1
Received ACK from QS for sample with sequence number: 1 Process result: Rejected
Received ACK from QS for sample with sequence number: 1 Process result: Rejected
Wrote sample with message ID: 1 and sequence number: 2
Received ACK from QS for sample with sequence number: 2 Process result: Rejected
Received ACK from QS for sample with sequence number: 2 Process result: Rejected
Wrote sample with message ID: 2 and sequence number: 3
Received ACK from QS for sample with sequence number: 3 Process result: Accepted
Received ACK from QS for sample with sequence number: 3 Process result: Accepted

This is an expected behavior. When using replicated SharedReaderQueues, 
samples are not accepted by RTI Queuing Service instances until the master 
election protocol is finished and the master instance has discovered the minimum 
number of replicas to reach the quorum. See Section 7.1 of RTI Queuing Service Users Manual 
for more information about SharedReaderQueue replication.
