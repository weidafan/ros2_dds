// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__REGION_OF_INTEREST__STRUCT_H_
#define SENSOR_MSGS__MSG__REGION_OF_INTEREST__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message sensor_msgs/RegionOfInterest
typedef struct sensor_msgs__msg__RegionOfInterest
{
  uint32_t x_offset;
  uint32_t y_offset;
  uint32_t height;
  uint32_t width;
  bool do_rectify;
} sensor_msgs__msg__RegionOfInterest;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__RegionOfInterest__Array
{
  sensor_msgs__msg__RegionOfInterest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__RegionOfInterest__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__REGION_OF_INTEREST__STRUCT_H_
