set(_AMENT_PACKAGE_NAME "rcl")
set(rcl_VERSION "0.0.2")
set(rcl_MAINTAINER "William Woodall <william@osrfoundation.org>")
set(rcl_BUILD_DEPENDS "rcl_interfaces" "rcutils" "rosidl_generator_c" "rmw_implementation")
set(rcl_BUILDTOOL_DEPENDS "ament_cmake_ros")
set(rcl_BUILD_EXPORT_DEPENDS "rmw" "rcl_interfaces" "rcutils" "rosidl_generator_c" "rmw_implementation")
set(rcl_BUILDTOOL_EXPORT_DEPENDS )
set(rcl_EXEC_DEPENDS "ament_cmake" "rcutils" "rosidl_default_runtime" "rmw_implementation")
set(rcl_TEST_DEPENDS "ament_cmake_gtest" "ament_cmake_nose" "ament_lint_auto" "ament_lint_common" "rmw" "rmw_implementation_cmake" "launch" "example_interfaces" "std_msgs")
set(rcl_DEPRECATED "")
set(rcl_EXPORT_TAGS)
list(APPEND rcl_EXPORT_TAGS "<build_type>ament_cmake</build_type>")