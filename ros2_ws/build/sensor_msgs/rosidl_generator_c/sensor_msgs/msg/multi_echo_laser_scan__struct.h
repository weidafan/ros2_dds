// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__MULTI_ECHO_LASER_SCAN__STRUCT_H_
#define SENSOR_MSGS__MSG__MULTI_ECHO_LASER_SCAN__STRUCT_H_

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
#include "sensor_msgs/msg/laser_echo__struct.h"

/// Struct of message sensor_msgs/MultiEchoLaserScan
typedef struct sensor_msgs__msg__MultiEchoLaserScan
{
  std_msgs__msg__Header header;
  float angle_min;
  float angle_max;
  float angle_increment;
  float time_increment;
  float scan_time;
  float range_min;
  float range_max;
  sensor_msgs__msg__LaserEcho__Array ranges;
  sensor_msgs__msg__LaserEcho__Array intensities;
} sensor_msgs__msg__MultiEchoLaserScan;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__MultiEchoLaserScan__Array
{
  sensor_msgs__msg__MultiEchoLaserScan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__MultiEchoLaserScan__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__MULTI_ECHO_LASER_SCAN__STRUCT_H_
