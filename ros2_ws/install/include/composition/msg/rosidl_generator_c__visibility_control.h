// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef COMPOSITION__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define COMPOSITION__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_composition __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_composition __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_composition __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_composition __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_composition
    #define ROSIDL_GENERATOR_C_PUBLIC_composition ROSIDL_GENERATOR_C_EXPORT_composition
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_composition ROSIDL_GENERATOR_C_IMPORT_composition
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_composition __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_composition
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_composition __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_composition
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // COMPOSITION__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
