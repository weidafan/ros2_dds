#!/bin/sh
#########################################################################
# (c) 2005-2014 Copyright, Real-Time Innovations. All rights reserved.  #
# No duplications, whole or partial, manual or electronic, may be made  #
# without express written permission.  Any such copies, or              #
# revisions thereof, must display this notice unaltered.                #
# This code contains trade secrets of Real-Time Innovations, Inc.       #
#########################################################################
#
#  NAME: rticommon.sh
#  ------------------------------------------------------------------------
#  rticommon.sh is a common interface for RTI Connext DDS
#  scripts. It sets up the environment to achieve transparent execution
#  of applications.
#
#  USAGE:
#  ------------------------------------------------------------------------
#  To call the script use the following commands in your batch script:
# 
#   filename=$0
#   script_dir=`dirname "$filename"` [Required]
#   executable_name="rtiddsspy" [Optional]
#    
#   and then "source" rticommon.sh like this:
#   . ../resource/scripts/rticommon.sh [Required]
#  
#  Parameters:
# 
#    Note that you before calling the script you will need to set the
#    following parameters first:
#       - script_dir              [Required] 
#         Directory where the script lives, i.e., path/to/installation/bin.
#         It can be set by using the following command: 
#         script_dir=`dirname "$filename"`
#
#       - script_version          [Optional]
#         Version of the application to be run. This parameter is used to
#         load the right version of the Core and API dynamic libraries by
#         setting the path to the right folder.
#         For instance:
#         LD_LIBRARY_PATH=$lib_dir/$platform/$script_version:$lib_dir/$platform
#
#       - needs_platform_name     [Optional]
#         Indicates wether the script requires platform_name to be set
#         to run the application. For instance, rtiddsspy requires
#         $platform_name to be set to complete the path to the executable,
#         whereas rtiddsgen does not need to find any path based on that
#         $platform_name.
#
#       - needs_shared_libraries  [Optional]
#         Indicates wether the script requires DDS's shared libraries to
#         run. For instance, rtiroutingservice is built dynamically against
#         libnddscore and libnddsc and therefore it needs these libraries
#         to be present in the system in order to run.
# 
#       - executable_name [Required only for C/C++ Applications] 
#         For example: executable_name="rtirecorder"
#
#  Return variables:
#
#    The script will set in the environment of your script the following
#    variables if it runs successfully:
#
#       - bin_dir -- Directory where binary applications are installed
#         bin_dir == 
#           path/to/installation/resource/app/bin
# 
#       - lib_dir -- Directory where RTI Connext DDS libraries are
#         installed.
#           path/to/installation/lib
#
#       - eclipse_dir -- Directory where libraries required by
#         eclipse are installed.
#         eclipse_dir ==
#           path/to/installation/resource/app/eclipse
#
#       - jre_dir -- Directory containing all the different JREs in
#         the installation.
#         jre_dir == path/to/installation/resource/app/jre
#
#       - doc_dir -- Documentation Directory. Documentation is sorted
#         by application name within this directory.
#         doc_dir == 
#           path/to/installation/doc
#
#       - app_lib_dir -- Directory where libraries required by 
#         applications and services are installed.
#         app_lib_dir ==
#           path/to/installation/resource/app/lib
#
#       - lib_java_dir -- Directory where RTI Java libraries are
#         installed.
#         lib_java_dir == 
#           path/to/installation/lib/java
#
#       - app_lib_java_dir -- Directory where Java libraries required
#         by applications and services are installed.
#         app_lib_java_dir ==
#           path/to/installation/resource/app/lib/java
#
#       - resource_example_dir -- Directory containing all the 
#         examples this directory will be copied to the user's home 
#         directory the fisrt time any RTI tool or utility is run.
#         resource_example_dir == 
#           path/to/installation/resource/template/rti_workspace/example
#
#       - resource_user_config_dir -- Directory containing all the 
#         default user's configuration files. This directory will be 
#         copied to the user's home directory the first time any
#         RTI tool or utility is run.
#         resource_user_config_dir == 
#           path/to/installation/resource/template/rti_workspace/user_config_dir
# 
#       - app_support_dir -- Directory where applications keep different
#         application-specific files (e.g., configuration files).
#         app_support_dir == path/to/installation/resource/app/app_support
# 
#       - workspace_dir -- User directory to place RTI user-specific configurations
#         and documents. For instance:
#         /home/fgarcia/rti_workspace.
#
#       - home_example_dir -- Directory within $workspace_dir containing
#         examples. This directory is created by this script when run if
#         it does not previously exist. It is a copy of 
#         $resource_example_dir.
#         resource_example_dir == $HOME/rti_workspace/example
#
#       - home_user_config_dir -- Directory within $workspace_dir containing 
#         all the default user's configuration files. This directory is 
#         created by this script when run if it does not previously exist.
#         It is a copy of $resource_user_config_dir.
#         home_user_config = $HOME/rti_workspace/user_config
#
#       - installation_path -- Top level directory of the installation (Might be
#         a duplicate of NDDSHOME for some cases)
# 
#       - NDDSHOME -- Top level directory of the installation.
# 
#       - RTI_LICENSE_FILE -- Points to the default location of the products
#         license file. This script will not override the RTI_LICENSE_FILE
#         environment variable if it is already set.
#
#       - JREHOME -- Directory where Java Runtime Environment for your
#         platform is installed. To run Java use $JREHOME\lib\java.
#         JREHOME == path/to/installation/resource/app/
#
#       - platform_name -- Name of the RTI Connext DDS architecture
#         installed in your system for your environment (e.g.,
#         i86Linux3.xgcc4.6.3).
# 
#       - jre_platform -- Name of the RTI Connext DDS host architecture
#         for your environment (e.g., i86Linux).

