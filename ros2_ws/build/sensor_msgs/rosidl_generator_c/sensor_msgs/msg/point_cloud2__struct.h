// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__POINT_CLOUD2__STRUCT_H_
#define SENSOR_MSGS__MSG__POINT_CLOUD2__STRUCT_H_

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
// fields
#include "sensor_msgs/msg/point_field__struct.h"
// data
#include "rosidl_generator_c/primitives_array.h"

/// Struct of message sensor_msgs/PointCloud2
typedef struct sensor_msgs__msg__PointCloud2
{
  std_msgs__msg__Header header;
  uint32_t height;
  uint32_t width;
  sensor_msgs__msg__PointField__Array fields;
  bool is_bigendian;
  uint32_t point_step;
  uint32_t row_step;
  rosidl_generator_c__uint8__Array data;
  bool is_dense;
} sensor_msgs__msg__PointCloud2;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__PointCloud2__Array
{
  sensor_msgs__msg__PointCloud2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__PointCloud2__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__POINT_CLOUD2__STRUCT_H_
