// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__TRANSFORM_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__TRANSFORM_STAMPED__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// header
#include "std_msgs/msg/header__struct.h"
// child_frame_id
#include "rosidl_generator_c/string.h"
// transform
#include "geometry_msgs/msg/transform__struct.h"

/// Struct of message geometry_msgs/TransformStamped
typedef struct geometry_msgs__msg__TransformStamped
{
  std_msgs__msg__Header header;
  rosidl_generator_c__String child_frame_id;
  geometry_msgs__msg__Transform transform;
} geometry_msgs__msg__TransformStamped;

/// Struct for an array of messages
typedef struct geometry_msgs__msg__TransformStamped__Array
{
  geometry_msgs__msg__TransformStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__TransformStamped__Array;

#if __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__TRANSFORM_STAMPED__STRUCT_H_
