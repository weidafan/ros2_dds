# generated from ament_cmake_export_dependencies/cmake/ament_cmake_export_dependencies-extras.cmake.in

set(_exported_dependencies "ament_cmake_copyright;ament_cmake_cppcheck;ament_cmake_cpplint;ament_cmake_flake8;ament_cmake_lint_cmake;ament_cmake_pep257;ament_cmake_uncrustify")

find_package(ament_cmake_libraries QUIET REQUIRED)

# find_package() all dependencies
# and append their DEFINITIONS INCLUDE_DIRS, LIBRARIES, and LINK_FLAGS
# variables to ament_lint_common_DEFINITIONS, ament_lint_common_INCLUDE_DIRS,
# ament_lint_common_LIBRARIES, and ament_lint_common_LINK_FLAGS.
# Additionally collect the direct dependency names in
# ament_lint_common_DEPENDENCIES as well as the recursive dependency names
# in ament_lint_common_RECURSIVE_DEPENDENCIES.
if(NOT _exported_dependencies STREQUAL "")
  find_package(ament_cmake_core QUIET REQUIRED)
  set(ament_lint_common_DEPENDENCIES ${_exported_dependencies})
  set(ament_lint_common_RECURSIVE_DEPENDENCIES ${_exported_dependencies})
  set(_libraries)
  foreach(_dep ${_exported_dependencies})
    if(NOT ${_dep}_FOUND)
      find_package("${_dep}" QUIET REQUIRED)
    endif()
    if(${_dep}_DEFINITIONS)
      list_append_unique(ament_lint_common_DEFINITIONS "${${_dep}_DEFINITIONS}")
    endif()
    if(${_dep}_INCLUDE_DIRS)
      list_append_unique(ament_lint_common_INCLUDE_DIRS "${${_dep}_INCLUDE_DIRS}")
    endif()
    if(${_dep}_LIBRARIES)
      list(APPEND _libraries "${${_dep}_LIBRARIES}")
    endif()
    if(${_dep}_LINK_FLAGS)
      list_append_unique(ament_lint_common_LINK_FLAGS "${${_dep}_LINK_FLAGS}")
    endif()
    if(${_dep}_RECURSIVE_DEPENDENCIES)
      list_append_unique(ament_lint_common_RECURSIVE_DEPENDENCIES "${${_dep}_RECURSIVE_DEPENDENCIES}")
    endif()
    if(_libraries)
      ament_libraries_deduplicate(_libraries "${_libraries}")
      list(APPEND ament_lint_common_LIBRARIES "${_libraries}")
    endif()
  endforeach()
endif()
