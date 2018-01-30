# Install script for directory: /home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/aust/ros2_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/aust/ros2_ws/build/std_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/std_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/std_msgs/msg" TYPE FILE FILES
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/bool.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/bool__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/bool__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/byte.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/byte__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/byte__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/byte_multi_array.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/byte_multi_array__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/byte_multi_array__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/char.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/char__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/char__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/color_rgba.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/color_rgba__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/color_rgba__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/empty.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/empty__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/empty__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/float32.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/float32__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/float32__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/float32_multi_array.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/float32_multi_array__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/float32_multi_array__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/float64.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/float64__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/float64__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/float64_multi_array.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/float64_multi_array__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/float64_multi_array__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/header.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/header__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/header__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int16.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int16__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int16__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int16_multi_array.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int16_multi_array__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int16_multi_array__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int32.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int32__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int32__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int32_multi_array.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int32_multi_array__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int32_multi_array__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int64.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int64__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int64__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int64_multi_array.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int64_multi_array__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int64_multi_array__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int8.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int8__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int8__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int8_multi_array.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int8_multi_array__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/int8_multi_array__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/multi_array_dimension.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/multi_array_dimension__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/multi_array_dimension__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/multi_array_layout.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/multi_array_layout__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/multi_array_layout__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/string.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/string__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/string__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int16.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int16__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int16__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int16_multi_array.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int16_multi_array__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int16_multi_array__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int32.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int32__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int32__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int32_multi_array.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int32_multi_array__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int32_multi_array__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int64.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int64__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int64__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int64_multi_array.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int64_multi_array__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int64_multi_array__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int8.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int8__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int8__traits.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int8_multi_array.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int8_multi_array__struct.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_cpp/std_msgs/msg/u_int8_multi_array__traits.hpp"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/std_msgs/libstd_msgs__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_c.so"
         OLD_RPATH "/home/aust/ros2_ws/build/std_msgs:/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/environment" TYPE FILE FILES "/home/aust/ros2_ws/install/lib/python3.5/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/std_msgs/libstd_msgs__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_cpp.so"
         OLD_RPATH "/home/aust/ros2_ws/build/std_msgs:/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/std_msgs/msg" TYPE FILE FILES
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/bool__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/byte__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/byte_multi_array__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/char__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/color_rgba__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/empty__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/float32__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/float32_multi_array__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/float64__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/float64_multi_array__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/int16__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/int16_multi_array__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/int32__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/int32_multi_array__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/int64__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/int64_multi_array__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/int8__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/int8_multi_array__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/multi_array_dimension__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/multi_array_layout__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/string__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/u_int16__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/u_int16_multi_array__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/u_int32__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/u_int32_multi_array__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/u_int64__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/u_int64_multi_array__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/u_int8__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/u_int8_multi_array__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_c/std_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/std_msgs/libstd_msgs__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/aust/ros2_ws/build/std_msgs:/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/std_msgs/msg" TYPE FILE FILES
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/bool.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/bool__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/bool__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/bool__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/byte.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/byte__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/byte__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/byte__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/byte_multi_array.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/byte_multi_array__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/byte_multi_array__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/byte_multi_array__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/char.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/char__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/char__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/char__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/color_rgba.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/color_rgba__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/color_rgba__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/color_rgba__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/empty.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/empty__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/empty__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/empty__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/float32.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/float32__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/float32__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/float32__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/float32_multi_array.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/float32_multi_array__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/float32_multi_array__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/float32_multi_array__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/float64.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/float64__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/float64__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/float64__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/float64_multi_array.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/float64_multi_array__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/float64_multi_array__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/float64_multi_array__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/header.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/header__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/header__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/header__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int16.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int16__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int16__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int16__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int16_multi_array.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int16_multi_array__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int16_multi_array__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int16_multi_array__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int32.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int32__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int32__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int32__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int32_multi_array.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int32_multi_array__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int32_multi_array__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int32_multi_array__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int64.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int64__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int64__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int64__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int64_multi_array.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int64_multi_array__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int64_multi_array__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int64_multi_array__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int8.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int8__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int8__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int8__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int8_multi_array.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int8_multi_array__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int8_multi_array__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/int8_multi_array__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/multi_array_dimension.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/multi_array_dimension__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/multi_array_dimension__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/multi_array_dimension__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/multi_array_layout.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/multi_array_layout__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/multi_array_layout__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/multi_array_layout__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/string.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/string__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/string__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/string__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int16.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int16__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int16__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int16__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int16_multi_array.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int16_multi_array__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int16_multi_array__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int16_multi_array__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int32.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int32__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int32__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int32__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int32_multi_array.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int32_multi_array__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int32_multi_array__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int32_multi_array__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int64.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int64__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int64__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int64__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int64_multi_array.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int64_multi_array__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int64_multi_array__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int64_multi_array__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int8.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int8__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int8__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int8__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int8_multi_array.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int8_multi_array__functions.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int8_multi_array__struct.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/u_int8_multi_array__type_support.h"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_c/std_msgs/msg/rosidl_generator_c__visibility_control.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/std_msgs/libstd_msgs__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_generator_c.so"
         OLD_RPATH "/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_generator_c.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/std_msgs/msg" TYPE FILE FILES
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/bool__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/byte__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/byte_multi_array__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/char__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/color_rgba__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/empty__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/float32__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/float32_multi_array__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/float64__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/float64_multi_array__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/header__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/int16__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/int16_multi_array__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/int32__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/int32_multi_array__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/int64__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/int64_multi_array__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/int8__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/int8_multi_array__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/multi_array_dimension__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/multi_array_layout__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/string__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/u_int16__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/u_int16_multi_array__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/u_int32__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/u_int32_multi_array__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/u_int64__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/u_int64_multi_array__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/u_int8__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_typesupport_introspection_cpp/std_msgs/msg/u_int8_multi_array__rosidl_typesupport_introspection_cpp.hpp"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/std_msgs/libstd_msgs__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/environment" TYPE FILE FILES "/home/aust/ros2_ws/build/std_msgs/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs" TYPE FILE FILES "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/__init__.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/__init__.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs/msg" TYPE FILE FILES
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_bool.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_byte.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_byte_multi_array.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_char.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_color_rgba.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_empty.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_float32.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_float32_multi_array.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_float64.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_float64_multi_array.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_header.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_int16.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_int16_multi_array.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_int32.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_int32_multi_array.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_int64.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_int64_multi_array.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_int8.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_int8_multi_array.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_multi_array_dimension.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_multi_array_layout.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_string.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_u_int16.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_u_int16_multi_array.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_u_int32.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_u_int32_multi_array.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_u_int64.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_u_int64_multi_array.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_u_int8.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/_u_int8_multi_array.py"
    "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/msg/__init__.py"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs/std_msgs_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs/std_msgs_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs/std_msgs_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/std_msgs_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs/std_msgs_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs/std_msgs_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs/std_msgs_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so"
         OLD_RPATH "/home/aust/ros2_ws/build/std_msgs:/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs/std_msgs_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs/std_msgs_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs/std_msgs_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs/std_msgs_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/std_msgs/rosidl_generator_py/std_msgs/std_msgs_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs/std_msgs_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs/std_msgs_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs/std_msgs_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so"
         OLD_RPATH "/home/aust/ros2_ws/build/std_msgs:/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/std_msgs/std_msgs_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Bool.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Byte.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/ByteMultiArray.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Char.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/ColorRGBA.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Empty.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Float32.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Float32MultiArray.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Float64.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Float64MultiArray.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Header.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Int16.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Int16MultiArray.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Int32.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Int32MultiArray.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Int64.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Int64MultiArray.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Int8.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/Int8MultiArray.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/MultiArrayDimension.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/MultiArrayLayout.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/String.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/UInt16.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/UInt16MultiArray.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/UInt32.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/UInt32MultiArray.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/UInt64.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/UInt64MultiArray.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/UInt8.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/msg/UInt8MultiArray.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/aust/ros2_ws/build/std_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/std_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/aust/ros2_ws/build/std_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/std_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/environment" TYPE FILE FILES "/home/aust/ros2_ws/install/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/environment" TYPE FILE FILES "/home/aust/ros2_ws/install/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs" TYPE FILE FILES "/home/aust/ros2_ws/build/std_msgs/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs" TYPE FILE FILES "/home/aust/ros2_ws/build/std_msgs/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs" TYPE FILE FILES "/home/aust/ros2_ws/build/std_msgs/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/aust/ros2_ws/build/std_msgs/ament_cmake_index/share/ament_index/resource_index/packages/std_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/cmake" TYPE FILE FILES "/home/aust/ros2_ws/build/std_msgs/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/cmake" TYPE FILE FILES "/home/aust/ros2_ws/build/std_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/cmake" TYPE FILE FILES "/home/aust/ros2_ws/build/std_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/cmake" TYPE FILE FILES "/home/aust/ros2_ws/build/std_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs/cmake" TYPE FILE FILES
    "/home/aust/ros2_ws/build/std_msgs/ament_cmake_core/std_msgsConfig.cmake"
    "/home/aust/ros2_ws/build/std_msgs/ament_cmake_core/std_msgsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/std_msgs" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/std_msgs/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/aust/ros2_ws/build/std_msgs/std_msgs__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/aust/ros2_ws/build/std_msgs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
