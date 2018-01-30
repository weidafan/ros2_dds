// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__KEY_VALUE__STRUCT_H_
#define DIAGNOSTIC_MSGS__MSG__KEY_VALUE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// key
// value
#include "rosidl_generator_c/string.h"

/// Struct of message diagnostic_msgs/KeyValue
typedef struct diagnostic_msgs__msg__KeyValue
{
  rosidl_generator_c__String key;
  rosidl_generator_c__String value;
} diagnostic_msgs__msg__KeyValue;

/// Struct for an array of messages
typedef struct diagnostic_msgs__msg__KeyValue__Array
{
  diagnostic_msgs__msg__KeyValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diagnostic_msgs__msg__KeyValue__Array;

#if __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__MSG__KEY_VALUE__STRUCT_H_
