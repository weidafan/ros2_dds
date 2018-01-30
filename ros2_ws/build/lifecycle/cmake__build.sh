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
  echo ". \"/home/aust/ros2_ws/install/share/ament_index_python/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_index_python/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_index_python/local_setup.sh"
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
  echo ". \"/home/aust/ros2_ws/install/share/fastcdr/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/fastcdr/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/fastcdr/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/fastrtps/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/fastrtps/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/fastrtps/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/poco_vendor/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/poco_vendor/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/poco_vendor/local_setup.sh"
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
  echo ". \"/home/aust/ros2_ws/install/share/connext_cmake_module/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/connext_cmake_module/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/connext_cmake_module/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/fastrtps_cmake_module/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/fastrtps_cmake_module/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/fastrtps_cmake_module/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/opensplice_cmake_module/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/opensplice_cmake_module/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/opensplice_cmake_module/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/python_cmake_module/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/python_cmake_module/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/python_cmake_module/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rcutils/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rcutils/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rcutils/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rmw/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rmw/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rmw/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rmw_implementation_cmake/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rmw_implementation_cmake/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rmw_implementation_cmake/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rosidl_default_runtime/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rosidl_default_runtime/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rosidl_default_runtime/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rosidl_generator_dds_idl/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rosidl_generator_dds_idl/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rosidl_generator_dds_idl/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rosidl_parser/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rosidl_parser/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rosidl_parser/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rosidl_cmake/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rosidl_cmake/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rosidl_cmake/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rosidl_typesupport_interface/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rosidl_typesupport_interface/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rosidl_typesupport_interface/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rosidl_generator_c/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rosidl_generator_c/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rosidl_generator_c/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rmw_connext_shared_cpp/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rmw_connext_shared_cpp/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rmw_connext_shared_cpp/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rosidl_generator_cpp/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rosidl_generator_cpp/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rosidl_generator_cpp/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rosidl_typesupport_c/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rosidl_typesupport_c/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rosidl_typesupport_c/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rosidl_typesupport_connext_cpp/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rosidl_typesupport_connext_cpp/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rosidl_typesupport_connext_cpp/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rosidl_typesupport_connext_c/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rosidl_typesupport_connext_c/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rosidl_typesupport_connext_c/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rmw_connext_cpp/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rmw_connext_cpp/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rmw_connext_cpp/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rosidl_typesupport_cpp/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rosidl_typesupport_cpp/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rosidl_typesupport_cpp/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rosidl_typesupport_introspection_c/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rosidl_typesupport_introspection_c/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rosidl_typesupport_introspection_c/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rosidl_typesupport_introspection_cpp/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rosidl_typesupport_introspection_cpp/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rosidl_typesupport_introspection_cpp/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rmw_fastrtps_cpp/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rmw_fastrtps_cpp/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rmw_fastrtps_cpp/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rosidl_typesupport_opensplice_cpp/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rosidl_typesupport_opensplice_cpp/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rosidl_typesupport_opensplice_cpp/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rosidl_typesupport_opensplice_c/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rosidl_typesupport_opensplice_c/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rosidl_typesupport_opensplice_c/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rmw_opensplice_cpp/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rmw_opensplice_cpp/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rmw_opensplice_cpp/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rmw_implementation/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rmw_implementation/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rmw_implementation/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rosidl_generator_py/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rosidl_generator_py/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rosidl_generator_py/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/builtin_interfaces/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/builtin_interfaces/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/builtin_interfaces/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/lifecycle_msgs/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/lifecycle_msgs/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/lifecycle_msgs/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rcl_interfaces/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rcl_interfaces/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rcl_interfaces/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/std_msgs/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/std_msgs/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/std_msgs/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rcl/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rcl/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rcl/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rcl_lifecycle/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rcl_lifecycle/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rcl_lifecycle/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rclcpp/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rclcpp/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rclcpp/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rclpy/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rclpy/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rclpy/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/rclcpp_lifecycle/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/rclcpp_lifecycle/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/rclcpp_lifecycle/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ros2cli/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ros2cli/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ros2cli/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ros2pkg/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ros2pkg/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ros2pkg/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ros2run/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ros2run/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ros2run/local_setup.sh"
fi

export CMAKE_PREFIX_PATH="$AMENT_PREFIX_PATH:$CMAKE_PREFIX_PATH"
