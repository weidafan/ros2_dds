// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__MAP_META_DATA__STRUCT_H_
#define NAV_MSGS__MSG__MAP_META_DATA__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// map_load_time
#include "builtin_interfaces/msg/time__struct.h"
// origin
#include "geometry_msgs/msg/pose__struct.h"

/// Struct of message nav_msgs/MapMetaData
typedef struct nav_msgs__msg__MapMetaData
{
  builtin_interfaces__msg__Time map_load_time;
  float resolution;
  uint32_t width;
  uint32_t height;
  geometry_msgs__msg__Pose origin;
} nav_msgs__msg__MapMetaData;

/// Struct for an array of messages
typedef struct nav_msgs__msg__MapMetaData__Array
{
  nav_msgs__msg__MapMetaData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__msg__MapMetaData__Array;

#if __cplusplus
}
#endif

#endif  // NAV_MSGS__MSG__MAP_META_DATA__STRUCT_H_
