# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_dummy_sensors_CONFIG_INCLUDED)
  return()
endif()
set(_dummy_sensors_CONFIG_INCLUDED TRUE)

# output package information
if(NOT dummy_sensors_FIND_QUIETLY)
  message(STATUS "Found dummy_sensors: 0.0.2 (${dummy_sensors_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'dummy_sensors' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(dummy_sensors_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${dummy_sensors_DIR}/${_extra}")
endforeach()
