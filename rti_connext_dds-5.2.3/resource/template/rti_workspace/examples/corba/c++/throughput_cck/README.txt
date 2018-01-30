This test is different from the normal throughput test at
<path to examples>/connext_dds/c++/performance/throughput in two ways.  First, 
it uses the RTI CORBA Compatibility Kit, changing the way some data fields are
accessed.  Second, the majority of QoS changes are now in XML.  See below
for a description of how command-line options and XML interact.
The User's Manual has more information about the CCK and XML profiles.

Primary documentation for the throughput test is in
<path to examples>/connext_dds/c++/performance/Instructions.pdf, but there
are several modifications required to use the CCK.  Also see
<path to examples>/corba/c++/Instructions.pdf for more detailed
instructions on setting up the CORBA build environment.

1.) Before running rtiddsgen, generate the CORBA support files by running:
      $ tao_idl -GT Throughput.idl

2.) The rtiddsgen command line is different:
      $ rtiddsgen -language c++ -example <arch> -corba ThroughputC.h Throughput.idl

    You may get messages saying some files exist and will not be
    replaced.  These are expected, since the test already provides
    Throughput_subscriber.cxx, Throughput_publisher.cxx.  Do not remove
    USER_QOS_PROFILES.xml as instructed -- the normal throughput test
    does not use the XML file, but this one does.

3.) Edit Source_Files in Throughput_publisher.mpc and
    Throughput_subscriber.mpc to add PerfMon.cxx, ThroughputArgs.cxx
    ThroughputCommon.cxx, ThroughputQos.cxx, ThroughputTransport.cxx
    and TimeManager.cxx.  If using IPV6 or shared memory, add these
    defines to the 'macros' line in this file instead of the project
    or makefile as described in Instructions.pdf.

4.) Generate makefiles:
      $ $ACE_ROOT/bin/mwc.pl -type gnuace Throughput.mwc
    Note this creates a file called GNUmakefile instead of
    the normal makefile_<arch>.

5.) make:
      $ gmake -f GNUmakefike

---

The following options act as before:
  -help, -domainId, -nddsVerbosity, -testVerbosity, -name,
  -subscribers, -size, -demand, -recoveryTime.

The -reliable option acts as before, but note this option encompasses
a set of changes, not just the reliability QoS.  This is implemented
via derived QoS profiles -- see USER_QOS_PROFILES.

Other options may overwrite XML and should be used only after
verifying the combination of XML and code QoS changes result in the
desired behavior.
