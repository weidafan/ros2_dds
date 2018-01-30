# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_rmw_implementation_CONFIG_INCLUDED)
  return()
endif()
set(_rmw_implementation_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rmw_implementation_FIND_QUIETLY)
  message(STATUS "Found rmw_implementation: 0.0.2 (${rmw_implementation_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rmw_implementation' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rmw_implementation_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rmw_implementation-extras.cmake")
foreach(_extra ${_extras})
  include("${rmw_implementation_DIR}/${_extra}")
endforeach()
