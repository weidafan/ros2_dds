// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__CAMERA_INFO__STRUCT_H_
#define SENSOR_MSGS__MSG__CAMERA_INFO__STRUCT_H_

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
// distortion_model
#include "rosidl_generator_c/string.h"
// d
#include "rosidl_generator_c/primitives_array.h"
// roi
#include "sensor_msgs/msg/region_of_interest__struct.h"

/// Struct of message sensor_msgs/CameraInfo
typedef struct sensor_msgs__msg__CameraInfo
{
  std_msgs__msg__Header header;
  uint32_t height;
  uint32_t width;
  rosidl_generator_c__String distortion_model;
  rosidl_generator_c__float64__Array d;
  double k[9];
  double r[9];
  double p[12];
  uint32_t binning_x;
  uint32_t binning_y;
  sensor_msgs__msg__RegionOfInterest roi;
} sensor_msgs__msg__CameraInfo;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__CameraInfo__Array
{
  sensor_msgs__msg__CameraInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__CameraInfo__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__CAMERA_INFO__STRUCT_H_
