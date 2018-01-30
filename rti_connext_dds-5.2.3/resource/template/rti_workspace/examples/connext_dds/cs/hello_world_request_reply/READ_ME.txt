=====================================================
RTI Connext (formerly, RTI Data Distribution Service)
Hello_world_request_reply Example Application
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

To run this example, type the following in two different command shells,
either on the same machine or on different machines:

  > <win directory>\obj\<Debug|Release>\PrimeNumberReplier.exe [<domain_id>]
  > <win directory>\obj\<Debug|Release>\PrimeNumberRequester.exe <n> [<primes_per_reply> [<domain_id>]]

Where <win directory> is described above. For example, if you are running the 
Debug 64-bit Visual Studio 2013 requester the command is: 

  > win64-vs2013\obj\Debug\PrimeNumberRequester.exe <n> [<primes_per_reply> [<domain_id>]]
  
The Requester and the Replier are configured by the file USER_QOS_PROFILES.xml
located in this directory. You can modify this file to change the example's
behavior.

For more information on using Requesters and Repliers, please consult the 
RTI Core Libraries and Utilities Getting Started Guide and User's Manual.

