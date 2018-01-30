// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "example_interfaces/srv/add_two_ints__response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
example_interfaces__srv__AddTwoInts_Response__init(example_interfaces__srv__AddTwoInts_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
example_interfaces__srv__AddTwoInts_Response__fini(example_interfaces__srv__AddTwoInts_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

example_interfaces__srv__AddTwoInts_Response *
example_interfaces__srv__AddTwoInts_Response__create()
{
  example_interfaces__srv__AddTwoInts_Response * msg = (example_interfaces__srv__AddTwoInts_Response *)malloc(sizeof(example_interfaces__srv__AddTwoInts_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__srv__AddTwoInts_Response));
  bool success = example_interfaces__srv__AddTwoInts_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
example_interfaces__srv__AddTwoInts_Response__destroy(example_interfaces__srv__AddTwoInts_Response * msg)
{
  if (msg) {
    example_interfaces__srv__AddTwoInts_Response__fini(msg);
  }
  free(msg);
}


bool
example_interfaces__srv__AddTwoInts_Response__Array__init(example_interfaces__srv__AddTwoInts_Response__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  example_interfaces__srv__AddTwoInts_Response * data = NULL;
  if (size) {
    data = (example_interfaces__srv__AddTwoInts_Response *)calloc(size, sizeof(example_interfaces__srv__AddTwoInts_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__srv__AddTwoInts_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__srv__AddTwoInts_Response__fini(&data[i - 1]);
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
example_interfaces__srv__AddTwoInts_Response__Array__fini(example_interfaces__srv__AddTwoInts_Response__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      example_interfaces__srv__AddTwoInts_Response__fini(&array->data[i]);
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

example_interfaces__srv__AddTwoInts_Response__Array *
example_interfaces__srv__AddTwoInts_Response__Array__create(size_t size)
{
  example_interfaces__srv__AddTwoInts_Response__Array * array = (example_interfaces__srv__AddTwoInts_Response__Array *)malloc(sizeof(example_interfaces__srv__AddTwoInts_Response__Array));
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__srv__AddTwoInts_Response__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
example_interfaces__srv__AddTwoInts_Response__Array__destroy(example_interfaces__srv__AddTwoInts_Response__Array * array)
{
  if (array) {
    example_interfaces__srv__AddTwoInts_Response__Array__fini(array);
  }
  free(array);
}
