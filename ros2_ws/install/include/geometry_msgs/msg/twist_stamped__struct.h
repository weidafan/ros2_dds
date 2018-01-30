// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__TWIST_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__TWIST_STAMPED__STRUCT_H_

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
// twist
#include "geometry_msgs/msg/twist__struct.h"

/// Struct of message geometry_msgs/TwistStamped
typedef struct geometry_msgs__msg__TwistStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Twist twist;
} geometry_msgs__msg__TwistStamped;

/// Struct for an array of messages
typedef struct geometry_msgs__msg__TwistStamped__Array
{
  geometry_msgs__msg__TwistStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__TwistStamped__Array;

#if __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__TWIST_STAMPED__STRUCT_H_
