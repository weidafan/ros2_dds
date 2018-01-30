#!/usr/bin/env sh

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_package/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_package/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_package/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_core/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_core/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_core/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_export_dependencies/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_export_dependencies/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_export_dependencies/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_libraries/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_libraries/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_libraries/local_setup.sh"
fi

export CMAKE_PREFIX_PATH="$AMENT_PREFIX_PATH:$CMAKE_PREFIX_PATH"
