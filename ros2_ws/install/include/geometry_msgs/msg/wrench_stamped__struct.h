// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__WRENCH_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__WRENCH_STAMPED__STRUCT_H_

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
// wrench
#include "geometry_msgs/msg/wrench__struct.h"

/// Struct of message geometry_msgs/WrenchStamped
typedef struct geometry_msgs__msg__WrenchStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Wrench wrench;
} geometry_msgs__msg__WrenchStamped;

/// Struct for an array of messages
typedef struct geometry_msgs__msg__WrenchStamped__Array
{
  geometry_msgs__msg__WrenchStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__WrenchStamped__Array;

#if __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__WRENCH_STAMPED__STRUCT_H_
