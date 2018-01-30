// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__MSG__TF_MESSAGE__STRUCT_H_
#define TF2_MSGS__MSG__TF_MESSAGE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// transforms
#include "geometry_msgs/msg/transform_stamped__struct.h"

/// Struct of message tf2_msgs/TFMessage
typedef struct tf2_msgs__msg__TFMessage
{
  geometry_msgs__msg__TransformStamped__Array transforms;
} tf2_msgs__msg__TFMessage;

/// Struct for an array of messages
typedef struct tf2_msgs__msg__TFMessage__Array
{
  tf2_msgs__msg__TFMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__msg__TFMessage__Array;

#if __cplusplus
}
#endif

#endif  // TF2_MSGS__MSG__TF_MESSAGE__STRUCT_H_
