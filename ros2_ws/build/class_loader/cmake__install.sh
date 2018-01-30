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
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_export_definitions/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_export_definitions/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_export_definitions/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_export_dependencies/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_export_dependencies/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_export_dependencies/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_export_include_directories/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_export_include_directories/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_export_include_directories/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_export_interfaces/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_export_interfaces/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_export_interfaces/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_export_libraries/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_export_libraries/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_export_libraries/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_export_link_flags/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_export_link_flags/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_export_link_flags/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_gtest/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_gtest/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_gtest/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_include_directories/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_include_directories/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_include_directories/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_libraries/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_libraries/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_libraries/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_python/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_python/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_python/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_target_dependencies/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_target_dependencies/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_target_dependencies/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_test/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_test/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_test/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/console_bridge/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/console_bridge/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/console_bridge/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/gtest_vendor/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/gtest_vendor/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/gtest_vendor/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/poco_vendor/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/poco_vendor/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/poco_vendor/local_setup.sh"
fi

export CMAKE_PREFIX_PATH="$AMENT_PREFIX_PATH:$CMAKE_PREFIX_PATH"
