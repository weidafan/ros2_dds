// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__PATH__STRUCT_H_
#define NAV_MSGS__MSG__PATH__STRUCT_H_

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
// poses
#include "geometry_msgs/msg/pose_stamped__struct.h"

/// Struct of message nav_msgs/Path
typedef struct nav_msgs__msg__Path
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__PoseStamped__Array poses;
} nav_msgs__msg__Path;

/// Struct for an array of messages
typedef struct nav_msgs__msg__Path__Array
{
  nav_msgs__msg__Path * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__msg__Path__Array;

#if __cplusplus
}
#endif

#endif  // NAV_MSGS__MSG__PATH__STRUCT_H_
