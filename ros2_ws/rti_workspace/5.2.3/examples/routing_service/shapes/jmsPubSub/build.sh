#!/bin/sh
###############################################################################
##         (c) Copyright, Real-Time Innovations, All rights reserved.        ##
##                                                                           ##
##         Permission to modify and use for internal purposes granted.       ##
## This software is provided "as is", without warranty, express or implied.  ##
##                                                                           ##
###############################################################################

###############################################################################
## RTI Routing Service JMS Shapes Example build script                       ##
###############################################################################


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

test -z "$JAVAEEJAR" && echo "JAVAEEJAR not found" && exit 1

# Ensure this script is invoked from the root directory of the project
test ! -d src && echo "You must run this script from the example root directory" && exit 1

ALL_SRC=`find src -name \*.java`

mkdir -p objs

# Builds all files from 'src' to 'objs'
echo "Building all the sources in 'src' into 'objs' directory..."
# echo "Running $JAVAC -d objs -sourcepath src -classpath $JAVAEEJAR $ALL_SRC"
$JAVAC -d objs -sourcepath src -classpath $JAVAEEJAR $ALL_SRC


