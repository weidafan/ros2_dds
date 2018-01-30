============================================
Java Hello World Example with DTLS transport
============================================

An example publication and subscription pair to send and receive simple
strings securely.

Example certificates for two peers are included.

Purpose
=======

This example shows how to perform basic publish-subscribe communication
using the DTLS transport. This includes configuring a securely
authenticated and encrypted channel; example certificates are included
for this purpose.

For convenience, complete source code and a sample makefile for an
architecture have been provided. Generate your own makefile with 
rtiddsgen if you want to run the example on other architectures.

How to Compile and Run
======================

To use this example, you must have a supported version of OpenSSL installed.
RTI distributes openssl for supported architectures through RTI's Self-Service
Portal (although it is possible to obtain OpenSSL from other sources).

Make sure the environment variable NDDSHOME is defined before compiling
or running the example.

DTLS Locators
------------

Before running the example applications, the peers list must be configured.
For example:

On the publisher side, the NDDS_DISCOVERY_PEERS can be set to the following
value:

On Unix:
    setenv NDDS_DISCOVERY_PEERS dtls://<subscriber IP address>
On Windows:
    set NDDS_DISCOVERY_PEERS=dtls://<subscriber IP address>

On the subscriber side the NDDS_DISCOVERY_PEERS can be set to the following
value:

On Unix:
    setenv NDDS_DISCOVERY_PEERS dtls://<publisher IP address>
On Windows:
    set NDDS_DISCOVERY_PEERS=dtls://<publisher IP address>


DTLS Security Configuration
---------------------------

This example configures a set of properties related to the Certificate Authority
used to verify peers, and a certificate identifying the application to its peers.

Example certificates are included with the example, but can be replaced
with any certificate files in the PEM text format.

See the Secure WAN Transport documentation for more information.

Running RTI Code Generator
--------------------------

Use rtiddsgen to generate a makefile for your machine's architecture.
For example, if both the publisher and the subscriber application will run 
on sparcSol2.10 machines, you need to run rtiddsgen for only the
sparcSol2.10 java architecture:

     rtiddsgen -language Java -example sparcSol2.10gcc3.4.2 HelloWorld.idl

You will get a message saying that some files already exist and will
not be replaced. You can safely ignore those messages, since all the
source files for this example are already provided.

Before compiling, make sure that the desired version of javac compiler
is in your PATH environment variable.

Then compile by typing:

     gmake -f makefile_HelloWorld_sparcSol2.10gcc3.4.2

Before running, make sure that the desired version of java compiler
is in your PATH environment variable. 

The NDDS_DISCOVERY_PEERS enviroment variable must be configured as indicated 
in the section DTLS locators.

UNIX-based systems
------------------

Before running, make sure that your LD_LIBRARY_PATH includes the path(s) to the
RTI and OpenSSL libraries:

    setenv LD_LIBRARY_PATH ${NDDSHOME}/lib/sparcSol2.10gcc3.4.2:${LD_LIBRARY_PATH}
    setenv LD_LIBRARY_PATH ${OPENSSLHOME}/sparcSol2.10gcc3.4.2/lib:${LD_LIBRARY_PATH}

Run the subscriber by typing:

     gmake <ARGS="Domain_ID Number_of_Samples"> -f makefile_HelloWorld_sparcSol2.10gcc3.4.2 HelloWorldSubscriber

and run the publisher by typing:

     gmake <ARGS="Domain_ID Number_of_Samples"> -f makefile_HelloWorld_sparcSol2.10gcc3.4.2 HelloWorldPublisher

Windows systems
---------------

Before running, make sure that your Path includes the path(s) to the
RTI and to a supported version of the OpenSSL libraries. For example:

    set Path=%NDDSHOME%\lib\i86Win32VS2013;%Path%
    set Path=%OPENSSLHOME%\i86Win32VS2013\release\bin;%Path%

Run the subscriber by typing:

     gmake <ARGS="Domain_ID Number_of_Samples"> -f makefile_HelloWorld_i86Win32VS2008 HelloWorldSubscriber

and run the publisher by typing:

     gmake <ARGS="Domain_ID Number_of_Samples"> -f makefile_HelloWorld_i86Win32VS2008 HelloWorldPublisher


Optional
========
Please consult the Platform Notes and online documentation for details.

Both applications accept two optional arguments:

<Domain_ID>: In order for the two applications to communicate, they have
to use the SAME domain ID number. By default, both Hello World applications
use domain ID 0. If you want to use a specific domain ID, enter it as the
first argument (valid IDs are >= 0). If you are sharing a machine with others,
you may want to use separate domain IDs.

<Number_of_Samples>: 
In the publishing application, the second parameter is the number of
samples to publish before terminating. 
In the subscribing application, the second parameter is the number of
4-second intervals for which to sleep/awake before terminating.

