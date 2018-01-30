// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__TRAJECTORY_SUBMAP_LIST__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__TRAJECTORY_SUBMAP_LIST__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// submap
#include "cartographer_ros_msgs/msg/submap_entry__struct.h"

/// Struct of message cartographer_ros_msgs/TrajectorySubmapList
typedef struct cartographer_ros_msgs__msg__TrajectorySubmapList
{
  cartographer_ros_msgs__msg__SubmapEntry__Array submap;
} cartographer_ros_msgs__msg__TrajectorySubmapList;

/// Struct for an array of messages
typedef struct cartographer_ros_msgs__msg__TrajectorySubmapList__Array
{
  cartographer_ros_msgs__msg__TrajectorySubmapList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__TrajectorySubmapList__Array;

#if __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__TRAJECTORY_SUBMAP_LIST__STRUCT_H_
