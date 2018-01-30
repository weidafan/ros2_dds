#!/usr/bin/env sh

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cppcheck/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cppcheck/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cppcheck/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_flake8/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_flake8/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_flake8/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_pep257/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_pep257/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_pep257/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_copyright/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_copyright/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_copyright/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cpplint/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cpplint/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cpplint/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_lint_cmake/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_lint_cmake/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_lint_cmake/local_setup.sh"
fi

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
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_gmock/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_gmock/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_gmock/local_setup.sh"
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
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_lint_cmake/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_lint_cmake/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_lint_cmake/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_copyright/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_copyright/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_copyright/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_cppcheck/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_cppcheck/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_cppcheck/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_cpplint/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_cpplint/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_cpplint/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_flake8/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_flake8/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_flake8/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_pep257/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_pep257/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_pep257/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_uncrustify/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_uncrustify/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_uncrustify/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_lint_auto/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_lint_auto/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_lint_auto/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/gmock_vendor/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/gmock_vendor/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/gmock_vendor/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/uncrustify/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/uncrustify/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/uncrustify/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_uncrustify/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_uncrustify/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_uncrustify/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_lint_common/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_lint_common/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_lint_common/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_cmake_ros/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_cmake_ros/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_cmake_ros/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rcutils/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rcutils/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rcutils/local_setup.sh"
fi

export CMAKE_PREFIX_PATH="$AMENT_PREFIX_PATH:$CMAKE_PREFIX_PATH"
