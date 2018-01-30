set(_AMENT_PACKAGE_NAME "map_server")
set(map_server_VERSION "1.14.0")
set(map_server_MAINTAINER "David V. Lu!! <davidvlu@gmail.com>, Michael Ferguson <mferguson@fetchrobotics.com>")
set(map_server_BUILD_DEPENDS "geometry_msgs" "nav_msgs" "rclcpp" "sdl" "sdl-image" "tf2" "yaml-cpp")
set(map_server_BUILDTOOL_DEPENDS "ament_cmake")
set(map_server_BUILD_EXPORT_DEPENDS "nav_msgs")
set(map_server_BUILDTOOL_EXPORT_DEPENDS )
set(map_server_EXEC_DEPENDS "rclcpp" "sdl" "sdl-image" "tf2" "yaml-cpp")
set(map_server_TEST_DEPENDS "ament_cmake_gtest" "ament_cmake_nose" "launch_testing" "rclpy")
set(map_server_DEPRECATED "")
set(map_server_EXPORT_TAGS)
list(APPEND map_server_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
