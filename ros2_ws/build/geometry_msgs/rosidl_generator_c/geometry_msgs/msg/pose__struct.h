// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__POSE__STRUCT_H_
#define GEOMETRY_MSGS__MSG__POSE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// position
#include "geometry_msgs/msg/point__struct.h"
// orientation
#include "geometry_msgs/msg/quaternion__struct.h"

/// Struct of message geometry_msgs/Pose
typedef struct geometry_msgs__msg__Pose
{
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Quaternion orientation;
} geometry_msgs__msg__Pose;

/// Struct for an array of messages
typedef struct geometry_msgs__msg__Pose__Array
{
  geometry_msgs__msg__Pose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Pose__Array;

#if __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__POSE__STRUCT_H_
