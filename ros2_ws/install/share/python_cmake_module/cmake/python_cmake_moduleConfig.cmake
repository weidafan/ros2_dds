# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_python_cmake_module_CONFIG_INCLUDED)
  return()
endif()
set(_python_cmake_module_CONFIG_INCLUDED TRUE)

# output package information
if(NOT python_cmake_module_FIND_QUIETLY)
  message(STATUS "Found python_cmake_module: 0.0.2 (${python_cmake_module_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'python_cmake_module' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(python_cmake_module_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "python_cmake_module-extras.cmake")
foreach(_extra ${_extras})
  include("${python_cmake_module_DIR}/${_extra}")
endforeach()
