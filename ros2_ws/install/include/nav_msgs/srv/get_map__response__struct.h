// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__GET_MAP__RESPONSE__STRUCT_H_
#define NAV_MSGS__SRV__GET_MAP__RESPONSE__STRUCT_H_

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

/// Struct of message nav_msgs/GetMap_Response
typedef struct nav_msgs__srv__GetMap_Response
{
  nav_msgs__msg__OccupancyGrid map;
} nav_msgs__srv__GetMap_Response;

/// Struct for an array of messages
typedef struct nav_msgs__srv__GetMap_Response__Array
{
  nav_msgs__srv__GetMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__srv__GetMap_Response__Array;

#if __cplusplus
}
#endif

#endif  // NAV_MSGS__SRV__GET_MAP__RESPONSE__STRUCT_H_
