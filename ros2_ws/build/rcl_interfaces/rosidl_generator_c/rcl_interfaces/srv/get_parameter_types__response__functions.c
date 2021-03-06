// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "rcl_interfaces/srv/get_parameter_types__response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// types
#include "rosidl_generator_c/primitives_array_functions.h"

bool
rcl_interfaces__srv__GetParameterTypes_Response__init(rcl_interfaces__srv__GetParameterTypes_Response * msg)
{
  if (!msg) {
    return false;
  }
  // types
  rosidl_generator_c__uint8__Array__init(&msg->types, 0);
  return true;
}

void
rcl_interfaces__srv__GetParameterTypes_Response__fini(rcl_interfaces__srv__GetParameterTypes_Response * msg)
{
  if (!msg) {
    return;
  }
  // types
  rosidl_generator_c__uint8__Array__fini(&msg->types);
}

rcl_interfaces__srv__GetParameterTypes_Response *
rcl_interfaces__srv__GetParameterTypes_Response__create()
{
  rcl_interfaces__srv__GetParameterTypes_Response * msg = (rcl_interfaces__srv__GetParameterTypes_Response *)malloc(sizeof(rcl_interfaces__srv__GetParameterTypes_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rcl_interfaces__srv__GetParameterTypes_Response));
  bool success = rcl_interfaces__srv__GetParameterTypes_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rcl_interfaces__srv__GetParameterTypes_Response__destroy(rcl_interfaces__srv__GetParameterTypes_Response * msg)
{
  if (msg) {
    rcl_interfaces__srv__GetParameterTypes_Response__fini(msg);
  }
  free(msg);
}


bool
rcl_interfaces__srv__GetParameterTypes_Response__Array__init(rcl_interfaces__srv__GetParameterTypes_Response__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcl_interfaces__srv__GetParameterTypes_Response * data = NULL;
  if (size) {
    data = (rcl_interfaces__srv__GetParameterTypes_Response *)calloc(size, sizeof(rcl_interfaces__srv__GetParameterTypes_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rcl_interfaces__srv__GetParameterTypes_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rcl_interfaces__srv__GetParameterTypes_Response__fini(&data[i - 1]);
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
rcl_interfaces__srv__GetParameterTypes_Response__Array__fini(rcl_interfaces__srv__GetParameterTypes_Response__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rcl_interfaces__srv__GetParameterTypes_Response__fini(&array->data[i]);
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

rcl_interfaces__srv__GetParameterTypes_Response__Array *
rcl_interfaces__srv__GetParameterTypes_Response__Array__create(size_t size)
{
  rcl_interfaces__srv__GetParameterTypes_Response__Array * array = (rcl_interfaces__srv__GetParameterTypes_Response__Array *)malloc(sizeof(rcl_interfaces__srv__GetParameterTypes_Response__Array));
  if (!array) {
    return NULL;
  }
  bool success = rcl_interfaces__srv__GetParameterTypes_Response__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rcl_interfaces__srv__GetParameterTypes_Response__Array__destroy(rcl_interfaces__srv__GetParameterTypes_Response__Array * array)
{
  if (array) {
    rcl_interfaces__srv__GetParameterTypes_Response__Array__fini(array);
  }
  free(array);
}
