# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aust/ros2_ws/src/ros2/console_bridge

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aust/ros2_ws/build/console_bridge

# Include any dependencies generated for this target.
include test/CMakeFiles/console_TEST.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/console_TEST.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/console_TEST.dir/flags.make

test/CMakeFiles/console_TEST.dir/console_TEST.cc.o: test/CMakeFiles/console_TEST.dir/flags.make
test/CMakeFiles/console_TEST.dir/console_TEST.cc.o: /home/aust/ros2_ws/src/ros2/console_bridge/test/console_TEST.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aust/ros2_ws/build/console_bridge/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/console_TEST.dir/console_TEST.cc.o"
	cd /home/aust/ros2_ws/build/console_bridge/test && /usr/lib/ccache/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-deprecated-declarations -o CMakeFiles/console_TEST.dir/console_TEST.cc.o -c /home/aust/ros2_ws/src/ros2/console_bridge/test/console_TEST.cc

test/CMakeFiles/console_TEST.dir/console_TEST.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/console_TEST.dir/console_TEST.cc.i"
	cd /home/aust/ros2_ws/build/console_bridge/test && /usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-deprecated-declarations -E /home/aust/ros2_ws/src/ros2/console_bridge/test/console_TEST.cc > CMakeFiles/console_TEST.dir/console_TEST.cc.i

test/CMakeFiles/console_TEST.dir/console_TEST.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/console_TEST.dir/console_TEST.cc.s"
	cd /home/aust/ros2_ws/build/console_bridge/test && /usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-deprecated-declarations -S /home/aust/ros2_ws/src/ros2/console_bridge/test/console_TEST.cc -o CMakeFiles/console_TEST.dir/console_TEST.cc.s

test/CMakeFiles/console_TEST.dir/console_TEST.cc.o.requires:

.PHONY : test/CMakeFiles/console_TEST.dir/console_TEST.cc.o.requires

test/CMakeFiles/console_TEST.dir/console_TEST.cc.o.provides: test/CMakeFiles/console_TEST.dir/console_TEST.cc.o.requires
	$(MAKE) -f test/CMakeFiles/console_TEST.dir/build.make test/CMakeFiles/console_TEST.dir/console_TEST.cc.o.provides.build
.PHONY : test/CMakeFiles/console_TEST.dir/console_TEST.cc.o.provides

test/CMakeFiles/console_TEST.dir/console_TEST.cc.o.provides.build: test/CMakeFiles/console_TEST.dir/console_TEST.cc.o


# Object files for target console_TEST
console_TEST_OBJECTS = \
"CMakeFiles/console_TEST.dir/console_TEST.cc.o"

# External object files for target console_TEST
console_TEST_EXTERNAL_OBJECTS =

bin/console_TEST: test/CMakeFiles/console_TEST.dir/console_TEST.cc.o
bin/console_TEST: test/CMakeFiles/console_TEST.dir/build.make
bin/console_TEST: lib/libgtest_main.a
bin/console_TEST: lib/libgtest.a
bin/console_TEST: lib/libconsole_bridge.so.0.3
bin/console_TEST: test/CMakeFiles/console_TEST.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aust/ros2_ws/build/console_bridge/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/console_TEST"
	cd /home/aust/ros2_ws/build/console_bridge/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/console_TEST.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/console_TEST.dir/build: bin/console_TEST

.PHONY : test/CMakeFiles/console_TEST.dir/build

test/CMakeFiles/console_TEST.dir/requires: test/CMakeFiles/console_TEST.dir/console_TEST.cc.o.requires

.PHONY : test/CMakeFiles/console_TEST.dir/requires

test/CMakeFiles/console_TEST.dir/clean:
	cd /home/aust/ros2_ws/build/console_bridge/test && $(CMAKE_COMMAND) -P CMakeFiles/console_TEST.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/console_TEST.dir/clean

test/CMakeFiles/console_TEST.dir/depend:
	cd /home/aust/ros2_ws/build/console_bridge && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aust/ros2_ws/src/ros2/console_bridge /home/aust/ros2_ws/src/ros2/console_bridge/test /home/aust/ros2_ws/build/console_bridge /home/aust/ros2_ws/build/console_bridge/test /home/aust/ros2_ws/build/console_bridge/test/CMakeFiles/console_TEST.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/console_TEST.dir/depend
