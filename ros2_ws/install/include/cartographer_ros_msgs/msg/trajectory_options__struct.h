// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__TRAJECTORY_OPTIONS__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__TRAJECTORY_OPTIONS__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// tracking_frame
// published_frame
// odom_frame
// trajectory_builder_options_proto
#include "rosidl_generator_c/string.h"

/// Struct of message cartographer_ros_msgs/TrajectoryOptions
typedef struct cartographer_ros_msgs__msg__TrajectoryOptions
{
  rosidl_generator_c__String tracking_frame;
  rosidl_generator_c__String published_frame;
  rosidl_generator_c__String odom_frame;
  bool provide_odom_frame;
  bool use_odometry;
  bool use_laser_scan;
  bool use_multi_echo_laser_scan;
  int32_t num_point_clouds;
  rosidl_generator_c__String trajectory_builder_options_proto;
} cartographer_ros_msgs__msg__TrajectoryOptions;

/// Struct for an array of messages
typedef struct cartographer_ros_msgs__msg__TrajectoryOptions__Array
{
  cartographer_ros_msgs__msg__TrajectoryOptions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__TrajectoryOptions__Array;

#if __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__TRAJECTORY_OPTIONS__STRUCT_H_
