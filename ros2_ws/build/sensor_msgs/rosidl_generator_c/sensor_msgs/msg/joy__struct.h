// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__JOY__STRUCT_H_
#define SENSOR_MSGS__MSG__JOY__STRUCT_H_

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
// axes
// buttons
#include "rosidl_generator_c/primitives_array.h"

/// Struct of message sensor_msgs/Joy
typedef struct sensor_msgs__msg__Joy
{
  std_msgs__msg__Header header;
  rosidl_generator_c__float32__Array axes;
  rosidl_generator_c__int32__Array buttons;
} sensor_msgs__msg__Joy;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__Joy__Array
{
  sensor_msgs__msg__Joy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__Joy__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__JOY__STRUCT_H_
