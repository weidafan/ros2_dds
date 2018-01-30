#!/bin/sh
###############################################################################
## RTI Routing Service Simple Adapter                                        ##
###############################################################################

###############################################################################

# Java compiler
JAVAC=javac
JAR=jar
# Path to RTI Routing Service Adapter API
ADAPTER_CLASSPATH="$NDDSHOME/lib/java/rtirsadapter.jar"
# Path to RTI DDS Java API
DDS_CLASSPATH="$NDDSHOME/lib/java/nddsjava.jar"

ALL_SRC=`find routingservice/adapter/simplefile -name \*.java`

mkdir -p class

# Builds all files from 'routingservice' to 'class'
echo "Building all the sources in 'rtiroutingservice' into 'class' directory..."
$JAVAC -d class -sourcepath . -classpath $ADAPTER_CLASSPATH:$DDS_CLASSPATH $ALL_SRC
$JAR cf class/simplefileadapter.jar -C class routingservice
rm -rf class/routingservice

