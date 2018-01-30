// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__ACCEL_WITH_COVARIANCE__STRUCT_H_
#define GEOMETRY_MSGS__MSG__ACCEL_WITH_COVARIANCE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// accel
#include "geometry_msgs/msg/accel__struct.h"

/// Struct of message geometry_msgs/AccelWithCovariance
typedef struct geometry_msgs__msg__AccelWithCovariance
{
  geometry_msgs__msg__Accel accel;
  double covariance[36];
} geometry_msgs__msg__AccelWithCovariance;

/// Struct for an array of messages
typedef struct geometry_msgs__msg__AccelWithCovariance__Array
{
  geometry_msgs__msg__AccelWithCovariance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__AccelWithCovariance__Array;

#if __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__ACCEL_WITH_COVARIANCE__STRUCT_H_
