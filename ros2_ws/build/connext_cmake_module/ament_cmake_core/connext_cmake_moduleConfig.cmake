# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_connext_cmake_module_CONFIG_INCLUDED)
  return()
endif()
set(_connext_cmake_module_CONFIG_INCLUDED TRUE)

# output package information
if(NOT connext_cmake_module_FIND_QUIETLY)
  message(STATUS "Found connext_cmake_module: 0.0.2 (${connext_cmake_module_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'connext_cmake_module' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(connext_cmake_module_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "connext_cmake_module-extras.cmake")
foreach(_extra ${_extras})
  include("${connext_cmake_module_DIR}/${_extra}")
endforeach()
