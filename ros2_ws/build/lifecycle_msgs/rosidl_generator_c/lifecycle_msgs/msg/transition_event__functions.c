// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "lifecycle_msgs/msg/transition_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// transition
#include "lifecycle_msgs/msg/transition__functions.h"
// start_state
// goal_state
#include "lifecycle_msgs/msg/state__functions.h"

bool
lifecycle_msgs__msg__TransitionEvent__init(lifecycle_msgs__msg__TransitionEvent * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // transition
  lifecycle_msgs__msg__Transition__init(&msg->transition);
  // start_state
  lifecycle_msgs__msg__State__init(&msg->start_state);
  // goal_state
  lifecycle_msgs__msg__State__init(&msg->goal_state);
  return true;
}

void
lifecycle_msgs__msg__TransitionEvent__fini(lifecycle_msgs__msg__TransitionEvent * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // transition
  lifecycle_msgs__msg__Transition__fini(&msg->transition);
  // start_state
  lifecycle_msgs__msg__State__fini(&msg->start_state);
  // goal_state
  lifecycle_msgs__msg__State__fini(&msg->goal_state);
}

lifecycle_msgs__msg__TransitionEvent *
lifecycle_msgs__msg__TransitionEvent__create()
{
  lifecycle_msgs__msg__TransitionEvent * msg = (lifecycle_msgs__msg__TransitionEvent *)malloc(sizeof(lifecycle_msgs__msg__TransitionEvent));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lifecycle_msgs__msg__TransitionEvent));
  bool success = lifecycle_msgs__msg__TransitionEvent__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lifecycle_msgs__msg__TransitionEvent__destroy(lifecycle_msgs__msg__TransitionEvent * msg)
{
  if (msg) {
    lifecycle_msgs__msg__TransitionEvent__fini(msg);
  }
  free(msg);
}


bool
lifecycle_msgs__msg__TransitionEvent__Array__init(lifecycle_msgs__msg__TransitionEvent__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  lifecycle_msgs__msg__TransitionEvent * data = NULL;
  if (size) {
    data = (lifecycle_msgs__msg__TransitionEvent *)calloc(size, sizeof(lifecycle_msgs__msg__TransitionEvent));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lifecycle_msgs__msg__TransitionEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lifecycle_msgs__msg__TransitionEvent__fini(&data[i - 1]);
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
lifecycle_msgs__msg__TransitionEvent__Array__fini(lifecycle_msgs__msg__TransitionEvent__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lifecycle_msgs__msg__TransitionEvent__fini(&array->data[i]);
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

lifecycle_msgs__msg__TransitionEvent__Array *
lifecycle_msgs__msg__TransitionEvent__Array__create(size_t size)
{
  lifecycle_msgs__msg__TransitionEvent__Array * array = (lifecycle_msgs__msg__TransitionEvent__Array *)malloc(sizeof(lifecycle_msgs__msg__TransitionEvent__Array));
  if (!array) {
    return NULL;
  }
  bool success = lifecycle_msgs__msg__TransitionEvent__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lifecycle_msgs__msg__TransitionEvent__Array__destroy(lifecycle_msgs__msg__TransitionEvent__Array * array)
{
  if (array) {
    lifecycle_msgs__msg__TransitionEvent__Array__fini(array);
  }
  free(array);
}
