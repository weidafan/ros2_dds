// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "std_msgs/msg/float64__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
std_msgs__msg__Float64__init(std_msgs__msg__Float64 * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
std_msgs__msg__Float64__fini(std_msgs__msg__Float64 * msg)
{
  if (!msg) {
    return;
  }
  // data
}

std_msgs__msg__Float64 *
std_msgs__msg__Float64__create()
{
  std_msgs__msg__Float64 * msg = (std_msgs__msg__Float64 *)malloc(sizeof(std_msgs__msg__Float64));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(std_msgs__msg__Float64));
  bool success = std_msgs__msg__Float64__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
std_msgs__msg__Float64__destroy(std_msgs__msg__Float64 * msg)
{
  if (msg) {
    std_msgs__msg__Float64__fini(msg);
  }
  free(msg);
}


bool
std_msgs__msg__Float64__Array__init(std_msgs__msg__Float64__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  std_msgs__msg__Float64 * data = NULL;
  if (size) {
    data = (std_msgs__msg__Float64 *)calloc(size, sizeof(std_msgs__msg__Float64));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = std_msgs__msg__Float64__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        std_msgs__msg__Float64__fini(&data[i - 1]);
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
std_msgs__msg__Float64__Array__fini(std_msgs__msg__Float64__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      std_msgs__msg__Float64__fini(&array->data[i]);
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

std_msgs__msg__Float64__Array *
std_msgs__msg__Float64__Array__create(size_t size)
{
  std_msgs__msg__Float64__Array * array = (std_msgs__msg__Float64__Array *)malloc(sizeof(std_msgs__msg__Float64__Array));
  if (!array) {
    return NULL;
  }
  bool success = std_msgs__msg__Float64__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
std_msgs__msg__Float64__Array__destroy(std_msgs__msg__Float64__Array * array)
{
  if (array) {
    std_msgs__msg__Float64__Array__fini(array);
  }
  free(array);
}
