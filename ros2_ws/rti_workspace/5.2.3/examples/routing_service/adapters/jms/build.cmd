@ECHO OFF
REM ###########################################################################
REM #        (c) Copyright, Real-Time Innovations, All rights reserved.       #
REM #                                                                         #
REM #        Permission to modify and use for internal purposes granted.      #
REM # This software is provided "as is", without warranty, express or implied #
REM #                                                                         #
REM ###########################################################################

SETLOCAL enabledelayedexpansion

REM 
REM Set the location of RTI Routing Service here or as an environment variable
REM
REM For example:
REM
REM SET RTIRSHOME="C:\Program Files\RTI\RTI_Routing_Service_2.0.1
REM
SET RTIRSHOME="..\.."

REM 
REM Set the path to your Java EE library, containing the JMS interface
REM
REM For example:
REM
REM SET JAVAEEJAR="C:\Program Files\Java\glassfishv3\glassfish\lib\javaee.jar"
REM

IF EXIST "%~1" (
        SET JAVAEEJAR="%~1"
)

REM ***************************************************************************

REM Get rid of quotes
IF NOT DEFINED RTIRSHOME (
	ECHO Variable RTIRSHOME not defined
    GOTO ENDSCRIPT
)
SET RTIRSHOME_NQ=%RTIRSHOME:"=%
IF NOT DEFINED JAVAEEJAR (
	ECHO Variable JAVAEEJAR not defined
    GOTO ENDSCRIPT
)
SET JAVAEEJAR_NQ=%JAVAEEJAR:"=%
IF NOT DEFINED JAVA_HOME (
	SET JAVA_HOME_NQ=.
	GOTO start_check
)
SET JAVA_HOME_NQ=%JAVA_HOME:"=%

:start_check

REM Make sure javac.exe is in available
IF EXIST "%JAVA_HOME_NQ%\bin\javac.exe" (
	SET JAVAC="%JAVA_HOME_NQ%\bin\javac.exe"
) ELSE (
	SET JAVAC=javac.exe
	SET "PATH_NQ=%PATH:"=%"
	FOR %%F IN (javac.exe) DO IF NOT EXIST %%~$PATH_NQ:F (
		ECHO Error: javac.exe not found in current search path.
		ECHO Make sure that Java SDK is correctly installed and you have the
		ECHO compiler in the search path or have set the environment variable JAVA_HOME
		GOTO ENDSCRIPT
	)
)

REM Make sure jar.exe is available
IF EXIST "%JAVA_HOME_NQ%"\bin\jar.exe (
	SET JAR="%JAVA_HOME_NQ%"\bin\jar.exe
) ELSE (
	SET JAR=jar.exe
	SET "PATH_NQ=%PATH:"=%"
	FOR %%F IN (jar.exe) DO IF NOT EXIST %%~$PATH_NQ:F (
		ECHO Error: jar.exe not found in current search path.
		ECHO Make sure that Java SDK is correctly installed and you have the
		ECHO compiler in the search path or have set the environment variable JAVA_HOME
		GOTO ENDSCRIPT
	)
)

IF NOT EXIST "%RTIRSHOME_NQ%" (
	ECHO Variable RTIRSHOME not defined correctly
    GOTO ENDSCRIPT
)

IF NOT EXIST "%NDDSHOME%" (
    ECHO Variable NDDSHOME not defined correctly
    GOTO ENDSCRIPT
)

IF NOT EXIST "%JAVAEEJAR_NQ%" (
	ECHO Variable JAVAEEJAR not defined correctly
    GOTO ENDSCRIPT
)

REM Path to RTI Routing Service Adapter API
SET ADAPTER_CLASSPATH="%RTIRSHOME_NQ%\lib\java\rtirsadapter.jar"
IF NOT EXIST "%ADAPTER_CLASSPATH%" (
    SET ADAPTER_CLASSPATH="%NDDSHOME%\lib\java\rtirsadapter.jar"
)


REM Path to RTI DDS Java API
SET DDS_CLASSPATH="%RTIRSHOME_NQ%\lib\java\nddsjava.jar"
IF NOT EXIST "%DDS_CLASSPATH%" (
    SET DDS_CLASSPATH="%NDDSHOME%\lib\java\nddsjava.jar"
)

REM Ensure this script is invoked from the root directory of the project
IF NOT EXIST SRC (
    ECHO You must run this script from the jms adapter root directory
    GOTO ENDSCRIPT
)

REM Ensure the 'objs' directory exists
IF NOT EXIST objs (
    MD objs
)

ECHO Building all the sources in 'src' into 'objs' directory...
FOR /R SRC %%F IN (*.java) DO %JAVAC% -d objs -sourcepath src -classpath %ADAPTER_CLASSPATH%;%DDS_CLASSPATH%;"%JAVAEEJAR_NQ%" "%%F"
%JAR% cf objs/jmsadapter.jar -C objs com
RD /S /Q objs\com

:ENDSCRIPT
