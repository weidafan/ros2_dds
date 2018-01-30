// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__SUBMAP_QUERY__RESPONSE__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__SRV__SUBMAP_QUERY__RESPONSE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// cells
#include "rosidl_generator_c/primitives_array.h"
// slice_pose
#include "geometry_msgs/msg/pose__struct.h"
// error_message
#include "rosidl_generator_c/string.h"

/// Struct of message cartographer_ros_msgs/SubmapQuery_Response
typedef struct cartographer_ros_msgs__srv__SubmapQuery_Response
{
  int32_t submap_version;
  rosidl_generator_c__uint8__Array cells;
  int32_t width;
  int32_t height;
  double resolution;
  geometry_msgs__msg__Pose slice_pose;
  rosidl_generator_c__String error_message;
} cartographer_ros_msgs__srv__SubmapQuery_Response;

/// Struct for an array of messages
typedef struct cartographer_ros_msgs__srv__SubmapQuery_Response__Array
{
  cartographer_ros_msgs__srv__SubmapQuery_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__srv__SubmapQuery_Response__Array;

#if __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__SUBMAP_QUERY__RESPONSE__STRUCT_H_
