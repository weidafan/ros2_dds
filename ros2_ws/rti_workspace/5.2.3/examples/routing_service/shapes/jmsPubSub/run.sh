#!/bin/sh
###############################################################################
##         (c) Copyright, Real-Time Innovations, All rights reserved.        ##
##                                                                           ##
##         Permission to modify and use for internal purposes granted.       ##
## This software is provided "as is", without warranty, express or implied.  ##
##                                                                           ##
###############################################################################

###############################################################################
## RTI Routing Service JMS Shapes Example run script                         ##
###############################################################################

#
# Set the location of RTI DDS here or as an environment variable
# if you plan to use RTI's JMS
#
# For example:
#
# NDDSHOME = "/opt/rti/ndds.4.5c"

#
# Set the path to your Java EE library, containing the JMS interface
#
# For example:
#
# JAVAEEJAR="/opt/glassfish/lib/javaee.jar"

#
# Set the class path required to compile with your JMS vendor,
# including the Java EE library
#
# For example:
#
# JMS_CLASSPATH = "$NDDSHOME/class/nddsjava.jar:$NDDSHOME/class/rtijms.jar"


###############################################################################

if [ $JAVA_HOME ]; then
	JAVA="$JAVA_HOME/bin/java"
else 
   # You can override the following settings with the correct location of Java
   JAVA=`which java`
   
   # Make sure JAVAC is set correctly
   test -z "$JAVA" && echo "javac not found" && exit 1

fi

test -z "$JMS_CLASSPATH" && echo "JMS_CLASSPATH not found" && exit 1
test -z "$JAVAEEJAR" && echo "JAVAEEJAR not found" && exit 1

# Ensure this script is invoked from the root directory of the project
test ! -d src && echo "You must run this script from the example root directory" && exit 1

if [ $1 ]; then
	if [ $1 = Pub ]; then
		$JAVA -classpath .:objs:$JAVAEEJAR:$JMS_CLASSPATH com.rti.jmsadapter.shapes.ShapesPublisher $2 $3 $4
	elif [ $1 = Sub ]; then
		$JAVA -classpath .:objs:$JAVAEEJAR:$JMS_CLASSPATH com.rti.jmsadapter.shapes.ShapesSubscriber $2
	else 
		echo "Usage: "
		echo " run.sh Pub <TopicName> <ShapeColor> <ShapeSize>"
		echo " run.sh Sub <TopicName>"
		echo " Example: run.sh Pub Black 50"
	fi
else
		echo "Usage: "
		echo " run.sh Pub <TopicName> <ShapeColor> <ShapeSize>"
		echo " run.sh Sub <TopicName>"
		echo " Example: run.sh Pub Black 50"
fi


