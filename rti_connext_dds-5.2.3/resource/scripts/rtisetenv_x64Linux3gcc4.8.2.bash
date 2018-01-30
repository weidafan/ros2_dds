#!/bin/bash

# Detect script directory
script="${BASH_SOURCE[0]}"
script_dir=`dirname "$script"`
host_version=5.2.3

# Get installation directory
install_dir=`cd "$script_dir/../.."; pwd`

# Get architecture name and host os
architecture_name=`echo $script | sed -e 's/.*rtisetenv_\(.*\).bash/\1/'`
host_os=`uname -s`

# Export NDDSHOME and PATH
NDDSHOME="$install_dir"; export NDDSHOME
PATH="$NDDSHOME/bin":$PATH; export PATH

# Export library path
if [ "$host_os" != "Darwin" ]; then
   LD_LIBRARY_PATH="$NDDSHOME/lib/$architecture_name":$LD_LIBRARY_PATH; export LD_LIBRARY_PATH
else
    DYLD_LIBRARY_PATH="$NDDSHOME/lib/$architecture_name":$DYLD_LIBRARY_PATH; export DYLD_LIBRARY_PATH
fi

echo "###############################################################################"
echo ""
echo "         (c) Copyright, Real-Time Innovations, All rights reserved.            "
echo "                                                                               "
echo "                           RTI Connext DDS $host_version                       "
echo ""
echo "###############################################################################"
