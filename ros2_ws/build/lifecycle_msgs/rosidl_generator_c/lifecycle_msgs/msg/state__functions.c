// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "lifecycle_msgs/msg/state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// label
#include "rosidl_generator_c/string_functions.h"

bool
lifecycle_msgs__msg__State__init(lifecycle_msgs__msg__State * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // label
  rosidl_generator_c__String__init(&msg->label);
  return true;
}

void
lifecycle_msgs__msg__State__fini(lifecycle_msgs__msg__State * msg)
{
  if (!msg) {
    return;
  }
  // id
  // label
  rosidl_generator_c__String__fini(&msg->label);
}

lifecycle_msgs__msg__State *
lifecycle_msgs__msg__State__create()
{
  lifecycle_msgs__msg__State * msg = (lifecycle_msgs__msg__State *)malloc(sizeof(lifecycle_msgs__msg__State));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lifecycle_msgs__msg__State));
  bool success = lifecycle_msgs__msg__State__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lifecycle_msgs__msg__State__destroy(lifecycle_msgs__msg__State * msg)
{
  if (msg) {
    lifecycle_msgs__msg__State__fini(msg);
  }
  free(msg);
}


bool
lifecycle_msgs__msg__State__Array__init(lifecycle_msgs__msg__State__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  lifecycle_msgs__msg__State * data = NULL;
  if (size) {
    data = (lifecycle_msgs__msg__State *)calloc(size, sizeof(lifecycle_msgs__msg__State));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lifecycle_msgs__msg__State__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lifecycle_msgs__msg__State__fini(&data[i - 1]);
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
lifecycle_msgs__msg__State__Array__fini(lifecycle_msgs__msg__State__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lifecycle_msgs__msg__State__fini(&array->data[i]);
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

lifecycle_msgs__msg__State__Array *
lifecycle_msgs__msg__State__Array__create(size_t size)
{
  lifecycle_msgs__msg__State__Array * array = (lifecycle_msgs__msg__State__Array *)malloc(sizeof(lifecycle_msgs__msg__State__Array));
  if (!array) {
    return NULL;
  }
  bool success = lifecycle_msgs__msg__State__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lifecycle_msgs__msg__State__Array__destroy(lifecycle_msgs__msg__State__Array * array)
{
  if (array) {
    lifecycle_msgs__msg__State__Array__fini(array);
  }
  free(array);
}
