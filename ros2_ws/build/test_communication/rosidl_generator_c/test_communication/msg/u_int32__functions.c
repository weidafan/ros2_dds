// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "test_communication/msg/u_int32__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
test_communication__msg__UInt32__init(test_communication__msg__UInt32 * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
test_communication__msg__UInt32__fini(test_communication__msg__UInt32 * msg)
{
  if (!msg) {
    return;
  }
  // data
}

test_communication__msg__UInt32 *
test_communication__msg__UInt32__create()
{
  test_communication__msg__UInt32 * msg = (test_communication__msg__UInt32 *)malloc(sizeof(test_communication__msg__UInt32));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_communication__msg__UInt32));
  bool success = test_communication__msg__UInt32__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_communication__msg__UInt32__destroy(test_communication__msg__UInt32 * msg)
{
  if (msg) {
    test_communication__msg__UInt32__fini(msg);
  }
  free(msg);
}


bool
test_communication__msg__UInt32__Array__init(test_communication__msg__UInt32__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_communication__msg__UInt32 * data = NULL;
  if (size) {
    data = (test_communication__msg__UInt32 *)calloc(size, sizeof(test_communication__msg__UInt32));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_communication__msg__UInt32__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_communication__msg__UInt32__fini(&data[i - 1]);
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
test_communication__msg__UInt32__Array__fini(test_communication__msg__UInt32__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_communication__msg__UInt32__fini(&array->data[i]);
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

test_communication__msg__UInt32__Array *
test_communication__msg__UInt32__Array__create(size_t size)
{
  test_communication__msg__UInt32__Array * array = (test_communication__msg__UInt32__Array *)malloc(sizeof(test_communication__msg__UInt32__Array));
  if (!array) {
    return NULL;
  }
  bool success = test_communication__msg__UInt32__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_communication__msg__UInt32__Array__destroy(test_communication__msg__UInt32__Array * array)
{
  if (array) {
    test_communication__msg__UInt32__Array__fini(array);
  }
  free(array);
}
