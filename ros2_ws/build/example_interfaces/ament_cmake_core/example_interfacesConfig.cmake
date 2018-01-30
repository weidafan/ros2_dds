# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_example_interfaces_CONFIG_INCLUDED)
  return()
endif()
set(_example_interfaces_CONFIG_INCLUDED TRUE)

# output package information
if(NOT example_interfaces_FIND_QUIETLY)
  message(STATUS "Found example_interfaces: 0.0.2 (${example_interfaces_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'example_interfaces' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(example_interfaces_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${example_interfaces_DIR}/${_extra}")
endforeach()
