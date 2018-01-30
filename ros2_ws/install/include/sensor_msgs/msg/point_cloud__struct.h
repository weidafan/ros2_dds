// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__POINT_CLOUD__STRUCT_H_
#define SENSOR_MSGS__MSG__POINT_CLOUD__STRUCT_H_

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
// points
#include "geometry_msgs/msg/point32__struct.h"
// channels
#include "sensor_msgs/msg/channel_float32__struct.h"

/// Struct of message sensor_msgs/PointCloud
typedef struct sensor_msgs__msg__PointCloud
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point32__Array points;
  sensor_msgs__msg__ChannelFloat32__Array channels;
} sensor_msgs__msg__PointCloud;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__PointCloud__Array
{
  sensor_msgs__msg__PointCloud * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__PointCloud__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__POINT_CLOUD__STRUCT_H_
