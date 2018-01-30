=============================
RTI Low Bandwidth Plugins
Hello Example Application
=============================

Welcome to RTI Connext.


Compiling this Example
----------------------

Before compiling make sure that the environment variable NDDSHOME is defined 
and that it refers to your RTI Connext installation directory. 

To build this example on Windows, open the appropriate solution file for your
version of Microsoft Visual Studio in the win32/ directory.

To build this example on a UNIX-based system, type the following in a command
shell:

  > gmake -f make/Makefile.<architecture>


Running this Example
--------------------
You must set your PATH variable on Windows or LD_LIBRARY_PATH on UNIX to
include the <NDDSHOME>/lib/<architecture> directory to run this example.

This example application is configured by the file USER_QOS_PROFILES.xml
located in this directory. You can modify this file to change the example's
behavior.

To run this example on Windows, type the following in two different command
shells, either on the same machine or on different machines:

  > objs\<architecture>\Hello.exe sub
  > objs\<architecture>\Hello.exe pub

To run this example on a UNIX-based system, type the following in two
different command shells, either on the same machine or on different machines:

  > objs/<architecture>/Hello sub
  > objs/<architecture>/Hello pub

You must also run the simulator manager.  The lbsm example has sample
configuration files for running the manager.

To run the simulator manager, cd to SimpleChannelLayer in the lbsm example
and then run:

<NDDSHOME>/bin/rtilbsimmanager configuration.xml

