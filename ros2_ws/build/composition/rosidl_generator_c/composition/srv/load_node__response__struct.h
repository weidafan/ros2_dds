// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef COMPOSITION__SRV__LOAD_NODE__RESPONSE__STRUCT_H_
#define COMPOSITION__SRV__LOAD_NODE__RESPONSE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message composition/LoadNode_Response
typedef struct composition__srv__LoadNode_Response
{
  bool success;
} composition__srv__LoadNode_Response;

/// Struct for an array of messages
typedef struct composition__srv__LoadNode_Response__Array
{
  composition__srv__LoadNode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} composition__srv__LoadNode_Response__Array;

#if __cplusplus
}
#endif

#endif  // COMPOSITION__SRV__LOAD_NODE__RESPONSE__STRUCT_H_
