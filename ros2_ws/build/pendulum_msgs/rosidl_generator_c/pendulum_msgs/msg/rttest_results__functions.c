// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "pendulum_msgs/msg/rttest_results__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// stamp
#include "builtin_interfaces/msg/time__functions.h"
// command
#include "pendulum_msgs/msg/joint_command__functions.h"
// state
#include "pendulum_msgs/msg/joint_state__functions.h"

bool
pendulum_msgs__msg__RttestResults__init(pendulum_msgs__msg__RttestResults * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  builtin_interfaces__msg__Time__init(&msg->stamp);
  // command
  pendulum_msgs__msg__JointCommand__init(&msg->command);
  // state
  pendulum_msgs__msg__JointState__init(&msg->state);
  // cur_latency
  // mean_latency
  // min_latency
  // max_latency
  // minor_pagefaults
  // major_pagefaults
  return true;
}

void
pendulum_msgs__msg__RttestResults__fini(pendulum_msgs__msg__RttestResults * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // command
  pendulum_msgs__msg__JointCommand__fini(&msg->command);
  // state
  pendulum_msgs__msg__JointState__fini(&msg->state);
  // cur_latency
  // mean_latency
  // min_latency
  // max_latency
  // minor_pagefaults
  // major_pagefaults
}

pendulum_msgs__msg__RttestResults *
pendulum_msgs__msg__RttestResults__create()
{
  pendulum_msgs__msg__RttestResults * msg = (pendulum_msgs__msg__RttestResults *)malloc(sizeof(pendulum_msgs__msg__RttestResults));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pendulum_msgs__msg__RttestResults));
  bool success = pendulum_msgs__msg__RttestResults__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pendulum_msgs__msg__RttestResults__destroy(pendulum_msgs__msg__RttestResults * msg)
{
  if (msg) {
    pendulum_msgs__msg__RttestResults__fini(msg);
  }
  free(msg);
}


bool
pendulum_msgs__msg__RttestResults__Array__init(pendulum_msgs__msg__RttestResults__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  pendulum_msgs__msg__RttestResults * data = NULL;
  if (size) {
    data = (pendulum_msgs__msg__RttestResults *)calloc(size, sizeof(pendulum_msgs__msg__RttestResults));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pendulum_msgs__msg__RttestResults__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pendulum_msgs__msg__RttestResults__fini(&data[i - 1]);
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
pendulum_msgs__msg__RttestResults__Array__fini(pendulum_msgs__msg__RttestResults__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pendulum_msgs__msg__RttestResults__fini(&array->data[i]);
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

pendulum_msgs__msg__RttestResults__Array *
pendulum_msgs__msg__RttestResults__Array__create(size_t size)
{
  pendulum_msgs__msg__RttestResults__Array * array = (pendulum_msgs__msg__RttestResults__Array *)malloc(sizeof(pendulum_msgs__msg__RttestResults__Array));
  if (!array) {
    return NULL;
  }
  bool success = pendulum_msgs__msg__RttestResults__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pendulum_msgs__msg__RttestResults__Array__destroy(pendulum_msgs__msg__RttestResults__Array * array)
{
  if (array) {
    pendulum_msgs__msg__RttestResults__Array__fini(array);
  }
  free(array);
}
