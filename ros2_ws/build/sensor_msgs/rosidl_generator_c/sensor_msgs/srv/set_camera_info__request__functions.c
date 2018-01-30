// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "sensor_msgs/srv/set_camera_info__request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// camera_info
#include "sensor_msgs/msg/camera_info__functions.h"

bool
sensor_msgs__srv__SetCameraInfo_Request__init(sensor_msgs__srv__SetCameraInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // camera_info
  sensor_msgs__msg__CameraInfo__init(&msg->camera_info);
  return true;
}

void
sensor_msgs__srv__SetCameraInfo_Request__fini(sensor_msgs__srv__SetCameraInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // camera_info
  sensor_msgs__msg__CameraInfo__fini(&msg->camera_info);
}

sensor_msgs__srv__SetCameraInfo_Request *
sensor_msgs__srv__SetCameraInfo_Request__create()
{
  sensor_msgs__srv__SetCameraInfo_Request * msg = (sensor_msgs__srv__SetCameraInfo_Request *)malloc(sizeof(sensor_msgs__srv__SetCameraInfo_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__srv__SetCameraInfo_Request));
  bool success = sensor_msgs__srv__SetCameraInfo_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__srv__SetCameraInfo_Request__destroy(sensor_msgs__srv__SetCameraInfo_Request * msg)
{
  if (msg) {
    sensor_msgs__srv__SetCameraInfo_Request__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__srv__SetCameraInfo_Request__Array__init(sensor_msgs__srv__SetCameraInfo_Request__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__srv__SetCameraInfo_Request * data = NULL;
  if (size) {
    data = (sensor_msgs__srv__SetCameraInfo_Request *)calloc(size, sizeof(sensor_msgs__srv__SetCameraInfo_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__srv__SetCameraInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__srv__SetCameraInfo_Request__fini(&data[i - 1]);
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
sensor_msgs__srv__SetCameraInfo_Request__Array__fini(sensor_msgs__srv__SetCameraInfo_Request__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__srv__SetCameraInfo_Request__fini(&array->data[i]);
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

sensor_msgs__srv__SetCameraInfo_Request__Array *
sensor_msgs__srv__SetCameraInfo_Request__Array__create(size_t size)
{
  sensor_msgs__srv__SetCameraInfo_Request__Array * array = (sensor_msgs__srv__SetCameraInfo_Request__Array *)malloc(sizeof(sensor_msgs__srv__SetCameraInfo_Request__Array));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__srv__SetCameraInfo_Request__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__srv__SetCameraInfo_Request__Array__destroy(sensor_msgs__srv__SetCameraInfo_Request__Array * array)
{
  if (array) {
    sensor_msgs__srv__SetCameraInfo_Request__Array__fini(array);
  }
  free(array);
}
