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
behavior, or you can replace it entirely with the contents of one of the
example files in the example/QoS/ directory.

To run this example on Windows, type the following in two different command
shells, either on the same machine or on different machines:

  > objs\<architecture>\Hello.exe sub
  > objs\<architecture>\Hello.exe pub

To run this example on a UNIX-based system, type the following in two
different command shells, either on the same machine or on different machines:

  > objs/<architecture>/Hello sub
  > objs/<architecture>/Hello pub

This example requires the zlib and bzip2 libraries to be present on your system.
If they are not, see the following for information:

http://zlib.net/
http://bzip.org/

Many Unix systems already have these libraries installed.  The 32bit Windows
versions are included with the Low Bandwidth Plugins distribution.