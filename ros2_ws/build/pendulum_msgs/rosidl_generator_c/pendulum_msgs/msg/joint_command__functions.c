// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "pendulum_msgs/msg/joint_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
pendulum_msgs__msg__JointCommand__init(pendulum_msgs__msg__JointCommand * msg)
{
  if (!msg) {
    return false;
  }
  // position
  return true;
}

void
pendulum_msgs__msg__JointCommand__fini(pendulum_msgs__msg__JointCommand * msg)
{
  if (!msg) {
    return;
  }
  // position
}

pendulum_msgs__msg__JointCommand *
pendulum_msgs__msg__JointCommand__create()
{
  pendulum_msgs__msg__JointCommand * msg = (pendulum_msgs__msg__JointCommand *)malloc(sizeof(pendulum_msgs__msg__JointCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pendulum_msgs__msg__JointCommand));
  bool success = pendulum_msgs__msg__JointCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
pendulum_msgs__msg__JointCommand__destroy(pendulum_msgs__msg__JointCommand * msg)
{
  if (msg) {
    pendulum_msgs__msg__JointCommand__fini(msg);
  }
  free(msg);
}


bool
pendulum_msgs__msg__JointCommand__Array__init(pendulum_msgs__msg__JointCommand__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  pendulum_msgs__msg__JointCommand * data = NULL;
  if (size) {
    data = (pendulum_msgs__msg__JointCommand *)calloc(size, sizeof(pendulum_msgs__msg__JointCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pendulum_msgs__msg__JointCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pendulum_msgs__msg__JointCommand__fini(&data[i - 1]);
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
pendulum_msgs__msg__JointCommand__Array__fini(pendulum_msgs__msg__JointCommand__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pendulum_msgs__msg__JointCommand__fini(&array->data[i]);
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

pendulum_msgs__msg__JointCommand__Array *
pendulum_msgs__msg__JointCommand__Array__create(size_t size)
{
  pendulum_msgs__msg__JointCommand__Array * array = (pendulum_msgs__msg__JointCommand__Array *)malloc(sizeof(pendulum_msgs__msg__JointCommand__Array));
  if (!array) {
    return NULL;
  }
  bool success = pendulum_msgs__msg__JointCommand__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
pendulum_msgs__msg__JointCommand__Array__destroy(pendulum_msgs__msg__JointCommand__Array * array)
{
  if (array) {
    pendulum_msgs__msg__JointCommand__Array__fini(array);
  }
  free(array);
}
