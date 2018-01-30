# generated from
# rosidl_default_generators/rosidl_default_generators-extras.cmake.in

set(_exported_dependencies
  "rosidl_typesupport_c"
  "rosidl_typesupport_cpp"
  "rosidl_typesupport_introspection_c"
  "rosidl_typesupport_introspection_cpp"
  "rosidl_typesupport_connext_c"
  "rosidl_typesupport_connext_cpp"
  "rosidl_typesupport_opensplice_c"
  "rosidl_typesupport_opensplice_cpp"
)

# find_package() all dependencies (if available)
# and append their DEFINITIONS INCLUDE_DIRS and LIBRARIES variables
# to rosidl_default_generators_DEFINITIONS , rosidl_default_generators_INCLUDE_DIRS and
# rosidl_default_generators_LIBRARIES.
foreach(_dep ${_exported_dependencies})
  find_package("${_dep}" QUIET)
  if(${_dep}_FOUND)
    if(${_dep}_DEFINITIONS)
      list(APPEND rosidl_default_generators_DEFINITIONS "${${_dep}_DEFINITIONS}")
    endif()
    if(${_dep}_INCLUDE_DIRS)
      list(APPEND rosidl_default_generators_INCLUDE_DIRS "${${_dep}_INCLUDE_DIRS}")
    endif()
    if(${_dep}_LIBRARIES)
      list(APPEND rosidl_default_generators_LIBRARIES "${${_dep}_LIBRARIES}")
    endif()
  endif()
endforeach()
