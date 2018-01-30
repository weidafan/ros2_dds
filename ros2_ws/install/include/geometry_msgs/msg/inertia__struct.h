// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__INERTIA__STRUCT_H_
#define GEOMETRY_MSGS__MSG__INERTIA__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// com
#include "geometry_msgs/msg/vector3__struct.h"

/// Struct of message geometry_msgs/Inertia
typedef struct geometry_msgs__msg__Inertia
{
  double m;
  geometry_msgs__msg__Vector3 com;
  double ixx;
  double ixy;
  double ixz;
  double iyy;
  double iyz;
  double izz;
} geometry_msgs__msg__Inertia;

/// Struct for an array of messages
typedef struct geometry_msgs__msg__Inertia__Array
{
  geometry_msgs__msg__Inertia * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Inertia__Array;

#if __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__INERTIA__STRUCT_H_
