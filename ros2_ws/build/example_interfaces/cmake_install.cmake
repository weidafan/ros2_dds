# Install script for directory: /home/aust/ros2_ws/src/ros2/example_interfaces

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/example_interfaces")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/example_interfaces/libexample_interfaces__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_c.so"
         OLD_RPATH "/home/aust/ros2_ws/build/example_interfaces:/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/environment" TYPE FILE FILES "/home/aust/ros2_ws/install/lib/python3.5/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/example_interfaces/libexample_interfaces__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_cpp.so"
         OLD_RPATH "/home/aust/ros2_ws/build/example_interfaces:/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/example_interfaces/msg" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/rosidl_typesupport_introspection_c/example_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/example_interfaces/srv" TYPE FILE FILES
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_typesupport_introspection_c/example_interfaces/srv/add_two_ints__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_typesupport_introspection_c/example_interfaces/srv/add_two_ints__request__rosidl_typesupport_introspection_c.h"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_typesupport_introspection_c/example_interfaces/srv/add_two_ints__response__rosidl_typesupport_introspection_c.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/example_interfaces/libexample_interfaces__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/aust/ros2_ws/build/example_interfaces:/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/example_interfaces/msg" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_c/example_interfaces/msg/rosidl_generator_c__visibility_control.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/example_interfaces/srv" TYPE FILE FILES
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_c/example_interfaces/srv/add_two_ints.h"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_c/example_interfaces/srv/add_two_ints__request.h"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_c/example_interfaces/srv/add_two_ints__request__functions.h"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_c/example_interfaces/srv/add_two_ints__request__struct.h"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_c/example_interfaces/srv/add_two_ints__request__type_support.h"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_c/example_interfaces/srv/add_two_ints__response.h"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_c/example_interfaces/srv/add_two_ints__response__functions.h"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_c/example_interfaces/srv/add_two_ints__response__struct.h"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_c/example_interfaces/srv/add_two_ints__response__type_support.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/example_interfaces/libexample_interfaces__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_generator_c.so"
         OLD_RPATH "/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_generator_c.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/example_interfaces/srv" TYPE FILE FILES
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_typesupport_introspection_cpp/example_interfaces/srv/add_two_ints__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_typesupport_introspection_cpp/example_interfaces/srv/add_two_ints__request__rosidl_typesupport_introspection_cpp.hpp"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_typesupport_introspection_cpp/example_interfaces/srv/add_two_ints__response__rosidl_typesupport_introspection_cpp.hpp"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/example_interfaces/libexample_interfaces__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexample_interfaces__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/example_interfaces/srv" TYPE FILE FILES
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_cpp/example_interfaces/srv/add_two_ints.hpp"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_cpp/example_interfaces/srv/add_two_ints__struct.hpp"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_cpp/example_interfaces/srv/add_two_ints__traits.hpp"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_cpp/example_interfaces/srv/add_two_ints__request.hpp"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_cpp/example_interfaces/srv/add_two_ints__request__struct.hpp"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_cpp/example_interfaces/srv/add_two_ints__request__traits.hpp"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_cpp/example_interfaces/srv/add_two_ints__response.hpp"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_cpp/example_interfaces/srv/add_two_ints__response__struct.hpp"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_cpp/example_interfaces/srv/add_two_ints__response__traits.hpp"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/environment" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_py/example_interfaces/__init__.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_py/example_interfaces/__init__.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces/srv" TYPE FILE FILES
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_py/example_interfaces/srv/_add_two_ints.py"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_py/example_interfaces/srv/_add_two_ints__request.py"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_py/example_interfaces/srv/_add_two_ints__response.py"
    "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_py/example_interfaces/srv/__init__.py"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces/example_interfaces_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces/example_interfaces_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces/example_interfaces_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_py/example_interfaces/example_interfaces_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces/example_interfaces_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces/example_interfaces_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces/example_interfaces_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so"
         OLD_RPATH "/home/aust/ros2_ws/build/example_interfaces:/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces/example_interfaces_s__rosidl_typesupport_c.cpython-35m-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces/example_interfaces_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces/example_interfaces_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces/example_interfaces_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces" TYPE SHARED_LIBRARY FILES "/home/aust/ros2_ws/build/example_interfaces/rosidl_generator_py/example_interfaces/example_interfaces_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces/example_interfaces_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces/example_interfaces_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces/example_interfaces_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so"
         OLD_RPATH "/home/aust/ros2_ws/build/example_interfaces:/home/aust/ros2_ws/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.5/site-packages/example_interfaces/example_interfaces_s__rosidl_typesupport_introspection_c.cpython-35m-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/srv" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/example_interfaces/srv/AddTwoInts.srv")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/srv" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/srv/AddTwoInts_Request.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/srv" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/srv/AddTwoInts_Response.msg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/example_interfaces/mapping_rules.yaml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/example_interfaces")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/example_interfaces")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/environment" TYPE FILE FILES "/home/aust/ros2_ws/install/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/environment" TYPE FILE FILES "/home/aust/ros2_ws/install/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/ament_cmake_index/share/ament_index/resource_index/packages/example_interfaces")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES "/home/aust/ros2_ws/build/example_interfaces/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces/cmake" TYPE FILE FILES
    "/home/aust/ros2_ws/build/example_interfaces/ament_cmake_core/example_interfacesConfig.cmake"
    "/home/aust/ros2_ws/build/example_interfaces/ament_cmake_core/example_interfacesConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_interfaces" TYPE FILE FILES "/home/aust/ros2_ws/src/ros2/example_interfaces/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/aust/ros2_ws/build/example_interfaces/example_interfaces__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/aust/ros2_ws/build/example_interfaces/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
