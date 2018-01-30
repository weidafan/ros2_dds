// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__IMAGE__STRUCT_H_
#define SENSOR_MSGS__MSG__IMAGE__STRUCT_H_

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
// encoding
#include "rosidl_generator_c/string.h"
// data
#include "rosidl_generator_c/primitives_array.h"

/// Struct of message sensor_msgs/Image
typedef struct sensor_msgs__msg__Image
{
  std_msgs__msg__Header header;
  uint32_t height;
  uint32_t width;
  rosidl_generator_c__String encoding;
  uint8_t is_bigendian;
  uint32_t step;
  rosidl_generator_c__uint8__Array data;
} sensor_msgs__msg__Image;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__Image__Array
{
  sensor_msgs__msg__Image * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__Image__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__IMAGE__STRUCT_H_
