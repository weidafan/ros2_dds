// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__START_TRAJECTORY__RESPONSE__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__SRV__START_TRAJECTORY__RESPONSE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message cartographer_ros_msgs/StartTrajectory_Response
typedef struct cartographer_ros_msgs__srv__StartTrajectory_Response
{
  int32_t trajectory_id;
} cartographer_ros_msgs__srv__StartTrajectory_Response;

/// Struct for an array of messages
typedef struct cartographer_ros_msgs__srv__StartTrajectory_Response__Array
{
  cartographer_ros_msgs__srv__StartTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__srv__StartTrajectory_Response__Array;

#if __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__START_TRAJECTORY__RESPONSE__STRUCT_H_
