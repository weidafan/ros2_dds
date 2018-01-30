# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_joy_CONFIG_INCLUDED)
  return()
endif()
set(_joy_CONFIG_INCLUDED TRUE)

# output package information
if(NOT joy_FIND_QUIETLY)
  message(STATUS "Found joy: 1.11.0 (${joy_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'joy' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(joy_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${joy_DIR}/${_extra}")
endforeach()
