==========================================================
Java Hello World Example with Enterprise Discovery Service
==========================================================

An example publisher and subscriber pair to send and receive simple strings.
Instead of using the default Simple Discovery Protocol for participant and
endpoint discovery, however, this example strictly makes use of the RTI
Enterprise Discovery Service. In other words, the two participants cannot
discover each other without the aid of the external RTI Enterprise Discovery
Service running. Be sure that RTI Enterprise Discovery Service runs in the
same domain (via command-line argument '-P_domain_id') as the HelloWorld
publisher and subscriber applications.

Purpose
=======

This example shows how to perform basic publish-subscribe communication.

How to Compile
==============

Make sure the environment variable NDDSHOME is defined before compiling
or running the example.

Use rtiddsgen to auto generate a makefile for your machine's architecture.
For example, if both the publisher and the subscriber application will run 
on Red Hat Enterprise Linux 4 machines, you need to run rtiddsgen for only the
the corresponding java architecture:

     rtiddsgen -language Java -example i86Linux2.6gcc3.4.3 HelloWorld.idl

You will get a message saying that some files already exist and will
not be replaced. You can safely ignore those messages, since all the
source files for this example are already provided.

Before compiling, make sure that the desired version of the javac compiler
is in your PATH environment variable.

Then compile by typing:

     gmake -f makefile_HelloWorld_i86Linux2.6gcc3.4.3

How to Run
==========

Before running, make sure that the desired version of the java virtual
machine is in your PATH environment variable.

Run the RTI Enterprise Discovery Service by typing:

${NDDSHOME}/bin/rtidiscoveryservice -P_domain_id <Domain_ID>

on UNIX or:

%NDDSHOME%\bin\rtidiscoveryservice.bat

on Windows.

Run the subscriber by typing:

     gmake [ARGS="<Domain_ID> <Number_of_Samples>"] -f makefile_HelloWorld_i86Linux2.6gcc3.4.3 HelloWorldSubscriber

and run the publisher by typing:

     gmake [ARGS="<Domain_ID> <Number_of_Samples>"] -f makefile_HelloWorld_i86Linux2.6gcc3.4.3 HelloWorldPublisher


Optional
========
You can specify the list of nodes that you want to talk to in an environment 
variable or a file called NDDS_DISCOVERY_PEERS. If your platform does not 
support multicast, or has multicast disabled by default, you must set this
list.

Please consult the Platform Notes and online documentation for details.

Both applications accept two optional arguments:

<Domain_ID>: 
In order for the two applications to communicate, they have to use the 
same domain ID number. By default, both Hello World applications use
domain ID 0. 

If you want to use a specific domain ID, enter it as the first argument 
(valid IDs are >=0). If you are sharing a machine with others, you may
want to use separate domain IDs.

<Number_of_Samples>: 
In the publishing application, the second parameter is used as the number of
samples to publish before terminating. 
In the subscribing application, the second parameter is used as the number of
4-second intervals for which it will sleep/awake before terminating.


