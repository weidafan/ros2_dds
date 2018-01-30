# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_test_rclcpp_CONFIG_INCLUDED)
  return()
endif()
set(_test_rclcpp_CONFIG_INCLUDED TRUE)

# output package information
if(NOT test_rclcpp_FIND_QUIETLY)
  message(STATUS "Found test_rclcpp: 0.0.2 (${test_rclcpp_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'test_rclcpp' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(test_rclcpp_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${test_rclcpp_DIR}/${_extra}")
endforeach()
