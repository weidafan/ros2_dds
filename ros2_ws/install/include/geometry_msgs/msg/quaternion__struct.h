// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__QUATERNION__STRUCT_H_
#define GEOMETRY_MSGS__MSG__QUATERNION__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message geometry_msgs/Quaternion
typedef struct geometry_msgs__msg__Quaternion
{
  double x;
  double y;
  double z;
  double w;
} geometry_msgs__msg__Quaternion;

/// Struct for an array of messages
typedef struct geometry_msgs__msg__Quaternion__Array
{
  geometry_msgs__msg__Quaternion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Quaternion__Array;

#if __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__QUATERNION__STRUCT_H_
