// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__COMPRESSED_IMAGE__STRUCT_H_
#define SENSOR_MSGS__MSG__COMPRESSED_IMAGE__STRUCT_H_

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
// format
#include "rosidl_generator_c/string.h"
// data
#include "rosidl_generator_c/primitives_array.h"

/// Struct of message sensor_msgs/CompressedImage
typedef struct sensor_msgs__msg__CompressedImage
{
  std_msgs__msg__Header header;
  rosidl_generator_c__String format;
  rosidl_generator_c__uint8__Array data;
} sensor_msgs__msg__CompressedImage;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__CompressedImage__Array
{
  sensor_msgs__msg__CompressedImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__CompressedImage__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__COMPRESSED_IMAGE__STRUCT_H_
