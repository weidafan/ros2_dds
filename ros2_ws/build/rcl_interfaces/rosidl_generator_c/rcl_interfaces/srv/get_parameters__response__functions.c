// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "rcl_interfaces/srv/get_parameters__response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// values
#include "rcl_interfaces/msg/parameter_value__functions.h"

bool
rcl_interfaces__srv__GetParameters_Response__init(rcl_interfaces__srv__GetParameters_Response * msg)
{
  if (!msg) {
    return false;
  }
  // values
  rcl_interfaces__msg__ParameterValue__Array__init(&msg->values, 0);
  return true;
}

void
rcl_interfaces__srv__GetParameters_Response__fini(rcl_interfaces__srv__GetParameters_Response * msg)
{
  if (!msg) {
    return;
  }
  // values
  rcl_interfaces__msg__ParameterValue__Array__fini(&msg->values);
}

rcl_interfaces__srv__GetParameters_Response *
rcl_interfaces__srv__GetParameters_Response__create()
{
  rcl_interfaces__srv__GetParameters_Response * msg = (rcl_interfaces__srv__GetParameters_Response *)malloc(sizeof(rcl_interfaces__srv__GetParameters_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__srv__GetParameters_Response));
  bool success = rcl_interfaces__srv__GetParameters_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__srv__GetParameters_Response__destroy(rcl_interfaces__srv__GetParameters_Response * msg)
{
  if (msg) {
    rcl_interfaces__srv__GetParameters_Response__fini(msg);
  }
  free(msg);
}


bool
rcl_interfaces__srv__GetParameters_Response__Array__init(rcl_interfaces__srv__GetParameters_Response__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcl_interfaces__srv__GetParameters_Response * data = NULL;
  if (size) {
    data = (rcl_interfaces__srv__GetParameters_Response *)calloc(size, sizeof(rcl_interfaces__srv__GetParameters_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__srv__GetParameters_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__srv__GetParameters_Response__fini(&data[i - 1]);
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
rcl_interfaces__srv__GetParameters_Response__Array__fini(rcl_interfaces__srv__GetParameters_Response__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rcl_interfaces__srv__GetParameters_Response__fini(&array->data[i]);
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

rcl_interfaces__srv__GetParameters_Response__Array *
rcl_interfaces__srv__GetParameters_Response__Array__create(size_t size)
{
  rcl_interfaces__srv__GetParameters_Response__Array * array = (rcl_interfaces__srv__GetParameters_Response__Array *)malloc(sizeof(rcl_interfaces__srv__GetParameters_Response__Array));
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__srv__GetParameters_Response__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__srv__GetParameters_Response__Array__destroy(rcl_interfaces__srv__GetParameters_Response__Array * array)
{
  if (array) {
    rcl_interfaces__srv__GetParameters_Response__Array__fini(array);
  }
  free(array);
}
