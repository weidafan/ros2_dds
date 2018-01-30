# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_depthimage_to_pointcloud2_CONFIG_INCLUDED)
  return()
endif()
set(_depthimage_to_pointcloud2_CONFIG_INCLUDED TRUE)

# output package information
if(NOT depthimage_to_pointcloud2_FIND_QUIETLY)
  message(STATUS "Found depthimage_to_pointcloud2: 0.0.2 (${depthimage_to_pointcloud2_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'depthimage_to_pointcloud2' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(depthimage_to_pointcloud2_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${depthimage_to_pointcloud2_DIR}/${_extra}")
endforeach()
