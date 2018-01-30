# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_image_tools_CONFIG_INCLUDED)
  return()
endif()
set(_image_tools_CONFIG_INCLUDED TRUE)

# output package information
if(NOT image_tools_FIND_QUIETLY)
  message(STATUS "Found image_tools: 0.0.2 (${image_tools_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'image_tools' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(image_tools_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${image_tools_DIR}/${_extra}")
endforeach()
