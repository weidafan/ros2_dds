// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "test_communication/msg/dynamic_array_primitives_nested__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// msgs
#include "test_communication/msg/dynamic_array_primitives__functions.h"

bool
test_communication__msg__DynamicArrayPrimitivesNested__init(test_communication__msg__DynamicArrayPrimitivesNested * msg)
{
  if (!msg) {
    return false;
  }
  // msgs
  test_communication__msg__DynamicArrayPrimitives__Array__init(&msg->msgs, 0);
  return true;
}

void
test_communication__msg__DynamicArrayPrimitivesNested__fini(test_communication__msg__DynamicArrayPrimitivesNested * msg)
{
  if (!msg) {
    return;
  }
  // msgs
  test_communication__msg__DynamicArrayPrimitives__Array__fini(&msg->msgs);
}

test_communication__msg__DynamicArrayPrimitivesNested *
test_communication__msg__DynamicArrayPrimitivesNested__create()
{
  test_communication__msg__DynamicArrayPrimitivesNested * msg = (test_communication__msg__DynamicArrayPrimitivesNested *)malloc(sizeof(test_communication__msg__DynamicArrayPrimitivesNested));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_communication__msg__DynamicArrayPrimitivesNested));
  bool success = test_communication__msg__DynamicArrayPrimitivesNested__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_communication__msg__DynamicArrayPrimitivesNested__destroy(test_communication__msg__DynamicArrayPrimitivesNested * msg)
{
  if (msg) {
    test_communication__msg__DynamicArrayPrimitivesNested__fini(msg);
  }
  free(msg);
}


bool
test_communication__msg__DynamicArrayPrimitivesNested__Array__init(test_communication__msg__DynamicArrayPrimitivesNested__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_communication__msg__DynamicArrayPrimitivesNested * data = NULL;
  if (size) {
    data = (test_communication__msg__DynamicArrayPrimitivesNested *)calloc(size, sizeof(test_communication__msg__DynamicArrayPrimitivesNested));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_communication__msg__DynamicArrayPrimitivesNested__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_communication__msg__DynamicArrayPrimitivesNested__fini(&data[i - 1]);
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
test_communication__msg__DynamicArrayPrimitivesNested__Array__fini(test_communication__msg__DynamicArrayPrimitivesNested__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_communication__msg__DynamicArrayPrimitivesNested__fini(&array->data[i]);
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

test_communication__msg__DynamicArrayPrimitivesNested__Array *
test_communication__msg__DynamicArrayPrimitivesNested__Array__create(size_t size)
{
  test_communication__msg__DynamicArrayPrimitivesNested__Array * array = (test_communication__msg__DynamicArrayPrimitivesNested__Array *)malloc(sizeof(test_communication__msg__DynamicArrayPrimitivesNested__Array));
  if (!array) {
    return NULL;
  }
  bool success = test_communication__msg__DynamicArrayPrimitivesNested__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_communication__msg__DynamicArrayPrimitivesNested__Array__destroy(test_communication__msg__DynamicArrayPrimitivesNested__Array * array)
{
  if (array) {
    test_communication__msg__DynamicArrayPrimitivesNested__Array__fini(array);
  }
  free(array);
}
