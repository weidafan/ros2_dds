# prevent multiple inclusion
if(_tinyxml_vendor_CONFIG_INCLUDED)
  return()
endif()
set(_tinyxml_vendor_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tinyxml_vendor_FIND_QUIETLY)
  message(STATUS "Found tinyxml_vendor:  (${tinyxml_vendor_DIR})")
endif()

# add the local Modules directory to the modules path, so FindPoco.cmake is considered.
list(INSERT CMAKE_MODULE_PATH 0 "${tinyxml_vendor_DIR}/Modules")
