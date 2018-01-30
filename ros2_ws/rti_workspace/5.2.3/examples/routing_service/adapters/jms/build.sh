#!/bin/sh
###############################################################################
##         (c) Copyright, Real-Time Innovations, All rights reserved.        ##
##                                                                           ##
##         Permission to modify and use for internal purposes granted.       ##
## This software is provided "as is", without warranty, express or implied.  ##
##                                                                           ##
###############################################################################

###############################################################################
## RTI Routing Service JMS Adapter build script                              ##
###############################################################################

#
# Set the location of RTI Routing Service here or as an environment variable
#
# For example:
#
# RTIRSHOME = "/opt/rti/RTI_Routing_Service_2.0.1"
#
RTIRSHOME="../../"

#
# Set the path to your Java EE library, containing the JMS interface
#
# For example:
#
# JAVAEEJAR="/opt/glassfish/lib/javaee.jar"


###############################################################################

if [ $JAVA_HOME ]; then
	JAVAC="$JAVA_HOME/bin/javac"
	JAR="$JAVA_HOME/bin/jar"
else 
   # You can override the following settings with the correct location of Java
   JAVAC=`which javac`
   JAR=`which jar`
   
   # Make sure JAVAC is set correctly
   test -z "$JAVAC" && echo "javac not found" && exit 1
   # Make sure JAR is set correctly
   test -z "$JAR" && echo "jar not found" && exit 1
fi

test -z "$RTIRSHOME" && echo "RTIRSHOME not found" && exit 1
test -z "$JAVAEEJAR" && echo "JAVAEEJAR not found" && exit 1

# Path to RTI Routing Service Adapter API
ADAPTER_CLASSPATH="$RTIRSHOME/lib/java/rtirsadapter.jar"
test -f "$ADAPTER_CLASSPATH" || ADAPTER_CLASSPATH="$NDDSHOME/lib/java/rtirsadapter.jar"

# Path to RTI DDS Java API
DDS_CLASSPATH="$RTIRSHOME/lib/java/nddsjava.jar"
test -f "$DDS_CLASSPATH" || DDS_CLASSPATH="$NDDSHOME/lib/java/nddsjava.jar"

# Ensure this script is invoked from the root directory of the project
test ! -d src && echo "You must run this script from the jms adapter root directory" && exit 1

ALL_SRC=`find src/com/rti/routingservice/adapter/jms -name \*.java`

mkdir -p objs

# Builds all files from 'src' to 'objs'
echo "Building all the sources in 'src' into 'objs' directory..."
# echo "Running $JAVAC -d objs -sourcepath src -classpath $ADAPTER_CLASSPATH:$DDS_CLASSPATH:$JAVAEEJAR $ALL_SRC"
$JAVAC -d objs -sourcepath src -classpath $ADAPTER_CLASSPATH:$DDS_CLASSPATH:$JAVAEEJAR $ALL_SRC
$JAR cf objs/jmsadapter.jar -C objs com
rm -rf objs/com

