// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "diagnostic_msgs/msg/key_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// key
// value
#include "rosidl_generator_c/string_functions.h"

bool
diagnostic_msgs__msg__KeyValue__init(diagnostic_msgs__msg__KeyValue * msg)
{
  if (!msg) {
    return false;
  }
  // key
  rosidl_generator_c__String__init(&msg->key);
  // value
  rosidl_generator_c__String__init(&msg->value);
  return true;
}

void
diagnostic_msgs__msg__KeyValue__fini(diagnostic_msgs__msg__KeyValue * msg)
{
  if (!msg) {
    return;
  }
  // key
  rosidl_generator_c__String__fini(&msg->key);
  // value
  rosidl_generator_c__String__fini(&msg->value);
}

diagnostic_msgs__msg__KeyValue *
diagnostic_msgs__msg__KeyValue__create()
{
  diagnostic_msgs__msg__KeyValue * msg = (diagnostic_msgs__msg__KeyValue *)malloc(sizeof(diagnostic_msgs__msg__KeyValue));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(diagnostic_msgs__msg__KeyValue));
  bool success = diagnostic_msgs__msg__KeyValue__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
diagnostic_msgs__msg__KeyValue__destroy(diagnostic_msgs__msg__KeyValue * msg)
{
  if (msg) {
    diagnostic_msgs__msg__KeyValue__fini(msg);
  }
  free(msg);
}


bool
diagnostic_msgs__msg__KeyValue__Array__init(diagnostic_msgs__msg__KeyValue__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  diagnostic_msgs__msg__KeyValue * data = NULL;
  if (size) {
    data = (diagnostic_msgs__msg__KeyValue *)calloc(size, sizeof(diagnostic_msgs__msg__KeyValue));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = diagnostic_msgs__msg__KeyValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        diagnostic_msgs__msg__KeyValue__fini(&data[i - 1]);
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
diagnostic_msgs__msg__KeyValue__Array__fini(diagnostic_msgs__msg__KeyValue__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      diagnostic_msgs__msg__KeyValue__fini(&array->data[i]);
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

diagnostic_msgs__msg__KeyValue__Array *
diagnostic_msgs__msg__KeyValue__Array__create(size_t size)
{
  diagnostic_msgs__msg__KeyValue__Array * array = (diagnostic_msgs__msg__KeyValue__Array *)malloc(sizeof(diagnostic_msgs__msg__KeyValue__Array));
  if (!array) {
    return NULL;
  }
  bool success = diagnostic_msgs__msg__KeyValue__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
diagnostic_msgs__msg__KeyValue__Array__destroy(diagnostic_msgs__msg__KeyValue__Array * array)
{
  if (array) {
    diagnostic_msgs__msg__KeyValue__Array__fini(array);
  }
  free(array);
}
