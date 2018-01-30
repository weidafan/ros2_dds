// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "sensor_msgs/msg/camera_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// header
#include "std_msgs/msg/header__functions.h"
// distortion_model
#include "rosidl_generator_c/string_functions.h"
// d
#include "rosidl_generator_c/primitives_array_functions.h"
// roi
#include "sensor_msgs/msg/region_of_interest__functions.h"

bool
sensor_msgs__msg__CameraInfo__init(sensor_msgs__msg__CameraInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  std_msgs__msg__Header__init(&msg->header);
  // height
  // width
  // distortion_model
  rosidl_generator_c__String__init(&msg->distortion_model);
  // d
  rosidl_generator_c__float64__Array__init(&msg->d, 0);
  // k
  // r
  // p
  // binning_x
  // binning_y
  // roi
  sensor_msgs__msg__RegionOfInterest__init(&msg->roi);
  return true;
}

void
sensor_msgs__msg__CameraInfo__fini(sensor_msgs__msg__CameraInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // height
  // width
  // distortion_model
  rosidl_generator_c__String__fini(&msg->distortion_model);
  // d
  rosidl_generator_c__float64__Array__fini(&msg->d);
  // k
  // r
  // p
  // binning_x
  // binning_y
  // roi
  sensor_msgs__msg__RegionOfInterest__fini(&msg->roi);
}

sensor_msgs__msg__CameraInfo *
sensor_msgs__msg__CameraInfo__create()
{
  sensor_msgs__msg__CameraInfo * msg = (sensor_msgs__msg__CameraInfo *)malloc(sizeof(sensor_msgs__msg__CameraInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__CameraInfo));
  bool success = sensor_msgs__msg__CameraInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__CameraInfo__destroy(sensor_msgs__msg__CameraInfo * msg)
{
  if (msg) {
    sensor_msgs__msg__CameraInfo__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__CameraInfo__Array__init(sensor_msgs__msg__CameraInfo__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__CameraInfo * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__CameraInfo *)calloc(size, sizeof(sensor_msgs__msg__CameraInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__CameraInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__CameraInfo__fini(&data[i - 1]);
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
sensor_msgs__msg__CameraInfo__Array__fini(sensor_msgs__msg__CameraInfo__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__CameraInfo__fini(&array->data[i]);
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

sensor_msgs__msg__CameraInfo__Array *
sensor_msgs__msg__CameraInfo__Array__create(size_t size)
{
  sensor_msgs__msg__CameraInfo__Array * array = (sensor_msgs__msg__CameraInfo__Array *)malloc(sizeof(sensor_msgs__msg__CameraInfo__Array));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__CameraInfo__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__CameraInfo__Array__destroy(sensor_msgs__msg__CameraInfo__Array * array)
{
  if (array) {
    sensor_msgs__msg__CameraInfo__Array__fini(array);
  }
  free(array);
}
