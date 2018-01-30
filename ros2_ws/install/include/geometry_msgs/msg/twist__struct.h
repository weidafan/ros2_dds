// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__TWIST__STRUCT_H_
#define GEOMETRY_MSGS__MSG__TWIST__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// linear
// angular
#include "geometry_msgs/msg/vector3__struct.h"

/// Struct of message geometry_msgs/Twist
typedef struct geometry_msgs__msg__Twist
{
  geometry_msgs__msg__Vector3 linear;
  geometry_msgs__msg__Vector3 angular;
} geometry_msgs__msg__Twist;

/// Struct for an array of messages
typedef struct geometry_msgs__msg__Twist__Array
{
  geometry_msgs__msg__Twist * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Twist__Array;

#if __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__TWIST__STRUCT_H_