if [ ! -x "$script_dir" ]
then
    echo "Warning: Could not find script_dir. Please contact support@rti.com."
    exit 1
fi

# Installation Information
##########################
host_version=5.2.3

# Common directories
####################
doc_dir=$script_dir/../doc
app_lib_dir=$script_dir/../resource/app/lib
app_lib_java_dir=$app_lib_dir/java
app_support_dir=$script_dir/../resource/app/app_support
eclipse_dir=$script_dir/../resource/app/eclipse
resource_example_dir=$script_dir/../resource/template/rti_workspace/examples
resource_user_config_dir=$script_dir/../resource/template/rti_workspace/user_config
shared_lib_extension=so

# Do not redefine lib_dir if it is already defined
if [ "x$lib_dir" = "x" ]
then
    if [ "x$run_within_module" = "xtrue" ]
    then 
	# Running within the module
	lib_dir=$script_dir/../lib
    elif [ -d "$script_dir"/../../ndds.4.1 ]
    then
	# Running from ndds.4.1
	lib_dir=$script_dir/../lib
    else
	# Running from a shipped location
	lib_dir=$app_lib_dir
	copy_workspace=true
    fi
fi 

lib_java_dir=$lib_dir/java

# Do not redefine bin_dir if it is already defined
if [ "x$bin_dir" = "x" ]
then
    bin_dir=$script_dir/../resource/app/bin
    if [ "x$executable_name" = "x" ] ||
      [ ! -d "$bin_dir" ]
    then
        bin_dir=$lib_dir
    fi
fi

# Do not redefine jre_dir if it is already defined
if [ "x$jre_dir" = "x" ]
then
    jre_dir=$script_dir/../resource/app/jre
fi

# RTI Environment variables
###########################
NDDSHOME=`cd "$rticommon_script_dir/../.."; pwd`; export NDDSHOME
PATH="$NDDSHOME/bin":$PATH; export PATH

# Default workspace directory. It can be overriden in the following
# configuration files:
# 
# - $HOME/.rti/rticommon_config.sh (for the current user)
# - $NDDSHOME/resource/scripts/rticommon_config.sh (for all users)
workspace_dir=$HOME/rti_workspace/$host_version

# By default we copy examples. Users can override that by editing the files
# listed above.
copy_examples=true

