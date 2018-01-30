#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "console_bridge" for configuration "Release"
set_property(TARGET console_bridge APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(console_bridge PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libconsole_bridge.so.0.3"
  IMPORTED_SONAME_RELEASE "libconsole_bridge.so.0.3"
  )

list(APPEND _IMPORT_CHECK_TARGETS console_bridge )
list(APPEND _IMPORT_CHECK_FILES_FOR_console_bridge "${_IMPORT_PREFIX}/lib/libconsole_bridge.so.0.3" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
