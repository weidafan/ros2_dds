=====================================================
RTI Connext (formerly, RTI Data Distribution Service)
Hello_simple Example Application
=====================================================

Welcome to Connext.


Compiling this Example
----------------------

Before compiling make sure that the environment variable NDDSHOME is defined 
and that it refers to your RTI Connext installation directory. 

To build this example on Windows, type the following in a command shell:

  > build

To build this example on a UNIX-based system, type the following in a command
shell:

  > ./build.sh

To remove all the generated files (.class files), just delete the 'objs'
directory. 

On Unix:
  > rm -Rf objs

On Windows
  > RD /S /Q OBJS


Running this Example
--------------------
To run this example on Windows, type the following in two different command
shells, either on the same machine or on different machines:

  > runSub
  > runPub

To run this example on a UNIX-based system, type the following in two
different command shells, either on the same machine or on different machines:

  > ./runSub.sh
  > ./runPub.sh

If you are running on a 64-bit UNIX-based system, you may need to set
RTI_JAVA_OPTION to -d64 before running the above commands.

For more information, please consult your "Getting Started Guide."
