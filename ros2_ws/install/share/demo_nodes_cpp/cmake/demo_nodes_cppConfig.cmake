# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_demo_nodes_cpp_CONFIG_INCLUDED)
  return()
endif()
set(_demo_nodes_cpp_CONFIG_INCLUDED TRUE)

# output package information
if(NOT demo_nodes_cpp_FIND_QUIETLY)
  message(STATUS "Found demo_nodes_cpp: 0.0.2 (${demo_nodes_cpp_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'demo_nodes_cpp' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(demo_nodes_cpp_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${demo_nodes_cpp_DIR}/${_extra}")
endforeach()
