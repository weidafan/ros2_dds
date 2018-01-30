// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__RANGE__STRUCT_H_
#define SENSOR_MSGS__MSG__RANGE__STRUCT_H_

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

// constants defined in the message
// ULTRASOUND
enum
{
  sensor_msgs__msg__Range__ULTRASOUND = 0u
};
// INFRARED
enum
{
  sensor_msgs__msg__Range__INFRARED = 1u
};

/// Struct of message sensor_msgs/Range
typedef struct sensor_msgs__msg__Range
{
  std_msgs__msg__Header header;
  uint8_t radiation_type;
  float field_of_view;
  float min_range;
  float max_range;
  float range;
} sensor_msgs__msg__Range;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__Range__Array
{
  sensor_msgs__msg__Range * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__Range__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__RANGE__STRUCT_H_
