// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__LASER_SCAN__STRUCT_H_
#define SENSOR_MSGS__MSG__LASER_SCAN__STRUCT_H_

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
// ranges
// intensities
#include "rosidl_generator_c/primitives_array.h"

/// Struct of message sensor_msgs/LaserScan
typedef struct sensor_msgs__msg__LaserScan
{
  std_msgs__msg__Header header;
  float angle_min;
  float angle_max;
  float angle_increment;
  float time_increment;
  float scan_time;
  float range_min;
  float range_max;
  rosidl_generator_c__float32__Array ranges;
  rosidl_generator_c__float32__Array intensities;
} sensor_msgs__msg__LaserScan;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__LaserScan__Array
{
  sensor_msgs__msg__LaserScan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__LaserScan__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__LASER_SCAN__STRUCT_H_
