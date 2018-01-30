// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_LIST__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_LIST__STRUCT_H_

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
// trajectory
#include "cartographer_ros_msgs/msg/trajectory_submap_list__struct.h"

/// Struct of message cartographer_ros_msgs/SubmapList
typedef struct cartographer_ros_msgs__msg__SubmapList
{
  std_msgs__msg__Header header;
  cartographer_ros_msgs__msg__TrajectorySubmapList__Array trajectory;
} cartographer_ros_msgs__msg__SubmapList;

/// Struct for an array of messages
typedef struct cartographer_ros_msgs__msg__SubmapList__Array
{
  cartographer_ros_msgs__msg__SubmapList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__SubmapList__Array;

#if __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_LIST__STRUCT_H_
