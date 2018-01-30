// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__LASER_ECHO__STRUCT_H_
#define SENSOR_MSGS__MSG__LASER_ECHO__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// echoes
#include "rosidl_generator_c/primitives_array.h"

/// Struct of message sensor_msgs/LaserEcho
typedef struct sensor_msgs__msg__LaserEcho
{
  rosidl_generator_c__float32__Array echoes;
} sensor_msgs__msg__LaserEcho;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__LaserEcho__Array
{
  sensor_msgs__msg__LaserEcho * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__LaserEcho__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__LASER_ECHO__STRUCT_H_
