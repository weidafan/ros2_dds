// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "rcl_interfaces/msg/list_parameters_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// names
// prefixes
#include "rosidl_generator_c/string_functions.h"

bool
rcl_interfaces__msg__ListParametersResult__init(rcl_interfaces__msg__ListParametersResult * msg)
{
  if (!msg) {
    return false;
  }
  // names
  rosidl_generator_c__String__Array__init(&msg->names, 0);
  // prefixes
  rosidl_generator_c__String__Array__init(&msg->prefixes, 0);
  return true;
}

void
rcl_interfaces__msg__ListParametersResult__fini(rcl_interfaces__msg__ListParametersResult * msg)
{
  if (!msg) {
    return;
  }
  // names
  rosidl_generator_c__String__Array__fini(&msg->names);
  // prefixes
  rosidl_generator_c__String__Array__fini(&msg->prefixes);
}

rcl_interfaces__msg__ListParametersResult *
rcl_interfaces__msg__ListParametersResult__create()
{
  rcl_interfaces__msg__ListParametersResult * msg = (rcl_interfaces__msg__ListParametersResult *)malloc(sizeof(rcl_interfaces__msg__ListParametersResult));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__msg__ListParametersResult));
  bool success = rcl_interfaces__msg__ListParametersResult__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__msg__ListParametersResult__destroy(rcl_interfaces__msg__ListParametersResult * msg)
{
  if (msg) {
    rcl_interfaces__msg__ListParametersResult__fini(msg);
  }
  free(msg);
}


bool
rcl_interfaces__msg__ListParametersResult__Array__init(rcl_interfaces__msg__ListParametersResult__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcl_interfaces__msg__ListParametersResult * data = NULL;
  if (size) {
    data = (rcl_interfaces__msg__ListParametersResult *)calloc(size, sizeof(rcl_interfaces__msg__ListParametersResult));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__msg__ListParametersResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__msg__ListParametersResult__fini(&data[i - 1]);
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
rcl_interfaces__msg__ListParametersResult__Array__fini(rcl_interfaces__msg__ListParametersResult__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rcl_interfaces__msg__ListParametersResult__fini(&array->data[i]);
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

rcl_interfaces__msg__ListParametersResult__Array *
rcl_interfaces__msg__ListParametersResult__Array__create(size_t size)
{
  rcl_interfaces__msg__ListParametersResult__Array * array = (rcl_interfaces__msg__ListParametersResult__Array *)malloc(sizeof(rcl_interfaces__msg__ListParametersResult__Array));
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__msg__ListParametersResult__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__msg__ListParametersResult__Array__destroy(rcl_interfaces__msg__ListParametersResult__Array * array)
{
  if (array) {
    rcl_interfaces__msg__ListParametersResult__Array__fini(array);
  }
  free(array);
}