if [ -f "$HOME/.rti/rticommon_config.sh" ]
then
    # Override defaults if $HOME/.rti/rticommon_config.sh exists
    . "$HOME/.rti/rticommon_config.sh"
elif [ -f "$NDDSHOME/resource/scripts/rticommon_config.sh" ]
then
    # Override defaults if resource/scripts/rticommon_config.sh exists
    . "$NDDSHOME/resource/scripts/rticommon_config.sh"
fi

home_user_config_dir=$workspace_dir/user_config
home_example_dir=$workspace_dir/examples

# Set RTI_LICENSE_FILE to the license file in NDDSHOME if 
# it was not previously set
if [ "x$RTI_LICENSE_FILE" = "x" ]
then
    # Workspace directory for this specific version
    if [ -f "$workspace_dir/rti_license.dat" ]
    then
	RTI_LICENSE_FILE="$workspace_dir/rti_license.dat"; export RTI_LICENSE_FILE
    # Workspace top level directory
    elif [ -f "$workspace_dir/../rti_license.dat" ]
    then
	RTI_LICENSE_FILE="$workspace_dir/../rti_license.dat"; export RTI_LICENSE_FILE
    # Top level installation directory
    else
	RTI_LICENSE_FILE="$NDDSHOME/rti_license.dat"; export RTI_LICENSE_FILE
    fi
fi

# Create Workspace Dir
######################
# Copy examples to workspace dir if they are not there already
if [ ! -x "$home_example_dir" ] && [ "x$copy_workspace" = "xtrue" ] && [ -d "$resource_example_dir" ] && [ "x$copy_examples" = "xtrue" ]
then
    echo "First time running RTI Connext DDS... "
    echo "Copying examples into $home_example_dir..."
    mkdir -p "$home_example_dir"
    cp -Rpf "$resource_example_dir" "$workspace_dir/"
fi


# Copy user configuration files to workspace dir if they do not exist. If the home_user_config_dir exists
# check that all the user_config directories have been copied and copy the ones that have not otherwise.
if [ ! -x "$home_user_config_dir" ] && [ "x$copy_workspace" = "xtrue" ] && [ -d "$resource_user_config_dir" ]
then
    echo "Copying user configuration files into $home_user_config_dir..."
    mkdir -p "$home_user_config_dir"
    cp -Rpf "$resource_user_config_dir" "$workspace_dir/"

elif [ "x$copy_workspace" = "xtrue" ] && [ -d "$resource_user_config_dir" ]
then    
    user_config_dirnames=`ls "$resource_user_config_dir/"`
    for user_config_dirname in $user_config_dirnames
    do
	if [ ! -x "$home_user_config_dir/$user_config_dirname" ]
	then
	    echo "Copying missing $user_config_dirname user configuration files into $home_user_config_dir..."
	    cp -Rpf "$resource_user_config_dir/$user_config_dirname" "$home_user_config_dir/"
	fi
    done    
fi


# Define Platforms to try
#########################
# Solaris Platforms
sparcSol28Platforms=`ls -1 "$bin_dir/" | grep sparcSol2.8`
i86Sol29Platforms=`ls -1 "$bin_dir/" | grep i86Sol2.9`
sparcSol29Platforms=`ls -1 "$bin_dir/" | grep sparcSol2.9`
sparcSol210Platforms=`ls -1 "$bin_dir/" | grep sparcSol2.10`

i86Sol210Platforms=`ls -1 "$bin_dir/" | grep i86Sol2.10`
x64Sol210Platforms=`ls -1 "$bin_dir/" | grep x64Sol2.10`
sparc64Sol210Platforms=`ls -1 "$bin_dir/" | grep sparc64Sol2.10`

# Darwin Platforms
i86DarwinTigerPlatforms=`ls -1 "$bin_dir/" | grep i86Darwin8.5`
ppcDarwinTigerPlatforms=`ls -1 "$bin_dir/" | grep ppcDarwin8.5`
i86DarwinLeopardPlatforms=`ls -1 "$bin_dir/" | grep i86Darwin9.0`
ppcDarwinLeopardPlatforms=`ls -1 "$bin_dir/" | grep ppcDarwin9.0`
x64DarwinPlatforms=`ls -1 "$bin_dir/" | grep x64Darwin`

