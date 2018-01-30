// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__START_TRAJECTORY__REQUEST__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__SRV__START_TRAJECTORY__REQUEST__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// options
#include "cartographer_ros_msgs/msg/trajectory_options__struct.h"
// topics
#include "cartographer_ros_msgs/msg/sensor_topics__struct.h"

/// Struct of message cartographer_ros_msgs/StartTrajectory_Request
typedef struct cartographer_ros_msgs__srv__StartTrajectory_Request
{
  cartographer_ros_msgs__msg__TrajectoryOptions options;
  cartographer_ros_msgs__msg__SensorTopics topics;
} cartographer_ros_msgs__srv__StartTrajectory_Request;

/// Struct for an array of messages
typedef struct cartographer_ros_msgs__srv__StartTrajectory_Request__Array
{
  cartographer_ros_msgs__srv__StartTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__srv__StartTrajectory_Request__Array;

#if __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__START_TRAJECTORY__REQUEST__STRUCT_H_
