# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_class_loader_CONFIG_INCLUDED)
  return()
endif()
set(_class_loader_CONFIG_INCLUDED TRUE)

# output package information
if(NOT class_loader_FIND_QUIETLY)
  message(STATUS "Found class_loader: 1.0.0 (${class_loader_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'class_loader' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(class_loader_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "class_loader-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${class_loader_DIR}/${_extra}")
endforeach()
