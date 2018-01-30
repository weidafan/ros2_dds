// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "lifecycle_msgs/srv/get_available_transitions__response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// available_transitions
#include "lifecycle_msgs/msg/transition_description__functions.h"

bool
lifecycle_msgs__srv__GetAvailableTransitions_Response__init(lifecycle_msgs__srv__GetAvailableTransitions_Response * msg)
{
  if (!msg) {
    return false;
  }
  // available_transitions
  lifecycle_msgs__msg__TransitionDescription__Array__init(&msg->available_transitions, 0);
  return true;
}

void
lifecycle_msgs__srv__GetAvailableTransitions_Response__fini(lifecycle_msgs__srv__GetAvailableTransitions_Response * msg)
{
  if (!msg) {
    return;
  }
  // available_transitions
  lifecycle_msgs__msg__TransitionDescription__Array__fini(&msg->available_transitions);
}

lifecycle_msgs__srv__GetAvailableTransitions_Response *
lifecycle_msgs__srv__GetAvailableTransitions_Response__create()
{
  lifecycle_msgs__srv__GetAvailableTransitions_Response * msg = (lifecycle_msgs__srv__GetAvailableTransitions_Response *)malloc(sizeof(lifecycle_msgs__srv__GetAvailableTransitions_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lifecycle_msgs__srv__GetAvailableTransitions_Response));
  bool success = lifecycle_msgs__srv__GetAvailableTransitions_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lifecycle_msgs__srv__GetAvailableTransitions_Response__destroy(lifecycle_msgs__srv__GetAvailableTransitions_Response * msg)
{
  if (msg) {
    lifecycle_msgs__srv__GetAvailableTransitions_Response__fini(msg);
  }
  free(msg);
}


bool
lifecycle_msgs__srv__GetAvailableTransitions_Response__Array__init(lifecycle_msgs__srv__GetAvailableTransitions_Response__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  lifecycle_msgs__srv__GetAvailableTransitions_Response * data = NULL;
  if (size) {
    data = (lifecycle_msgs__srv__GetAvailableTransitions_Response *)calloc(size, sizeof(lifecycle_msgs__srv__GetAvailableTransitions_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lifecycle_msgs__srv__GetAvailableTransitions_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lifecycle_msgs__srv__GetAvailableTransitions_Response__fini(&data[i - 1]);
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
lifecycle_msgs__srv__GetAvailableTransitions_Response__Array__fini(lifecycle_msgs__srv__GetAvailableTransitions_Response__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lifecycle_msgs__srv__GetAvailableTransitions_Response__fini(&array->data[i]);
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

lifecycle_msgs__srv__GetAvailableTransitions_Response__Array *
lifecycle_msgs__srv__GetAvailableTransitions_Response__Array__create(size_t size)
{
  lifecycle_msgs__srv__GetAvailableTransitions_Response__Array * array = (lifecycle_msgs__srv__GetAvailableTransitions_Response__Array *)malloc(sizeof(lifecycle_msgs__srv__GetAvailableTransitions_Response__Array));
  if (!array) {
    return NULL;
  }
  bool success = lifecycle_msgs__srv__GetAvailableTransitions_Response__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lifecycle_msgs__srv__GetAvailableTransitions_Response__Array__destroy(lifecycle_msgs__srv__GetAvailableTransitions_Response__Array * array)
{
  if (array) {
    lifecycle_msgs__srv__GetAvailableTransitions_Response__Array__fini(array);
  }
  free(array);
}
