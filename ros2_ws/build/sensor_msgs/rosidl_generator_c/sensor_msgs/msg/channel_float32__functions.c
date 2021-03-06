// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "sensor_msgs/msg/channel_float32__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// name
#include "rosidl_generator_c/string_functions.h"
// values
#include "rosidl_generator_c/primitives_array_functions.h"

bool
sensor_msgs__msg__ChannelFloat32__init(sensor_msgs__msg__ChannelFloat32 * msg)
{
  if (!msg) {
    return false;
  }
  // name
  rosidl_generator_c__String__init(&msg->name);
  // values
  rosidl_generator_c__float32__Array__init(&msg->values, 0);
  return true;
}

void
sensor_msgs__msg__ChannelFloat32__fini(sensor_msgs__msg__ChannelFloat32 * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_generator_c__String__fini(&msg->name);
  // values
  rosidl_generator_c__float32__Array__fini(&msg->values);
}

sensor_msgs__msg__ChannelFloat32 *
sensor_msgs__msg__ChannelFloat32__create()
{
  sensor_msgs__msg__ChannelFloat32 * msg = (sensor_msgs__msg__ChannelFloat32 *)malloc(sizeof(sensor_msgs__msg__ChannelFloat32));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__ChannelFloat32));
  bool success = sensor_msgs__msg__ChannelFloat32__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__ChannelFloat32__destroy(sensor_msgs__msg__ChannelFloat32 * msg)
{
  if (msg) {
    sensor_msgs__msg__ChannelFloat32__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__ChannelFloat32__Array__init(sensor_msgs__msg__ChannelFloat32__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__ChannelFloat32 * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__ChannelFloat32 *)calloc(size, sizeof(sensor_msgs__msg__ChannelFloat32));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__ChannelFloat32__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__ChannelFloat32__fini(&data[i - 1]);
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
sensor_msgs__msg__ChannelFloat32__Array__fini(sensor_msgs__msg__ChannelFloat32__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__ChannelFloat32__fini(&array->data[i]);
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

sensor_msgs__msg__ChannelFloat32__Array *
sensor_msgs__msg__ChannelFloat32__Array__create(size_t size)
{
  sensor_msgs__msg__ChannelFloat32__Array * array = (sensor_msgs__msg__ChannelFloat32__Array *)malloc(sizeof(sensor_msgs__msg__ChannelFloat32__Array));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__ChannelFloat32__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__ChannelFloat32__Array__destroy(sensor_msgs__msg__ChannelFloat32__Array * array)
{
  if (array) {
    sensor_msgs__msg__ChannelFloat32__Array__fini(array);
  }
  free(array);
}
