# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_rosidl_generator_c_CONFIG_INCLUDED)
  return()
endif()
set(_rosidl_generator_c_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rosidl_generator_c_FIND_QUIETLY)
  message(STATUS "Found rosidl_generator_c: 0.0.2 (${rosidl_generator_c_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rosidl_generator_c' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rosidl_generator_c_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_generator_c-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${rosidl_generator_c_DIR}/${_extra}")
endforeach()
