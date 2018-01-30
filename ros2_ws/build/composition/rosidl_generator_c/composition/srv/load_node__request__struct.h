// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef COMPOSITION__SRV__LOAD_NODE__REQUEST__STRUCT_H_
#define COMPOSITION__SRV__LOAD_NODE__REQUEST__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// package_name
// plugin_name
#include "rosidl_generator_c/string.h"

/// Struct of message composition/LoadNode_Request
typedef struct composition__srv__LoadNode_Request
{
  rosidl_generator_c__String package_name;
  rosidl_generator_c__String plugin_name;
} composition__srv__LoadNode_Request;

/// Struct for an array of messages
typedef struct composition__srv__LoadNode_Request__Array
{
  composition__srv__LoadNode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} composition__srv__LoadNode_Request__Array;

#if __cplusplus
}
#endif

#endif  // COMPOSITION__SRV__LOAD_NODE__REQUEST__STRUCT_H_
