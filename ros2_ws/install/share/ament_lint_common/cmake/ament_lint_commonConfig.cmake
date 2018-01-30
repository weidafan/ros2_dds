# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_ament_lint_common_CONFIG_INCLUDED)
  return()
endif()
set(_ament_lint_common_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ament_lint_common_FIND_QUIETLY)
  message(STATUS "Found ament_lint_common: 0.0.2 (${ament_lint_common_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ament_lint_common' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ament_lint_common_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${ament_lint_common_DIR}/${_extra}")
endforeach()
