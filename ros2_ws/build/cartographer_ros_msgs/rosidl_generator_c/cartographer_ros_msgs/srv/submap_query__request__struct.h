// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__SUBMAP_QUERY__REQUEST__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__SRV__SUBMAP_QUERY__REQUEST__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message cartographer_ros_msgs/SubmapQuery_Request
typedef struct cartographer_ros_msgs__srv__SubmapQuery_Request
{
  int32_t trajectory_id;
  int32_t submap_index;
} cartographer_ros_msgs__srv__SubmapQuery_Request;

/// Struct for an array of messages
typedef struct cartographer_ros_msgs__srv__SubmapQuery_Request__Array
{
  cartographer_ros_msgs__srv__SubmapQuery_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__srv__SubmapQuery_Request__Array;

#if __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__SUBMAP_QUERY__REQUEST__STRUCT_H_
