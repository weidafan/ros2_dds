// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "lifecycle_msgs/srv/get_available_states__request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// node_name
#include "rosidl_generator_c/string_functions.h"

bool
lifecycle_msgs__srv__GetAvailableStates_Request__init(lifecycle_msgs__srv__GetAvailableStates_Request * msg)
{
  if (!msg) {
    return false;
  }
  // node_name
  rosidl_generator_c__String__init(&msg->node_name);
  return true;
}

void
lifecycle_msgs__srv__GetAvailableStates_Request__fini(lifecycle_msgs__srv__GetAvailableStates_Request * msg)
{
  if (!msg) {
    return;
  }
  // node_name
  rosidl_generator_c__String__fini(&msg->node_name);
}

lifecycle_msgs__srv__GetAvailableStates_Request *
lifecycle_msgs__srv__GetAvailableStates_Request__create()
{
  lifecycle_msgs__srv__GetAvailableStates_Request * msg = (lifecycle_msgs__srv__GetAvailableStates_Request *)malloc(sizeof(lifecycle_msgs__srv__GetAvailableStates_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lifecycle_msgs__srv__GetAvailableStates_Request));
  bool success = lifecycle_msgs__srv__GetAvailableStates_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lifecycle_msgs__srv__GetAvailableStates_Request__destroy(lifecycle_msgs__srv__GetAvailableStates_Request * msg)
{
  if (msg) {
    lifecycle_msgs__srv__GetAvailableStates_Request__fini(msg);
  }
  free(msg);
}


bool
lifecycle_msgs__srv__GetAvailableStates_Request__Array__init(lifecycle_msgs__srv__GetAvailableStates_Request__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  lifecycle_msgs__srv__GetAvailableStates_Request * data = NULL;
  if (size) {
    data = (lifecycle_msgs__srv__GetAvailableStates_Request *)calloc(size, sizeof(lifecycle_msgs__srv__GetAvailableStates_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lifecycle_msgs__srv__GetAvailableStates_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lifecycle_msgs__srv__GetAvailableStates_Request__fini(&data[i - 1]);
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
lifecycle_msgs__srv__GetAvailableStates_Request__Array__fini(lifecycle_msgs__srv__GetAvailableStates_Request__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lifecycle_msgs__srv__GetAvailableStates_Request__fini(&array->data[i]);
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

lifecycle_msgs__srv__GetAvailableStates_Request__Array *
lifecycle_msgs__srv__GetAvailableStates_Request__Array__create(size_t size)
{
  lifecycle_msgs__srv__GetAvailableStates_Request__Array * array = (lifecycle_msgs__srv__GetAvailableStates_Request__Array *)malloc(sizeof(lifecycle_msgs__srv__GetAvailableStates_Request__Array));
  if (!array) {
    return NULL;
  }
  bool success = lifecycle_msgs__srv__GetAvailableStates_Request__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lifecycle_msgs__srv__GetAvailableStates_Request__Array__destroy(lifecycle_msgs__srv__GetAvailableStates_Request__Array * array)
{
  if (array) {
    lifecycle_msgs__srv__GetAvailableStates_Request__Array__fini(array);
  }
  free(array);
}
