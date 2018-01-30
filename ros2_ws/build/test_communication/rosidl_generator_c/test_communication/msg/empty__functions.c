// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "test_communication/msg/empty__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
test_communication__msg__Empty__init(test_communication__msg__Empty * msg)
{
  if (!msg) {
    return false;
  }
  return true;
}

void
test_communication__msg__Empty__fini(test_communication__msg__Empty * msg)
{
  if (!msg) {
    return;
  }
}

test_communication__msg__Empty *
test_communication__msg__Empty__create()
{
  test_communication__msg__Empty * msg = (test_communication__msg__Empty *)malloc(sizeof(test_communication__msg__Empty));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_communication__msg__Empty));
  bool success = test_communication__msg__Empty__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_communication__msg__Empty__destroy(test_communication__msg__Empty * msg)
{
  if (msg) {
    test_communication__msg__Empty__fini(msg);
  }
  free(msg);
}


bool
test_communication__msg__Empty__Array__init(test_communication__msg__Empty__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_communication__msg__Empty * data = NULL;
  if (size) {
    data = (test_communication__msg__Empty *)calloc(size, sizeof(test_communication__msg__Empty));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_communication__msg__Empty__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_communication__msg__Empty__fini(&data[i - 1]);
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
test_communication__msg__Empty__Array__fini(test_communication__msg__Empty__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_communication__msg__Empty__fini(&array->data[i]);
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

test_communication__msg__Empty__Array *
test_communication__msg__Empty__Array__create(size_t size)
{
  test_communication__msg__Empty__Array * array = (test_communication__msg__Empty__Array *)malloc(sizeof(test_communication__msg__Empty__Array));
  if (!array) {
    return NULL;
  }
  bool success = test_communication__msg__Empty__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_communication__msg__Empty__Array__destroy(test_communication__msg__Empty__Array * array)
{
  if (array) {
    test_communication__msg__Empty__Array__fini(array);
  }
  free(array);
}
