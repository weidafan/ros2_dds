This test is different from the normal latency test at
<path to examples>/connext_dds/c++/performance/latency in two ways.  First, 
it uses the RTI CORBA Compatibility Kit, changing the way some data fields are
accessed.  Second, the majority of QoS changes are now in XML.  See below
for a description of how command-line options and XML interact.
The User's Manual has more information about the CCK and XML profiles.

Primary documentation for the latency test is in
<path to examples>/connext_dds/c++/performance/latency/Instructions.pdf, but 
there are several modifications required to use the CCK.  Also see
<path to examples>/corba/c++/Instructions.pdf for more detailed
instructions on setting up the CORBA build environment.

1.) Before running rtiddsgen, generate the CORBA support files by running:
      $ tao_idl -GT Latency.idl

2.) The rtiddsgen command line is different:
      $ rtiddsgen -language c++ -example <arch> -corba LatencyC.h Latency.idl

    You may get messages saying some files exist and will not be
    replaced.  These are expected, since the test already provides
    Latency_subscriber.cxx, Latency_publisher.cxx.  Do not remove
    USER_QOS_PROFILES.xml as instructed -- the normal latency test
    does not use the XML file, but this one does.

3.) Edit Source_Files in Latency_publisher.mpc and
    Latency_subscriber.mpc to add NddsCommunicator.cxx and
    DataProcessor.cxx.  If using IPV6 or shared memory, add these
    defines to the 'macros' line in this file instead of the project
    or makefile as described in Instructions.pdf.

4.) Generate makefiles:
      $ $ACE_ROOT/bin/mwc.pl -type gnuace Latency.mwc
    Note this creates a file called GNUmakefile instead of
    the normal makefile_<arch>.

5.) make:
      $ gmake -f GNUmakefike
---

The test common options are independent from XML profiles,
and act as before.  

As a convenience -domainId works normally.  Other options may
overwrite XML and should be used only after verifying the combination
of XML and code QoS changes result in the desired behavior.







