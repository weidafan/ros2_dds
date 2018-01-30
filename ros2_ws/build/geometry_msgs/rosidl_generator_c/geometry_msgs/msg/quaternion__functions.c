// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "geometry_msgs/msg/quaternion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
geometry_msgs__msg__Quaternion__init(geometry_msgs__msg__Quaternion * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // w
  return true;
}

void
geometry_msgs__msg__Quaternion__fini(geometry_msgs__msg__Quaternion * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // w
}

geometry_msgs__msg__Quaternion *
geometry_msgs__msg__Quaternion__create()
{
  geometry_msgs__msg__Quaternion * msg = (geometry_msgs__msg__Quaternion *)malloc(sizeof(geometry_msgs__msg__Quaternion));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geometry_msgs__msg__Quaternion));
  bool success = geometry_msgs__msg__Quaternion__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geometry_msgs__msg__Quaternion__destroy(geometry_msgs__msg__Quaternion * msg)
{
  if (msg) {
    geometry_msgs__msg__Quaternion__fini(msg);
  }
  free(msg);
}


bool
geometry_msgs__msg__Quaternion__Array__init(geometry_msgs__msg__Quaternion__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  geometry_msgs__msg__Quaternion * data = NULL;
  if (size) {
    data = (geometry_msgs__msg__Quaternion *)calloc(size, sizeof(geometry_msgs__msg__Quaternion));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geometry_msgs__msg__Quaternion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geometry_msgs__msg__Quaternion__fini(&data[i - 1]);
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
geometry_msgs__msg__Quaternion__Array__fini(geometry_msgs__msg__Quaternion__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geometry_msgs__msg__Quaternion__fini(&array->data[i]);
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

geometry_msgs__msg__Quaternion__Array *
geometry_msgs__msg__Quaternion__Array__create(size_t size)
{
  geometry_msgs__msg__Quaternion__Array * array = (geometry_msgs__msg__Quaternion__Array *)malloc(sizeof(geometry_msgs__msg__Quaternion__Array));
  if (!array) {
    return NULL;
  }
  bool success = geometry_msgs__msg__Quaternion__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geometry_msgs__msg__Quaternion__Array__destroy(geometry_msgs__msg__Quaternion__Array * array)
{
  if (array) {
    geometry_msgs__msg__Quaternion__Array__fini(array);
  }
  free(array);
}
