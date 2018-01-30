// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "std_msgs/msg/u_int16_multi_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// layout
#include "std_msgs/msg/multi_array_layout__functions.h"
// data
#include "rosidl_generator_c/primitives_array_functions.h"

bool
std_msgs__msg__UInt16MultiArray__init(std_msgs__msg__UInt16MultiArray * msg)
{
  if (!msg) {
    return false;
  }
  // layout
  std_msgs__msg__MultiArrayLayout__init(&msg->layout);
  // data
  rosidl_generator_c__uint16__Array__init(&msg->data, 0);
  return true;
}

void
std_msgs__msg__UInt16MultiArray__fini(std_msgs__msg__UInt16MultiArray * msg)
{
  if (!msg) {
    return;
  }
  // layout
  std_msgs__msg__MultiArrayLayout__fini(&msg->layout);
  // data
  rosidl_generator_c__uint16__Array__fini(&msg->data);
}

std_msgs__msg__UInt16MultiArray *
std_msgs__msg__UInt16MultiArray__create()
{
  std_msgs__msg__UInt16MultiArray * msg = (std_msgs__msg__UInt16MultiArray *)malloc(sizeof(std_msgs__msg__UInt16MultiArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(std_msgs__msg__UInt16MultiArray));
  bool success = std_msgs__msg__UInt16MultiArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
std_msgs__msg__UInt16MultiArray__destroy(std_msgs__msg__UInt16MultiArray * msg)
{
  if (msg) {
    std_msgs__msg__UInt16MultiArray__fini(msg);
  }
  free(msg);
}


bool
std_msgs__msg__UInt16MultiArray__Array__init(std_msgs__msg__UInt16MultiArray__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  std_msgs__msg__UInt16MultiArray * data = NULL;
  if (size) {
    data = (std_msgs__msg__UInt16MultiArray *)calloc(size, sizeof(std_msgs__msg__UInt16MultiArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = std_msgs__msg__UInt16MultiArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        std_msgs__msg__UInt16MultiArray__fini(&data[i - 1]);
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
std_msgs__msg__UInt16MultiArray__Array__fini(std_msgs__msg__UInt16MultiArray__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      std_msgs__msg__UInt16MultiArray__fini(&array->data[i]);
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

std_msgs__msg__UInt16MultiArray__Array *
std_msgs__msg__UInt16MultiArray__Array__create(size_t size)
{
  std_msgs__msg__UInt16MultiArray__Array * array = (std_msgs__msg__UInt16MultiArray__Array *)malloc(sizeof(std_msgs__msg__UInt16MultiArray__Array));
  if (!array) {
    return NULL;
  }
  bool success = std_msgs__msg__UInt16MultiArray__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
std_msgs__msg__UInt16MultiArray__Array__destroy(std_msgs__msg__UInt16MultiArray__Array * array)
{
  if (array) {
    std_msgs__msg__UInt16MultiArray__Array__fini(array);
  }
  free(array);
}
