set(_AMENT_PACKAGE_NAME "rosidl_generator_c")
set(rosidl_generator_c_VERSION "0.0.2")
set(rosidl_generator_c_MAINTAINER "William Woodall <william@osrfoundation.org>")
set(rosidl_generator_c_BUILD_DEPENDS "rosidl_typesupport_interface")
set(rosidl_generator_c_BUILDTOOL_DEPENDS "ament_cmake")
set(rosidl_generator_c_BUILD_EXPORT_DEPENDS "rosidl_typesupport_interface")
set(rosidl_generator_c_BUILDTOOL_EXPORT_DEPENDS "ament_cmake" "rosidl_cmake")
set(rosidl_generator_c_EXEC_DEPENDS "rosidl_parser")
set(rosidl_generator_c_TEST_DEPENDS "ament_cmake_gtest" "ament_lint_auto" "ament_lint_common" "rosidl_cmake")
set(rosidl_generator_c_DEPRECATED "")
set(rosidl_generator_c_EXPORT_TAGS)
list(APPEND rosidl_generator_c_EXPORT_TAGS "<build_type>ament_cmake</build_type>")