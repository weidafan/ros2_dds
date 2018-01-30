# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_rmw_fastrtps_cpp_CONFIG_INCLUDED)
  return()
endif()
set(_rmw_fastrtps_cpp_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rmw_fastrtps_cpp_FIND_QUIETLY)
  message(STATUS "Found rmw_fastrtps_cpp: 0.0.2 (${rmw_fastrtps_cpp_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rmw_fastrtps_cpp' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rmw_fastrtps_cpp_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rmw_fastrtps_cpp-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${rmw_fastrtps_cpp_DIR}/${_extra}")
endforeach()
