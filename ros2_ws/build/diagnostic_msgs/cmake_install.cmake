# Install script for directory: /home/aust/ros2_ws/src/ros2/common_interfaces/diagnostic_msgs

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/diagnostic_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/diagnostic_msgs/libdiagnostic_msgs__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_c.so"
         OLD_RPATH "/home/aust/ros2_ws/build/diagnostic_msgs:/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/environment" TYPE FILE FILES "/home/aust/ros2_ws/install/lib/python3.5/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/diagnostic_msgs/libdiagnostic_msgs__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_cpp.so"
         OLD_RPATH "/home/aust/ros2_ws/build/diagnostic_msgs:/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/diagnostic_msgs/msg" TYPE FILE FILES
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_c/diagnostic_msgs/msg/diagnostic_array__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_c/diagnostic_msgs/msg/diagnostic_status__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_c/diagnostic_msgs/msg/key_value__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_c/diagnostic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/diagnostic_msgs/srv" TYPE FILE FILES
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_c/diagnostic_msgs/srv/add_diagnostics__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_c/diagnostic_msgs/srv/self_test__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_c/diagnostic_msgs/srv/add_diagnostics__request__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_c/diagnostic_msgs/srv/add_diagnostics__response__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_c/diagnostic_msgs/srv/self_test__request__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_c/diagnostic_msgs/srv/self_test__response__rosidl_typesupport_introspection_c.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/diagnostic_msgs/libdiagnostic_msgs__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/aust/ros2_ws/build/diagnostic_msgs:/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/diagnostic_msgs/msg" TYPE FILE FILES
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/msg/diagnostic_array.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/msg/diagnostic_array__functions.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/msg/diagnostic_array__struct.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/msg/diagnostic_array__type_support.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/msg/diagnostic_status.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/msg/diagnostic_status__functions.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/msg/diagnostic_status__struct.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/msg/diagnostic_status__type_support.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/msg/key_value.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/msg/key_value__functions.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/msg/key_value__struct.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/msg/key_value__type_support.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/msg/rosidl_generator_c__visibility_control.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/diagnostic_msgs/srv" TYPE FILE FILES
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/add_diagnostics.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/self_test.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/add_diagnostics__request.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/add_diagnostics__request__functions.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/add_diagnostics__request__struct.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/add_diagnostics__request__type_support.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/add_diagnostics__response.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/add_diagnostics__response__functions.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/add_diagnostics__response__struct.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/add_diagnostics__response__type_support.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/self_test__request.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/self_test__request__functions.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/self_test__request__struct.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/self_test__request__type_support.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/self_test__response.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/self_test__response__functions.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/self_test__response__struct.h"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_c/diagnostic_msgs/srv/self_test__response__type_support.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/diagnostic_msgs/libdiagnostic_msgs__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_generator_c.so"
         OLD_RPATH "/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_generator_c.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/diagnostic_msgs/msg" TYPE FILE FILES
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_cpp/diagnostic_msgs/msg/diagnostic_array__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_cpp/diagnostic_msgs/msg/diagnostic_status__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_cpp/diagnostic_msgs/msg/key_value__rosidl_typesupport_introspection_cpp.hpp"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/diagnostic_msgs/srv" TYPE FILE FILES
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_cpp/diagnostic_msgs/srv/add_diagnostics__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_cpp/diagnostic_msgs/srv/self_test__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_cpp/diagnostic_msgs/srv/add_diagnostics__request__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_cpp/diagnostic_msgs/srv/add_diagnostics__response__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_cpp/diagnostic_msgs/srv/self_test__request__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_typesupport_introspection_cpp/diagnostic_msgs/srv/self_test__response__rosidl_typesupport_introspection_cpp.hpp"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/diagnostic_msgs/libdiagnostic_msgs__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/diagnostic_msgs/msg" TYPE FILE FILES
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/msg/diagnostic_array.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/msg/diagnostic_array__struct.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/msg/diagnostic_array__traits.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/msg/diagnostic_status.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/msg/diagnostic_status__struct.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/msg/diagnostic_status__traits.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/msg/key_value.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/msg/key_value__struct.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/msg/key_value__traits.hpp"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/diagnostic_msgs/srv" TYPE FILE FILES
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/add_diagnostics.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/add_diagnostics__struct.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/add_diagnostics__traits.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/self_test.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/self_test__struct.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/self_test__traits.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/add_diagnostics__request.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/add_diagnostics__request__struct.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/add_diagnostics__request__traits.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/add_diagnostics__response.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/add_diagnostics__response__struct.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/add_diagnostics__response__traits.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/self_test__request.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/self_test__request__struct.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/self_test__request__traits.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/self_test__response.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/self_test__response__struct.hpp"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_cpp/diagnostic_msgs/srv/self_test__response__traits.hpp"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/environment" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_py/diagnostic_msgs/__init__.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_py/diagnostic_msgs/__init__.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/msg" TYPE FILE FILES
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_py/diagnostic_msgs/msg/_diagnostic_array.py"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_py/diagnostic_msgs/msg/_diagnostic_status.py"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_py/diagnostic_msgs/msg/_key_value.py"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_py/diagnostic_msgs/msg/__init__.py"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/srv" TYPE FILE FILES
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_py/diagnostic_msgs/srv/_add_diagnostics.py"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_py/diagnostic_msgs/srv/_self_test.py"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_py/diagnostic_msgs/srv/_add_diagnostics__request.py"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_py/diagnostic_msgs/srv/_add_diagnostics__response.py"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_py/diagnostic_msgs/srv/_self_test__request.py"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_py/diagnostic_msgs/srv/_self_test__response.py"
    "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_py/diagnostic_msgs/srv/__init__.py"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/diagnostic_msgs_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/diagnostic_msgs_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/diagnostic_msgs_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_py/diagnostic_msgs/diagnostic_msgs_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/diagnostic_msgs_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/diagnostic_msgs_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/diagnostic_msgs_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so"
         OLD_RPATH "/home/aust/ros2_ws/build/diagnostic_msgs:/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/diagnostic_msgs_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/diagnostic_msgs_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/diagnostic_msgs_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/diagnostic_msgs_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_generator_py/diagnostic_msgs/diagnostic_msgs_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/diagnostic_msgs_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/diagnostic_msgs_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/diagnostic_msgs_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so"
         OLD_RPATH "/home/aust/ros2_ws/build/diagnostic_msgs:/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/diagnostic_msgs/diagnostic_msgs_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/diagnostic_msgs/msg/DiagnosticArray.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/diagnostic_msgs/msg/DiagnosticStatus.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/msg" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/diagnostic_msgs/msg/KeyValue.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/srv" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/diagnostic_msgs/srv/AddDiagnostics.srv")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/srv" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/diagnostic_msgs/srv/SelfTest.srv")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/srv" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/srv/AddDiagnostics_Request.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/srv" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/srv/AddDiagnostics_Response.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/srv" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/srv/SelfTest_Request.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/srv" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/srv/SelfTest_Response.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/diagnostic_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/diagnostic_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/environment" TYPE FILE FILES "/home/aust/ros2_ws/install/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/environment" TYPE FILE FILES "/home/aust/ros2_ws/install/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/ament_cmake_index/share/ament_index/resource_index/packages/diagnostic_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/cmake" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/cmake" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/cmake" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/cmake" TYPE FILE FILES "/home/aust/ros2_ws/build/diagnostic_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs/cmake" TYPE FILE FILES
    "/home/aust/ros2_ws/build/diagnostic_msgs/ament_cmake_core/diagnostic_msgsConfig.cmake"
    "/home/aust/ros2_ws/build/diagnostic_msgs/ament_cmake_core/diagnostic_msgsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/diagnostic_msgs" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/common_interfaces/diagnostic_msgs/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/aust/ros2_ws/build/diagnostic_msgs/diagnostic_msgs__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/aust/ros2_ws/build/diagnostic_msgs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
