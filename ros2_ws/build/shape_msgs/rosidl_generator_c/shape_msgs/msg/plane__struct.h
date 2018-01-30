// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__PLANE__STRUCT_H_
#define SHAPE_MSGS__MSG__PLANE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message shape_msgs/Plane
typedef struct shape_msgs__msg__Plane
{
  double coef[4];
} shape_msgs__msg__Plane;

/// Struct for an array of messages
typedef struct shape_msgs__msg__Plane__Array
{
  shape_msgs__msg__Plane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shape_msgs__msg__Plane__Array;

#if __cplusplus
}
#endif

#endif  // SHAPE_MSGS__MSG__PLANE__STRUCT_H_
