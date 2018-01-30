# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_tf2_eigen_CONFIG_INCLUDED)
  return()
endif()
set(_tf2_eigen_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tf2_eigen_FIND_QUIETLY)
  message(STATUS "Found tf2_eigen: 0.5.15 (${tf2_eigen_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tf2_eigen' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tf2_eigen_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${tf2_eigen_DIR}/${_extra}")
endforeach()
