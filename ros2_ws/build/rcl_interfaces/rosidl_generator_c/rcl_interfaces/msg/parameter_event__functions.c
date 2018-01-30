// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "rcl_interfaces/msg/parameter_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// new_parameters
// changed_parameters
// deleted_parameters
#include "rcl_interfaces/msg/parameter__functions.h"

bool
rcl_interfaces__msg__ParameterEvent__init(rcl_interfaces__msg__ParameterEvent * msg)
{
  if (!msg) {
    return false;
  }
  // new_parameters
  rcl_interfaces__msg__Parameter__Array__init(&msg->new_parameters, 0);
  // changed_parameters
  rcl_interfaces__msg__Parameter__Array__init(&msg->changed_parameters, 0);
  // deleted_parameters
  rcl_interfaces__msg__Parameter__Array__init(&msg->deleted_parameters, 0);
  return true;
}

void
rcl_interfaces__msg__ParameterEvent__fini(rcl_interfaces__msg__ParameterEvent * msg)
{
  if (!msg) {
    return;
  }
  // new_parameters
  rcl_interfaces__msg__Parameter__Array__fini(&msg->new_parameters);
  // changed_parameters
  rcl_interfaces__msg__Parameter__Array__fini(&msg->changed_parameters);
  // deleted_parameters
  rcl_interfaces__msg__Parameter__Array__fini(&msg->deleted_parameters);
}

rcl_interfaces__msg__ParameterEvent *
rcl_interfaces__msg__ParameterEvent__create()
{
  rcl_interfaces__msg__ParameterEvent * msg = (rcl_interfaces__msg__ParameterEvent *)malloc(sizeof(rcl_interfaces__msg__ParameterEvent));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__msg__ParameterEvent));
  bool success = rcl_interfaces__msg__ParameterEvent__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__msg__ParameterEvent__destroy(rcl_interfaces__msg__ParameterEvent * msg)
{
  if (msg) {
    rcl_interfaces__msg__ParameterEvent__fini(msg);
  }
  free(msg);
}


bool
rcl_interfaces__msg__ParameterEvent__Array__init(rcl_interfaces__msg__ParameterEvent__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcl_interfaces__msg__ParameterEvent * data = NULL;
  if (size) {
    data = (rcl_interfaces__msg__ParameterEvent *)calloc(size, sizeof(rcl_interfaces__msg__ParameterEvent));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__msg__ParameterEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__msg__ParameterEvent__fini(&data[i - 1]);
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
rcl_interfaces__msg__ParameterEvent__Array__fini(rcl_interfaces__msg__ParameterEvent__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rcl_interfaces__msg__ParameterEvent__fini(&array->data[i]);
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

rcl_interfaces__msg__ParameterEvent__Array *
rcl_interfaces__msg__ParameterEvent__Array__create(size_t size)
{
  rcl_interfaces__msg__ParameterEvent__Array * array = (rcl_interfaces__msg__ParameterEvent__Array *)malloc(sizeof(rcl_interfaces__msg__ParameterEvent__Array));
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__msg__ParameterEvent__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__msg__ParameterEvent__Array__destroy(rcl_interfaces__msg__ParameterEvent__Array * array)
{
  if (array) {
    rcl_interfaces__msg__ParameterEvent__Array__fini(array);
  }
  free(array);
}
