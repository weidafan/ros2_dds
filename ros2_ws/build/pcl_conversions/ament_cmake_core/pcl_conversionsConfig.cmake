# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_pcl_conversions_CONFIG_INCLUDED)
  return()
endif()
set(_pcl_conversions_CONFIG_INCLUDED TRUE)

# output package information
if(NOT pcl_conversions_FIND_QUIETLY)
  message(STATUS "Found pcl_conversions: 0.2.1 (${pcl_conversions_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'pcl_conversions' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(pcl_conversions_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${pcl_conversions_DIR}/${_extra}")
endforeach()
