# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_teleop_twist_joy_CONFIG_INCLUDED)
  return()
endif()
set(_teleop_twist_joy_CONFIG_INCLUDED TRUE)

# output package information
if(NOT teleop_twist_joy_FIND_QUIETLY)
  message(STATUS "Found teleop_twist_joy: 0.1.2 (${teleop_twist_joy_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'teleop_twist_joy' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(teleop_twist_joy_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${teleop_twist_joy_DIR}/${_extra}")
endforeach()
