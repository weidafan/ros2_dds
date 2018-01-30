// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "sensor_msgs/srv/set_camera_info__response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// status_message
#include "rosidl_generator_c/string_functions.h"

bool
sensor_msgs__srv__SetCameraInfo_Response__init(sensor_msgs__srv__SetCameraInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status_message
  rosidl_generator_c__String__init(&msg->status_message);
  return true;
}

void
sensor_msgs__srv__SetCameraInfo_Response__fini(sensor_msgs__srv__SetCameraInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status_message
  rosidl_generator_c__String__fini(&msg->status_message);
}

sensor_msgs__srv__SetCameraInfo_Response *
sensor_msgs__srv__SetCameraInfo_Response__create()
{
  sensor_msgs__srv__SetCameraInfo_Response * msg = (sensor_msgs__srv__SetCameraInfo_Response *)malloc(sizeof(sensor_msgs__srv__SetCameraInfo_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__srv__SetCameraInfo_Response));
  bool success = sensor_msgs__srv__SetCameraInfo_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__srv__SetCameraInfo_Response__destroy(sensor_msgs__srv__SetCameraInfo_Response * msg)
{
  if (msg) {
    sensor_msgs__srv__SetCameraInfo_Response__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__srv__SetCameraInfo_Response__Array__init(sensor_msgs__srv__SetCameraInfo_Response__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__srv__SetCameraInfo_Response * data = NULL;
  if (size) {
    data = (sensor_msgs__srv__SetCameraInfo_Response *)calloc(size, sizeof(sensor_msgs__srv__SetCameraInfo_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__srv__SetCameraInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__srv__SetCameraInfo_Response__fini(&data[i - 1]);
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
sensor_msgs__srv__SetCameraInfo_Response__Array__fini(sensor_msgs__srv__SetCameraInfo_Response__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__srv__SetCameraInfo_Response__fini(&array->data[i]);
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

sensor_msgs__srv__SetCameraInfo_Response__Array *
sensor_msgs__srv__SetCameraInfo_Response__Array__create(size_t size)
{
  sensor_msgs__srv__SetCameraInfo_Response__Array * array = (sensor_msgs__srv__SetCameraInfo_Response__Array *)malloc(sizeof(sensor_msgs__srv__SetCameraInfo_Response__Array));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__srv__SetCameraInfo_Response__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__srv__SetCameraInfo_Response__Array__destroy(sensor_msgs__srv__SetCameraInfo_Response__Array * array)
{
  if (array) {
    sensor_msgs__srv__SetCameraInfo_Response__Array__fini(array);
  }
  free(array);
}