# Linux Platforms
i86Linux24Platforms=`ls -1 "$bin_dir/" | grep i86Linux2.4`
x64Linux24Platforms=`ls -1 "$bin_dir/" | grep x64Linux2.4`
i86Linux26Platforms=`ls -1 "$bin_dir/" | grep i86Linux2.6`
x64Linux26Platforms=`ls -1 "$bin_dir/" | grep x64Linux2.6`
i86Linux3Platforms=`ls -1 "$bin_dir/" | grep i86Linux3`
x64Linux3Platforms=`ls -1 "$bin_dir/" | grep x64Linux3`
ppcLinux26Platforms=`ls -1 "$bin_dir/" | grep ppc | grep Linux2.6`
ppc64Linux26Platforms=`ls -1 "$bin_dir/" | grep ppc64Linux2.6`
ppcLinux3Platforms=`ls -1 "$bin_dir/" | grep ppc | grep Linux3`
power7Linux26Platforms=`ls -1 "$bin_dir/" | grep power7Linux2.6`
cell64Linux26Platforms=`ls -1 "$bin_dir/" | grep cell64Linux2.6`
armv7Linux26Platforms=`ls -1 "$bin_dir/" | grep armv7leLinux2.6`
armv7Linux3Platforms=`ls -1 "$bin_dir/" | grep armv7.*Linux3`
armv6LinuxPlatforms=`ls -1 "$bin_dir/" | grep armv6.*Linux`

i86SusePlatforms=`ls -1 "$bin_dir/" | grep i86Suse`
x64SusePlatforms=`ls -1 "$bin_dir/" | grep x64Suse`

i86RedHawk51Platforms=`ls -1 "$bin_dir/" | grep i86RedHawk5.1`
i86RedHawk54Platforms=`ls -1 "$bin_dir/" | grep i86RedHawk5.4`

i86WRLinuxPlatforms=`ls -1 "$bin_dir/" | grep i86WRLinux`
x64WRLinuxPlatforms=`ls -1 "$bin_dir/" | grep x64WRLinux`

# Lynx Platforms
i86Lynx4Platforms=`ls -1 "$bin_dir/" | grep i86Lynx4`
ppcLynx4Platforms=`ls -1 "$bin_dir/" | grep ppc | grep Lynx4`

ppcLynx5Platforms=`ls -1 "$bin_dir/" | grep ppc | grep Lynx5`

i86LynxSEPlatforms=`ls -1 "$bin_dir/" | grep i86LynxOS_SE`

# QNX Platforms
ppcbeQNX6Platforms=`ls -1 "$bin_dir/" | grep ppcbeQNX6`
i86QNX6Platforms=`ls -1 "$bin_dir/" | grep i86QNX6`
armv7aQNX6Platforms=`ls -1 "$bin_dir/" | grep armv7aQNX6`

# AIX Platforms
p5AIXPlatforms=`ls -1 "$bin_dir/" | grep "^p5AIX"`
p564AIXPlatforms=`ls -1 "$bin_dir/" | grep "^64p5AIX"`
p7AIXPlatforms=`ls -1 "$bin_dir/" | grep "^p7AIX"`
p764AIXPlatforms=`ls -1 "$bin_dir/" | grep "^64p7AIX"`

platform_name="<arch>"
jre_platform="unknown"
jvm_lib="unknown"

os=`uname -s`
osver=`uname -r`

