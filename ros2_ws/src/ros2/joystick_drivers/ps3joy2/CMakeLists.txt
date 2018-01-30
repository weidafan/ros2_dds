# http://ros.org/doc/groovy/api/catkin/html/user_guide/supposed.html
cmake_minimum_required(VERSION 2.8.3)
cmake_policy(SET CMP0057 NEW)
project(ps3joy2)

# Add support for C++11
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 11)
endif()

#find_package(${CATKIN_DEPS} REQUIRED)
find_package(ament_cmake REQUIRED)

set(INCLUDE_DIRS ${${CATKIN_DEPS}_INCLUDE_DIRS} ${ament_cmake_INCLUDE_DIRS})
include_directories(${INCLUDE_DIRS})

set(LIBRARY_DIRS ${${CATKIN_DEPS}_LIBRARY_DIRS} ${ament_cmake_LIBRARY_DIRS})

link_directories(${LIBRARY_DIRS})

set(LIBS ${${CATKIN_DEPS}_LIBRARIES} ${ament_cmake_LIBRARIES})

find_package(PkgConfig REQUIRED)
pkg_search_module(LIBUSB REQUIRED libusb)
if(LIBUSB_FOUND)
else()
  message(FATAL_ERROR "Failed to find libusb")
endif(LIBUSB_FOUND)

# Load catkin and all dependencies required for this package
#set(CATKIN_DEPS diagnostic_msgs sensor_msgs rospy rosgraph)

add_executable(sixpair src/sixpair.c)
target_link_libraries(sixpair -lusb ${LIBS})

# Install targets
install(TARGETS sixpair
  ARCHIVE
  DESTINATION lib
  LIBRARY
  DESTINATION lib
  RUNTIME
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch DESTINATION share/${PROJECT_NAME})

install(FILES diagnostics.yaml DESTINATION share/${PROJECT_NAME})

install(PROGRAMS scripts/ps3joy.py scripts/ps3joy_node.py scripts/ps3joysim.py
  DESTINATION lib/${PROJECT_NAME})

ament_export_dependencies(${CATKIN_DEPS})
ament_export_dependencies(ament_cmake)
ament_export_include_directories(${INCLUDE_DIRS})

ament_package()
