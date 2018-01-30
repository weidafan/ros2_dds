// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "geometry_msgs/msg/transform_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// header
#include "std_msgs/msg/header__functions.h"
// child_frame_id
#include "rosidl_generator_c/string_functions.h"
// transform
#include "geometry_msgs/msg/transform__functions.h"

bool
geometry_msgs__msg__TransformStamped__init(geometry_msgs__msg__TransformStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  std_msgs__msg__Header__init(&msg->header);
  // child_frame_id
  rosidl_generator_c__String__init(&msg->child_frame_id);
  // transform
  geometry_msgs__msg__Transform__init(&msg->transform);
  return true;
}

void
geometry_msgs__msg__TransformStamped__fini(geometry_msgs__msg__TransformStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // child_frame_id
  rosidl_generator_c__String__fini(&msg->child_frame_id);
  // transform
  geometry_msgs__msg__Transform__fini(&msg->transform);
}

geometry_msgs__msg__TransformStamped *
geometry_msgs__msg__TransformStamped__create()
{
  geometry_msgs__msg__TransformStamped * msg = (geometry_msgs__msg__TransformStamped *)malloc(sizeof(geometry_msgs__msg__TransformStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geometry_msgs__msg__TransformStamped));
  bool success = geometry_msgs__msg__TransformStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geometry_msgs__msg__TransformStamped__destroy(geometry_msgs__msg__TransformStamped * msg)
{
  if (msg) {
    geometry_msgs__msg__TransformStamped__fini(msg);
  }
  free(msg);
}


bool
geometry_msgs__msg__TransformStamped__Array__init(geometry_msgs__msg__TransformStamped__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  geometry_msgs__msg__TransformStamped * data = NULL;
  if (size) {
    data = (geometry_msgs__msg__TransformStamped *)calloc(size, sizeof(geometry_msgs__msg__TransformStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geometry_msgs__msg__TransformStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geometry_msgs__msg__TransformStamped__fini(&data[i - 1]);
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
geometry_msgs__msg__TransformStamped__Array__fini(geometry_msgs__msg__TransformStamped__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geometry_msgs__msg__TransformStamped__fini(&array->data[i]);
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

geometry_msgs__msg__TransformStamped__Array *
geometry_msgs__msg__TransformStamped__Array__create(size_t size)
{
  geometry_msgs__msg__TransformStamped__Array * array = (geometry_msgs__msg__TransformStamped__Array *)malloc(sizeof(geometry_msgs__msg__TransformStamped__Array));
  if (!array) {
    return NULL;
  }
  bool success = geometry_msgs__msg__TransformStamped__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geometry_msgs__msg__TransformStamped__Array__destroy(geometry_msgs__msg__TransformStamped__Array * array)
{
  if (array) {
    geometry_msgs__msg__TransformStamped__Array__fini(array);
  }
  free(array);
}
