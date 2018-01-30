// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__SET_MAP__REQUEST__STRUCT_H_
#define NAV_MSGS__SRV__SET_MAP__REQUEST__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// map
#include "nav_msgs/msg/occupancy_grid__struct.h"
// initial_pose
#include "geometry_msgs/msg/pose_with_covariance_stamped__struct.h"

/// Struct of message nav_msgs/SetMap_Request
typedef struct nav_msgs__srv__SetMap_Request
{
  nav_msgs__msg__OccupancyGrid map;
  geometry_msgs__msg__PoseWithCovarianceStamped initial_pose;
} nav_msgs__srv__SetMap_Request;

/// Struct for an array of messages
typedef struct nav_msgs__srv__SetMap_Request__Array
{
  nav_msgs__srv__SetMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__srv__SetMap_Request__Array;

#if __cplusplus
}
#endif

#endif  // NAV_MSGS__SRV__SET_MAP__REQUEST__STRUCT_H_