case $os in
    SunOS*)
	processor=`uname -p`

	case $osver in
	    5.9*)
		if test "$processor" = "i386"; then
		    platforms_to_try=$i86Sol29Platforms
		    jre_platform="i86Solaris9"
		    jvm_lib="lib/i386/client"
		fi
		if test "$processor" = "sparc"; then
    		    platforms_to_try="$sparcSol29Platforms $sparcSol28Platforms"
		    jre_platform="sparcSolaris9"
		    jvm_lib="lib/sparc/client"
		fi
		;;
	    5.10*)
		if test "$processor" = "i386"; then
		    platforms_to_try="$i86Sol210Platforms $x64Sol210Platforms"
		    jre_platform="i86Solaris"
		    jvm_lib="lib/i386/client"
		fi
		if test "$processor" = "sparc"; then
		    platforms_to_try="$sparcSol210Platforms $sparcSol29Platforms $sparcSol28Platforms $sparc64Sol210Platforms"
		    jre_platform="sparcSolaris"
		    jvm_lib="lib/sparc/client"
		fi
		;;
	esac
	;;

    AIX*)
	processor=`uname -p`
	osversion=`uname -v`
	if test "5" = "$osversion"; then
            jre_platform="aix5"
            jvm_lib="lib/ppc/j9vm"
	else
            jre_platform="aix"
            jvm_lib="lib/ppc64/j9vm"
	fi

	if test "$processor" = "powerpc"; then
	    platforms_to_try="$p5AIXPlatforms $p564AIXPlatforms $p7AIXPlatforms $p764AIXPlatforms"
	fi
	;;

    Darwin*)
	processor=`uname -p`
	jre_platform="darwin"
	jvm_lib="lib/server"
	shared_lib_extension=dylib
	executable_extension=app	
	case $osver in
	    *)
		platforms_to_try="$x64DarwinPlatforms"
		
		;;
	esac
	;;

    Linux*)
	processor=`uname -m`
	case $osver in
	    *)
		if test "$processor" = "x86_64"; then
		    platforms_to_try="$x64Linux26Platforms $x64Linux3Platforms $x64SusePlatforms $x64WRLinuxPlatforms $i86Linux26Platforms $i86Linux3Platforms $i86SusePlatforms"
		    jre_platform="x64Linux"
		    jvm_lib="lib/amd64/server"
		elif test "$processor" = "i686"; then
		    platforms_to_try="$i86Linux26Platforms $i86Linux3Platforms $i86SusePlatforms $i86RedHawk51Platforms $i86RedHawk54Platforms $i86WRLinuxPlatforms"
		    jre_platform="i86Linux"
		    jvm_lib="lib/i386/client"
		elif test "$processor" = "ppc64"; then
		    platforms_to_try="$ppc64Linux26Platforms $cell64Linux26Platforms $power7Linux26Platforms"
		    jre_platform="ppc64Linux"
		    jvm_lib="lib/ppc64/j9vm"
		elif test "$processor" = "ppc"; then
		    platforms_to_try="$ppcLinux26Platforms $ppcLinux3Platforms"
		    jre_platform="ppcLinux"
		    jvm_lib="lib/ppc/j9vm"
		elif test "$processor" = "armv6l"; then
		    platforms_to_try="$armv6LinuxPlatforms"
		    jre_platform="armvfphLinux"
		    jvm_lib="lib/arm/client"
		elif test "$processor" = "armv7l"; then
		    platforms_to_try="$armv7Linux3Platforms $armv7Linux26Platforms"
		    jre_platform="armvfphLinux"
		    jvm_lib="lib/arm/client"
		fi
		;;
	esac
	;;

    LynxOS-SE*)
	processor=`uname -m`
	case $osver in
	    3.*)
		if test "$processor" = "i386"; then
		    platforms_to_try=$i86LynxSEPlatforms
		fi
		;;
	esac
	;;

    LynxOS*)
	processor=`uname -m`
	case $osver in
	    4.*)
		if test "$processor" = "i386"; then
		    platforms_to_try=$i86Lynx4Platforms
		fi
		if test "$processor" = "PowerPC"; then
		    platforms_to_try="$ppcLynx4Platforms"
		fi
		;;
            5.*)
		if test "$processor" = "PowerPC"; then
		    platforms_to_try="$ppcLynx5Platforms"
		fi
		;;
        esac
	;;

    QNX*)
	processor=`uname -p`
	case $osver in
	    6.*)
		if [ "$processor" = "ppcbe" ]; then
		    platforms_to_try=$ppcbeQNX6Platforms
		fi
		if [ "$processor" = "x86" ]; then
		    platforms_to_try=$i86QNX6Platforms
		fi
		if [ "$processor" = "armle" ]; then
		    platforms_to_try=$armv7aQNX6Platforms
		fi
		;;
	esac
	;;

    *)
	echo "Warning: OS $os may not be supported."
	;;
