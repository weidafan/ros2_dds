========================================
C Hello World Example with DTLS transport
========================================

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
architecture have been provided. Generate your own makefile or project 
file with rtiddsgen if you want to run the example on other architectures.

How to Compile and Run
======================

To use this example, you must have a supported version of OpenSSL installed.
RTI distributes openssl for supported architectures through RTI's Self-Service
Portal (although it is possible to obtain OpenSSL from other sources).

Make sure the environment variable NDDSHOME is defined before compiling
the example.

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


UNIX-based Systems
------------------

Use rtiddsgen to generate a makefile for your machine's architecture and
compiler. For example, if both the publisher and the subscriber application
will run on sparcSol2.10 machines and you want to compile with the gcc3.4.2
compiler, run rtiddsgen for the sparcSol2.10gcc3.4.2 architecture:

    rtiddsgen -language C -example sparcSol2.10gcc3.4.2 HelloWorld.idl

You may get messages saying that some files already exist and will not be
replaced. You can safely ignore those messages, since all the source files
for this example are already provided.

Before compiling, make sure that the desired version of compiler and linker
are in your PATH environment variable.

Then compile by typing:

    gmake -f makefile_HelloWorld_sparcSol2.10gcc3.4.2

Before running, make sure that your LD_LIBRARY_PATH includes the path(s) to the
RTI and OpenSSL libraries. For instance, assuming you have installed RTI's
openssl bundles for the architecture sparcSol2.10gcc3.4.2 and you are using a 
c-shell:

    setenv LD_LIBRARY_PATH ${NDDSHOME}/lib/sparcSol2.10gcc3.4.2:${LD_LIBRARY_PATH}
    setenv LD_LIBRARY_PATH ${OPENSSLHOME}/sparcSol2.10gcc3.4.2/release/lib:${LD_LIBRARY_PATH}

Set NDDS_DISCOVERY_PEERS as indicated in the section DTLS Locators.

Run the subscriber by typing:

    objs/sparcSol2.10gcc3.4.2/HelloWorld_subscriber <Domain_ID> <Number_of_Samples>

and run the publisher by typing:

    objs/sparcSol2.10gcc3.4.2/HelloWorld_publisher <Domain_ID> <Number_of_Samples>


Windows Systems
---------------

Use rtiddsgen to generate the solution and project files for your version of
Visual Studio. For example, if both the publisher and the subscriber
application will be compiled with Visual Studio 2010, run rtiddsgen for the
i86Win32VS2010 architecture:

    rtiddsgen -language C -example i86Win32VS2010 HelloWorld.idl

Open the solution file HelloWorld-vs2013.sln inside Visual Studio. Build the
two projects, HelloWorld_publisher and HelloWorld_subscriber, with the Win32
Release setting (or Win32 Debug settings if you prefer). (To build either
HelloWorld_publisher or HelloWorld_subscriber, select the project,
right click, then select Build.)

Before running, make sure that your Path includes the path(s) to the
RTI and to a supported version of the OpenSSL libraries. For example:

    set Path=%NDDSHOME%\lib\i86Win32VS2010;%Path%
    set Path=%OPENSSLHOME%\i86Win32VS2010\release\bin;%Path%

Set NDDS_DISCOVERY_PEERS as indicated in the section DTLS locators.

Run the subscriber by typing in a DOS prompt:

    objs\i86Win32VS2010\HelloWorld_subscriber <Domain_ID> <Number_of_Samples>

and run the publisher by typing:

    objs\i86Win32VS2010\HelloWorld_publisher <Domain_ID> <Number_of_Samples>


Static linking of DTLS libraries
================================
This example also allows to load DTLS libraries statically. In order to use
static libs, follow these steps:
1) Uncomment the USE_STATIC_LINK define in the publisher and/or subscriber
   example code.
2) Modify the makefile/windows solution to link against "nddstransporttlsz" and
   OpenSSL static libraries.

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

