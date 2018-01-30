# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_amcl_CONFIG_INCLUDED)
  return()
endif()
set(_amcl_CONFIG_INCLUDED TRUE)

# output package information
if(NOT amcl_FIND_QUIETLY)
  message(STATUS "Found amcl: 1.14.0 (${amcl_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'amcl' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(amcl_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${amcl_DIR}/${_extra}")
endforeach()
