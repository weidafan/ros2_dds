# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_dummy_map_server_CONFIG_INCLUDED)
  return()
endif()
set(_dummy_map_server_CONFIG_INCLUDED TRUE)

# output package information
if(NOT dummy_map_server_FIND_QUIETLY)
  message(STATUS "Found dummy_map_server: 0.0.2 (${dummy_map_server_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'dummy_map_server' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(dummy_map_server_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${dummy_map_server_DIR}/${_extra}")
endforeach()
