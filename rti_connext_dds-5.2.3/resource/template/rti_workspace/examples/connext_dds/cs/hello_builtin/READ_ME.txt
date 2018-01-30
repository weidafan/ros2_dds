=====================================================
RTI Connext (formerly, RTI Data Distribution Service)
Hello_builtin Example Application
=====================================================

Welcome to Connext.


Compiling this Example
----------------------
To build this example, open the appropriate solution file for your version of
Microsoft Visual Studio in the correct <win directory>. Where <win directory> 
is in the form win<32|64>-vs<version> depending on whether you are running 32 
or 64-bit and which Visual Studio version you are using. For example, if you 
are running 64-bit Visual Studio 2013 the directory is win64-vs2013. If you 
are using Visual Studio 2008 there will be no '-vs<version>' appended to the 
directory name. 


Running this Example
--------------------
This example application is configured by the file USER_QOS_PROFILES.xml
located in this directory. You can modify this file to change the example's
behavior, or you can replace it entirely with the contents of one of the
example files in the <path to examples>/connext_dds/qos/ directory.

To run this example, type the following in two different command shells,
either on the same machine or on different machines:

  > <win directory>\obj\<Debug|Release>\Hello.exe sub
  > <win directory>\obj\<Debug|Release>\Hello.exe pub

Where <win directory> is described above. For example, if you are running the 
Debug 64-bit Visual Studio 2013 publisher the command is: 

   > win64-vs2013\obj\Debug\Hello.exe pub

For more information, please consult your "Getting Started Guide."
