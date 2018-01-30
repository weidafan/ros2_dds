==========================================
C++ Hello World Example with WAN transport
==========================================

An example publication and subscription pair to send and receive simple
strings securely over a WAN.

Example certificates for two peers are included.

Purpose
=======

This example shows how to perform basic publish-subscribe communication
using the WAN transport. This includes configuring a securely
authenticated and encrypted channel; example certificates are included
for this purpose.

For convenience, complete source code and a sample makefile for an
architecture have been provided. Generate your own makefile or project 
file with rtiddsgen if you want to run the example on other architectures.

How to Compile and Run
======================

To use this example, you must install a version of OpenSSL compatible with
this release.  Check the platform notes and release notes for current OpenSSL
version support. It is available from RTI's Self Service Portal, 
www.openssl.org as well as from other sources.

Before compiling make sure that the environment variable NDDSHOME is defined 
and that it refers to your RTI Connext installation directory. 

WAN Server Configuration
------------------------

The provided example uses the WAN transport with security disabled.
The WAN transport relies on a rendezvous server based on the STUN protocol in
order to locate peers and establish communication.  Before compiling the example
code, decide where the WAN server will be running and edit the WAN_SERVER
defined at the top of the publisher and subscriber source files.

Before running the example applications, start the WAN server:
    ${NDDSHOME}/bin/rtiwanserver -address <addr> [-port <port>]

A specific interface address should be chosen for the WAN server and must match
the address used when configuring the transport (as specified in the 
WAN_SERVER line defined at the top of the publisher and subscriber source
files). The default port number is 3478.

In order to be used for traversal of Network Address Translation layers (NATs),
the server must be located outside of any NAT layers with a globally-accessible
address. See the Secure WAN Transport documentation for more information.


WAN Locators
------------

The WAN transport does not use simple IP addresses to locate peers.  
A WAN transport locator consists of a WAN ID, which is an arbitrary 
12-byte value, and a bottom 4-byte value that specifies a fallback local 
IPv4 address.  

Locators must be of the form:
    wan://::1:192.168.1.1, which is a 128-bit address in IPv6 notation.

The "wan://" part specifies that the address is for the WAN transport.  

The next part, "::1", specifies the top 12 bytes of the address to be 
11 zero bytes, followed by a byte with value 1 (this corresponds to the 
peer's WAN ID).  

The last part, "192.168.1.1" refers to the peers local IPv4 address, which 
will be used if the peers are on the same local network.

Before running the example applications, the peers list must be configured.
For example:

On the publisher side with WAN_ID 1 (as specified in the WAN_ID line
defined at the top of the publisher source file),
the NDDS_DISCOVERY_PEERS must be set to the following value:

On Unix:
    setenv NDDS_DISCOVERY_PEERS wan://::2:<subscriber private IP address>
On Windows:
    set NDDS_DISCOVERY_PEERS=wan://::2:<subscriber private IP address>

On the subscriber side, with WAN_ID 2 (as specified in the WAN_ID line 
defined at the top of the subscriber source file),
the NDDS_DISCOVERY_PEERS must be set to the following value:

On Unix:
    setenv NDDS_DISCOVERY_PEERS wan://::1:<publisher private IP address>
On Windows:
    set NDDS_DISCOVERY_PEERS=wan://::1:<publisher private IP address>


DTLS Security Configuration
---------------------------

To enable secure communication in the example, uncomment the USE_SECURITY 
define in both the publisher and subscriber example code. This will result 
in the setting of properties related to the Certificate Authority used to 
verify peers, and a certificate identifying the application to its peers.

Example certificates are included with the example, but can be replaced
with any certificate files in the PEM text format.

See the Secure WAN Transport documentation for more information.


UNIX-based Systems
------------------

Use rtiddsgen to generate a makefile for your machine's architecture and
compiler. For example, if both the publisher and the subscriber application
will run on sparcSol2.10 machines and you want to compile with the gcc3.4.2
compiler, run rtiddsgen for the sparcSol2.10gcc3.4.2 architecture:

    rtiddsgen -language C++ -example sparcSol2.10gcc3.4.2 HelloWorld.idl

You may get messages saying that some files already exist and will not be
replaced. You can safely ignore those messages, since all the source files
for this example are already provided.

Before compiling, make sure that the desired version of compiler and linker
are in your PATH environment variable.

Then compile by typing:

    gmake -f makefile_HelloWorld_sparcSol2.10gcc3.4.2

Before running, make sure that your LD_LIBRARY_PATH includes the path(s) to the
RTI Connext DDS libraries and to a supported version of the OpenSSL libraries
matching your architecture. For example:

    setenv LD_LIBRARY_PATH ${NDDSHOME}/lib/sparcSol2.10gcc3.4.2:${LD_LIBRARY_PATH}
    setenv LD_LIBRARY_PATH ${OPENSSLHOME}/sparcSol2.10gcc3.4.2/lib:${LD_LIBRARY_PATH}

Set NDDS_DISCOVERY_PEERS as indicated in the section WAN locators.

Run the subscriber by typing:

    objs/sparcSol2.10gcc3.4.2/HelloWorld_subscriber <Domain_ID> <Number_of_Samples>

and run the publisher by typing:

    objs/sparcSol2.10gcc3.4.2/HelloWorld_publisher <Domain_ID> <Number_of_Samples>


Windows Systems
---------------

Use rtiddsgen to generate the solution and project files for your version of
Visual Studio. For example, if both the publisher and the subscriber
application will be compiled with Visual Studio 2013, run rtiddsgen for the
i86Win32VS2013 architecture:

    rtiddsgen -language C++ -example i86Win32VS2013 HelloWorld.idl

Open the solution file HelloWorld-vs2013.sln inside Visual Studio. Build the
two projects, HelloWorld_publisher and HelloWorld_subscriber, with the Win32
Release setting (or Win32 Debug settings if you prefer). (To build either 
HelloWorld_publisher or HelloWorld_subscriber, select the project,
right click, then select Build.)

Before running, make sure that your Path includes the path(s) to the
RTI Connext DDS libraries and to a supported version of the OpenSSL
libraries matching your architecture. For example:

    set Path=%NDDSHOME%\lib\i86Win32VS2013;%Path%
    set Path=%OPENSSLHOME%\i86Win32VS2013\bin;%Path%

Set NDDS_DISCOVERY_PEERS as indicated in the section WAN locators.

Run the subscriber by typing in a DOS prompt:

    objs\i86Win32VS2013\HelloWorld_subscriber <Domain_ID> <Number_of_Samples>

and run the publisher by typing:

    objs\i86Win32VS2013\HelloWorld_publisher <Domain_ID> <Number_of_Samples>


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

