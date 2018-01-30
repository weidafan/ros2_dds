#!/bin/tcsh

# Detect script directory
set script=($_)
set script=`echo $script | sed -e 's/^source //'`
set script_dir=`dirname "$script"`
set host_version=5.2.3

# Get installation directory
set install_dir=`echo "$script_dir/../.." | sed -e 's/\\ / /g'`

# Get architecture name and host os
set architecture_name=`echo $script | sed -e 's/.*rtisetenv_\(.*\).tcsh/\1/'`
set host_os=`uname -s`

# Set NDDSHOME and PATH
setenv NDDSHOME `cd "$install_dir"; pwd`
setenv PATH "$NDDSHOME/bin":"$PATH"

# Set Library Path
if ($host_os == "Darwin") then
    setenv DYLD_LIBRARY_PATH "$NDDSHOME/lib/$architecture_name":"$DYLD_LIBRARY_PATH"
else
    setenv LD_LIBRARY_PATH "$NDDSHOME/lib/$architecture_name":"$LD_LIBRARY_PATH"
endif

echo "###############################################################################"
echo ""
echo "         (c) Copyright, Real-Time Innovations, All rights reserved.            "
echo "                                                                               "
echo "                           RTI Connext DDS $host_version                       "
echo ""
echo "###############################################################################"
