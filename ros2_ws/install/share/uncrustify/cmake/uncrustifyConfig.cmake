# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_uncrustify_CONFIG_INCLUDED)
  return()
endif()
set(_uncrustify_CONFIG_INCLUDED TRUE)

# output package information
if(NOT uncrustify_FIND_QUIETLY)
  message(STATUS "Found uncrustify: 0.61.20150413 (${uncrustify_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'uncrustify' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(uncrustify_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${uncrustify_DIR}/${_extra}")
endforeach()
