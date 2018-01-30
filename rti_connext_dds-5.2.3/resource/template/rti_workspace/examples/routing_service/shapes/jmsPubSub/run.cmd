@ECHO OFF
setlocal enableextensions enabledelayedexpansion

REM ###########################################################################
REM #        (c) Copyright, Real-Time Innovations, All rights reserved.       #
REM #                                                                         #
REM #        Permission to modify and use for internal purposes granted.      #
REM # This software is provided "as is", without warranty, express or implied #
REM #                                                                         #
REM ###########################################################################

REM
REM Set the location of RTI DDS here or as an environment variable
REM if you plan to use RTI's JMS
REM
REM For example:
REM
REM SET NDDSHOME=C:\Program Files\RTI\ndds.5.0.0
REM

REM
REM Set the class path required to compile with your JMS vendor
REM
REM For example:
REM
REM SET JMS_CLASSPATH="%NDDSHOME%"\class\nddsjava.jar;"%NDDSHOME%"\class\rtijms.jar
REM

REM 
REM Set the path to your Java EE library, containing the JMS interface
REM
REM For example:
REM
REM SET JAVAEEJAR="C:\Program Files\Java\glassfishv3\glassfish\lib\javaee.jar"
REM

REM ***************************************************************************

REM Get rid of quotes
IF NOT DEFINED JAVAEEJAR (
	ECHO Variable JAVAEEJAR not defined
    GOTO ENDSCRIPT
)

SET JMS_CLASSPATH_NQ=.
IF DEFINED JMS_CLASSPATH (
	SET JMS_CLASSPATH_NQ=!JMS_CLASSPATH:"=!
)

SET JAVAEEJAR_NQ=!JAVAEEJAR:"=!

IF NOT DEFINED JAVA_HOME (
	SET JAVA_HOME_NQ=.
	GOTO start_check
)
SET JAVA_HOME_NQ=!JAVA_HOME:"=!

:start_check

REM Make sure javac.exe is in available
IF EXIST "!JAVA_HOME_NQ!\bin\java.exe" (
	SET JAVA="!JAVA_HOME_NQ!\bin\java.exe"
) ELSE (
	SET JAVA=java.exe
	SET "PATH_NQ=!PATH:"=!"
	FOR %%F IN (java.exe) DO IF NOT EXIST %%~$PATH_NQ:F (
		ECHO Error: java.exe not found in current search path.
		ECHO Make sure that Java is correctly installed and you have the
		ECHO compiler in the search path or have set the environment variable JAVA_HOME
		GOTO ENDSCRIPT
	)
)

IF NOT EXIST "!JAVAEEJAR_NQ!" (
	ECHO Variable JAVAEEJAR not defined correctly
    GOTO ENDSCRIPT
)

REM Ensure this script is invoked from the root directory of the project
IF NOT EXIST SRC (
    ECHO You must run this script from the jms adapter root directory
    GOTO ENDSCRIPT
)

IF "%1"=="Pub" (
	%JAVA% -classpath .;objs;"!JAVAEEJAR_NQ!";"!JMS_CLASSPATH_NQ!" com.rti.jmsadapter.shapes.ShapesPublisher %2 %3 %4
) ELSE (
IF "%1"=="Sub" (
	%JAVA% -classpath ".;objs;!JAVAEEJAR_NQ!;!JMS_CLASSPATH_NQ!" com.rti.jmsadapter.shapes.ShapesSubscriber %2
) ELSE (
		echo Usage: 
		echo  run Pub TopicName ShapeColor ShapeSize
		echo  run Sub TopicName
		echo  Example: run Pub Black 50
))

:ENDSCRIPT
