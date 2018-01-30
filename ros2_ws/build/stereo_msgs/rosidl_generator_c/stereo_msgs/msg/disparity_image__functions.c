// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "stereo_msgs/msg/disparity_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// header
#include "std_msgs/msg/header__functions.h"
// image
#include "sensor_msgs/msg/image__functions.h"
// valid_window
#include "sensor_msgs/msg/region_of_interest__functions.h"

bool
stereo_msgs__msg__DisparityImage__init(stereo_msgs__msg__DisparityImage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  std_msgs__msg__Header__init(&msg->header);
  // image
  sensor_msgs__msg__Image__init(&msg->image);
  // f
  // t
  // valid_window
  sensor_msgs__msg__RegionOfInterest__init(&msg->valid_window);
  // min_disparity
  // max_disparity
  // delta_d
  return true;
}

void
stereo_msgs__msg__DisparityImage__fini(stereo_msgs__msg__DisparityImage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // f
  // t
  // valid_window
  sensor_msgs__msg__RegionOfInterest__fini(&msg->valid_window);
  // min_disparity
  // max_disparity
  // delta_d
}

stereo_msgs__msg__DisparityImage *
stereo_msgs__msg__DisparityImage__create()
{
  stereo_msgs__msg__DisparityImage * msg = (stereo_msgs__msg__DisparityImage *)malloc(sizeof(stereo_msgs__msg__DisparityImage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stereo_msgs__msg__DisparityImage));
  bool success = stereo_msgs__msg__DisparityImage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
stereo_msgs__msg__DisparityImage__destroy(stereo_msgs__msg__DisparityImage * msg)
{
  if (msg) {
    stereo_msgs__msg__DisparityImage__fini(msg);
  }
  free(msg);
}


bool
stereo_msgs__msg__DisparityImage__Array__init(stereo_msgs__msg__DisparityImage__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  stereo_msgs__msg__DisparityImage * data = NULL;
  if (size) {
    data = (stereo_msgs__msg__DisparityImage *)calloc(size, sizeof(stereo_msgs__msg__DisparityImage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stereo_msgs__msg__DisparityImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stereo_msgs__msg__DisparityImage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
stereo_msgs__msg__DisparityImage__Array__fini(stereo_msgs__msg__DisparityImage__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      stereo_msgs__msg__DisparityImage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

stereo_msgs__msg__DisparityImage__Array *
stereo_msgs__msg__DisparityImage__Array__create(size_t size)
{
  stereo_msgs__msg__DisparityImage__Array * array = (stereo_msgs__msg__DisparityImage__Array *)malloc(sizeof(stereo_msgs__msg__DisparityImage__Array));
  if (!array) {
    return NULL;
  }
  bool success = stereo_msgs__msg__DisparityImage__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
stereo_msgs__msg__DisparityImage__Array__destroy(stereo_msgs__msg__DisparityImage__Array * array)
{
  if (array) {
    stereo_msgs__msg__DisparityImage__Array__fini(array);
  }
  free(array);
}
