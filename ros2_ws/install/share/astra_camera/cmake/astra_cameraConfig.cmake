# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_astra_camera_CONFIG_INCLUDED)
  return()
endif()
set(_astra_camera_CONFIG_INCLUDED TRUE)

# output package information
if(NOT astra_camera_FIND_QUIETLY)
  message(STATUS "Found astra_camera: 0.2.0 (${astra_camera_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'astra_camera' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(astra_camera_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${astra_camera_DIR}/${_extra}")
endforeach()
