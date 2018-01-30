// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__POLYGON__STRUCT_H_
#define GEOMETRY_MSGS__MSG__POLYGON__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// points
#include "geometry_msgs/msg/point32__struct.h"

/// Struct of message geometry_msgs/Polygon
typedef struct geometry_msgs__msg__Polygon
{
  geometry_msgs__msg__Point32__Array points;
} geometry_msgs__msg__Polygon;

/// Struct for an array of messages
typedef struct geometry_msgs__msg__Polygon__Array
{
  geometry_msgs__msg__Polygon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Polygon__Array;

#if __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__POLYGON__STRUCT_H_
