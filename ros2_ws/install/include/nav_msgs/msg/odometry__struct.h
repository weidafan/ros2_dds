// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__ODOMETRY__STRUCT_H_
#define NAV_MSGS__MSG__ODOMETRY__STRUCT_H_

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
// child_frame_id
#include "rosidl_generator_c/string.h"
// pose
#include "geometry_msgs/msg/pose_with_covariance__struct.h"
// twist
#include "geometry_msgs/msg/twist_with_covariance__struct.h"

/// Struct of message nav_msgs/Odometry
typedef struct nav_msgs__msg__Odometry
{
  std_msgs__msg__Header header;
  rosidl_generator_c__String child_frame_id;
  geometry_msgs__msg__PoseWithCovariance pose;
  geometry_msgs__msg__TwistWithCovariance twist;
} nav_msgs__msg__Odometry;

/// Struct for an array of messages
typedef struct nav_msgs__msg__Odometry__Array
{
  nav_msgs__msg__Odometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__msg__Odometry__Array;

#if __cplusplus
}
#endif

#endif  // NAV_MSGS__MSG__ODOMETRY__STRUCT_H_
