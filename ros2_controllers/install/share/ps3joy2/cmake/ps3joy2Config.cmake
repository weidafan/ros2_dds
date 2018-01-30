# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_ps3joy2_CONFIG_INCLUDED)
  return()
endif()
set(_ps3joy2_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ps3joy2_FIND_QUIETLY)
  message(STATUS "Found ps3joy2: 1.11.0 (${ps3joy2_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ps3joy2' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ps3joy2_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${ps3joy2_DIR}/${_extra}")
endforeach()
