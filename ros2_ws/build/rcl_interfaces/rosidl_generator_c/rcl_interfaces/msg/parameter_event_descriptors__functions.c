// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "rcl_interfaces/msg/parameter_event_descriptors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// new_parameters
// changed_parameters
// deleted_parameters
#include "rcl_interfaces/msg/parameter_descriptor__functions.h"

bool
rcl_interfaces__msg__ParameterEventDescriptors__init(rcl_interfaces__msg__ParameterEventDescriptors * msg)
{
  if (!msg) {
    return false;
  }
  // new_parameters
  rcl_interfaces__msg__ParameterDescriptor__Array__init(&msg->new_parameters, 0);
  // changed_parameters
  rcl_interfaces__msg__ParameterDescriptor__Array__init(&msg->changed_parameters, 0);
  // deleted_parameters
  rcl_interfaces__msg__ParameterDescriptor__Array__init(&msg->deleted_parameters, 0);
  return true;
}

void
rcl_interfaces__msg__ParameterEventDescriptors__fini(rcl_interfaces__msg__ParameterEventDescriptors * msg)
{
  if (!msg) {
    return;
  }
  // new_parameters
  rcl_interfaces__msg__ParameterDescriptor__Array__fini(&msg->new_parameters);
  // changed_parameters
  rcl_interfaces__msg__ParameterDescriptor__Array__fini(&msg->changed_parameters);
  // deleted_parameters
  rcl_interfaces__msg__ParameterDescriptor__Array__fini(&msg->deleted_parameters);
}

rcl_interfaces__msg__ParameterEventDescriptors *
rcl_interfaces__msg__ParameterEventDescriptors__create()
{
  rcl_interfaces__msg__ParameterEventDescriptors * msg = (rcl_interfaces__msg__ParameterEventDescriptors *)malloc(sizeof(rcl_interfaces__msg__ParameterEventDescriptors));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__msg__ParameterEventDescriptors));
  bool success = rcl_interfaces__msg__ParameterEventDescriptors__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__msg__ParameterEventDescriptors__destroy(rcl_interfaces__msg__ParameterEventDescriptors * msg)
{
  if (msg) {
    rcl_interfaces__msg__ParameterEventDescriptors__fini(msg);
  }
  free(msg);
}


bool
rcl_interfaces__msg__ParameterEventDescriptors__Array__init(rcl_interfaces__msg__ParameterEventDescriptors__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcl_interfaces__msg__ParameterEventDescriptors * data = NULL;
  if (size) {
    data = (rcl_interfaces__msg__ParameterEventDescriptors *)calloc(size, sizeof(rcl_interfaces__msg__ParameterEventDescriptors));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__msg__ParameterEventDescriptors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__msg__ParameterEventDescriptors__fini(&data[i - 1]);
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
rcl_interfaces__msg__ParameterEventDescriptors__Array__fini(rcl_interfaces__msg__ParameterEventDescriptors__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rcl_interfaces__msg__ParameterEventDescriptors__fini(&array->data[i]);
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

rcl_interfaces__msg__ParameterEventDescriptors__Array *
rcl_interfaces__msg__ParameterEventDescriptors__Array__create(size_t size)
{
  rcl_interfaces__msg__ParameterEventDescriptors__Array * array = (rcl_interfaces__msg__ParameterEventDescriptors__Array *)malloc(sizeof(rcl_interfaces__msg__ParameterEventDescriptors__Array));
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__msg__ParameterEventDescriptors__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__msg__ParameterEventDescriptors__Array__destroy(rcl_interfaces__msg__ParameterEventDescriptors__Array * array)
{
  if (array) {
    rcl_interfaces__msg__ParameterEventDescriptors__Array__fini(array);
  }
  free(array);
}
