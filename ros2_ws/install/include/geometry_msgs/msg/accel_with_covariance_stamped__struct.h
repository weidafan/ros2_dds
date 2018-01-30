// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__ACCEL_WITH_COVARIANCE_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__ACCEL_WITH_COVARIANCE_STAMPED__STRUCT_H_

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
// accel
#include "geometry_msgs/msg/accel_with_covariance__struct.h"

/// Struct of message geometry_msgs/AccelWithCovarianceStamped
typedef struct geometry_msgs__msg__AccelWithCovarianceStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__AccelWithCovariance accel;
} geometry_msgs__msg__AccelWithCovarianceStamped;

/// Struct for an array of messages
typedef struct geometry_msgs__msg__AccelWithCovarianceStamped__Array
{
  geometry_msgs__msg__AccelWithCovarianceStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__AccelWithCovarianceStamped__Array;

#if __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__ACCEL_WITH_COVARIANCE_STAMPED__STRUCT_H_
