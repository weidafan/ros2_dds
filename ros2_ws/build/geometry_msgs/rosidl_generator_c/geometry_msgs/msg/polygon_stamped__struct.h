// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__POLYGON_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__POLYGON_STAMPED__STRUCT_H_

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
// polygon
#include "geometry_msgs/msg/polygon__struct.h"

/// Struct of message geometry_msgs/PolygonStamped
typedef struct geometry_msgs__msg__PolygonStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Polygon polygon;
} geometry_msgs__msg__PolygonStamped;

/// Struct for an array of messages
typedef struct geometry_msgs__msg__PolygonStamped__Array
{
  geometry_msgs__msg__PolygonStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__PolygonStamped__Array;

#if __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__POLYGON_STAMPED__STRUCT_H_
