// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__OCCUPANCY_GRID__STRUCT_H_
#define NAV_MSGS__MSG__OCCUPANCY_GRID__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// header
#include "std_msgs/msg/header__struct.h"
// info
#include "nav_msgs/msg/map_meta_data__struct.h"
// data
#include "rosidl_generator_c/primitives_array.h"

/// Struct of message nav_msgs/OccupancyGrid
typedef struct nav_msgs__msg__OccupancyGrid
{
  std_msgs__msg__Header header;
  nav_msgs__msg__MapMetaData info;
  rosidl_generator_c__int8__Array data;
} nav_msgs__msg__OccupancyGrid;

/// Struct for an array of messages
typedef struct nav_msgs__msg__OccupancyGrid__Array
{
  nav_msgs__msg__OccupancyGrid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__msg__OccupancyGrid__Array;

#if __cplusplus
}
#endif

#endif  // NAV_MSGS__MSG__OCCUPANCY_GRID__STRUCT_H_