esac

for platform in $platforms_to_try
do
    if [ "x$executable_name" != "x" ]
    then
	# C/C++ Applications
	if [ -x "$bin_dir/$platform/$executable_name" ] || [ -x "$bin_dir/$platform/$executable_name.$executable_extension" ]
	then
	    if [ "x$needs_shared_libraries" = "xtrue" ]
	    then
		if [ -f "$lib_dir/$platform/libnddscore.$shared_lib_extension" ]
		then
		    # Executables that need to load shared libs
		    platform_name=$platform
		    break
		fi
	    else
		# Executables that do not need to load shared libs
		platform_name=$platform
		break ;
	    fi
	fi
    else
	# Java Applications
	if [ "x$needs_shared_libraries" = "xtrue" ]
	then
	    if [ -f "$lib_dir/$platform/libnddscore.$shared_lib_extension" ]
	    then
		# Java applications that need to load shared libraries
		platform_name=$platform
		break
	    fi
	else
	    # If we get here we can choose any platform_name--the application
	    # is not likely to require it to run.
	    platform_name=$platform
	    break
	fi
    fi
done

# Check that platform_name is not empty for all the applications except
# for those platforms that do not have dependencies.
if [ "$platform_name" = "<arch>" ] && [ "x$needs_platform_name" != "xfalse" ]
then
    if [ "x$needs_shared_libraries" = "x" ] || [ "x$needs_shared_libraries" = "xfalse" ]
    then 
	echo "Warning: Could not find the executable for $executable_name."
	echo "         Please examine $bin_dir/$platform_name to find the executable for $executable_name"
	echo "         and run this executable directly. If $executable_name is not in your bin directory"
	echo "         please contact support@rti.com."	
    else
	echo "Warning: Could not find libraries for your platform"
	echo "         Please examine $lib_dir/<arch> and make sure you have the right"
	echo "         libraries and binaries installed. If they are not, please contact"
	echo "         support@rti.com."
    fi
    exit 1
fi

# Set JRE home
if [ "$jre_platform" != "unknown" ] && [ "x$JREHOME" = "x" ]
then
    JREHOME=$jre_dir/$jre_platform
    # In MacOSX we probably have JREHOME under $JREHOME/Contents/Home
    if [ -d "$JREHOME/Contents/Home" ]
    then
	JREHOME=$JREHOME/Contents/Home
    fi
    export JREHOME
    if [ "jvm_lib" != "unknown" ]
    then
	jvm_lib=$JREHOME/$jvm_lib
    fi
fi

# Set Library Path
LD_LIBRARY_PATH="$lib_dir/$platform_name/$script_version":"$app_lib_dir/$platform_name/$script_version":"$lib_dir/$platform_name":"$app_lib_dir/$platform_name":"$jvm_lib":$RTI_LD_LIBRARY_PATH:$LD_LIBRARY_PATH; export LD_LIBRARY_PATH
DYLD_LIBRARY_PATH=$LD_LIBRARY_PATH:$DYLD_LIBRARY_PATH; export DYLD_LIBRARY_PATH

# Export other environment variables
RTI_SHARED_LIB_PREFIX=lib; export RTI_SHARED_LIB_PREFIX
RTI_SHARED_LIB_SUFFIX=.$shared_lib_extension; export RTI_SHARED_LIB_SUFFIX
RTI_EXAMPLES_DIR=$home_example_dir; export RTI_EXAMPLES_DIR
RTI_WORKSPACE_DIR=$workspace_dir; export RTI_WORKSPACE_DIR
