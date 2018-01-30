// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__GRID_CELLS__STRUCT_H_
#define NAV_MSGS__MSG__GRID_CELLS__STRUCT_H_

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
// cells
#include "geometry_msgs/msg/point__struct.h"

/// Struct of message nav_msgs/GridCells
typedef struct nav_msgs__msg__GridCells
{
  std_msgs__msg__Header header;
  float cell_width;
  float cell_height;
  geometry_msgs__msg__Point__Array cells;
} nav_msgs__msg__GridCells;

/// Struct for an array of messages
typedef struct nav_msgs__msg__GridCells__Array
{
  nav_msgs__msg__GridCells * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__msg__GridCells__Array;

#if __cplusplus
}
#endif

#endif  // NAV_MSGS__MSG__GRID_CELLS__STRUCT_H_
