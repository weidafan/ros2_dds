// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__TIME_REFERENCE__STRUCT_H_
#define SENSOR_MSGS__MSG__TIME_REFERENCE__STRUCT_H_

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
// time_ref
#include "builtin_interfaces/msg/time__struct.h"
// source
#include "rosidl_generator_c/string.h"

/// Struct of message sensor_msgs/TimeReference
typedef struct sensor_msgs__msg__TimeReference
{
  std_msgs__msg__Header header;
  builtin_interfaces__msg__Time time_ref;
  rosidl_generator_c__String source;
} sensor_msgs__msg__TimeReference;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__TimeReference__Array
{
  sensor_msgs__msg__TimeReference * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__TimeReference__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__TIME_REFERENCE__STRUCT_H_
