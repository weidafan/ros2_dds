# prevent multiple inclusion
if(_poco_vendor_CONFIG_INCLUDED)
  return()
endif()
set(_poco_vendor_CONFIG_INCLUDED TRUE)

# output package information
if(NOT poco_vendor_FIND_QUIETLY)
  message(STATUS "Found poco_vendor: 1.0.0 (${poco_vendor_DIR})")
endif()

# add the local Modules directory to the modules path, so FindPoco.cmake is considered.
list(INSERT CMAKE_MODULE_PATH 0 "${poco_vendor_DIR}/Modules")
