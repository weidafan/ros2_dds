// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__GET_PLAN__REQUEST__STRUCT_H_
#define NAV_MSGS__SRV__GET_PLAN__REQUEST__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// start
// goal
#include "geometry_msgs/msg/pose_stamped__struct.h"

/// Struct of message nav_msgs/GetPlan_Request
typedef struct nav_msgs__srv__GetPlan_Request
{
  geometry_msgs__msg__PoseStamped start;
  geometry_msgs__msg__PoseStamped goal;
  float tolerance;
} nav_msgs__srv__GetPlan_Request;

/// Struct for an array of messages
typedef struct nav_msgs__srv__GetPlan_Request__Array
{
  nav_msgs__srv__GetPlan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__srv__GetPlan_Request__Array;

#if __cplusplus
}
#endif

#endif  // NAV_MSGS__SRV__GET_PLAN__REQUEST__STRUCT_H_
