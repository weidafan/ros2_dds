// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_ENTRY__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_ENTRY__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// pose
#include "geometry_msgs/msg/pose__struct.h"

/// Struct of message cartographer_ros_msgs/SubmapEntry
typedef struct cartographer_ros_msgs__msg__SubmapEntry
{
  int32_t submap_version;
  geometry_msgs__msg__Pose pose;
} cartographer_ros_msgs__msg__SubmapEntry;

/// Struct for an array of messages
typedef struct cartographer_ros_msgs__msg__SubmapEntry__Array
{
  cartographer_ros_msgs__msg__SubmapEntry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__SubmapEntry__Array;

#if __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__SUBMAP_ENTRY__STRUCT_H_
