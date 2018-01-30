// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef STEREO_MSGS__MSG__DISPARITY_IMAGE__STRUCT_H_
#define STEREO_MSGS__MSG__DISPARITY_IMAGE__STRUCT_H_

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
// image
#include "sensor_msgs/msg/image__struct.h"
// valid_window
#include "sensor_msgs/msg/region_of_interest__struct.h"

/// Struct of message stereo_msgs/DisparityImage
typedef struct stereo_msgs__msg__DisparityImage
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__Image image;
  float f;
  float t;
  sensor_msgs__msg__RegionOfInterest valid_window;
  float min_disparity;
  float max_disparity;
  float delta_d;
} stereo_msgs__msg__DisparityImage;

/// Struct for an array of messages
typedef struct stereo_msgs__msg__DisparityImage__Array
{
  stereo_msgs__msg__DisparityImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stereo_msgs__msg__DisparityImage__Array;

#if __cplusplus
}
#endif

#endif  // STEREO_MSGS__MSG__DISPARITY_IMAGE__STRUCT_H_
