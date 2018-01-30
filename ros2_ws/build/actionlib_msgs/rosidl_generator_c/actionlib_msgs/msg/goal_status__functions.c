// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "actionlib_msgs/msg/goal_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// goal_id
#include "actionlib_msgs/msg/goal_id__functions.h"
// text
#include "rosidl_generator_c/string_functions.h"

bool
actionlib_msgs__msg__GoalStatus__init(actionlib_msgs__msg__GoalStatus * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  actionlib_msgs__msg__GoalID__init(&msg->goal_id);
  // status
  // text
  rosidl_generator_c__String__init(&msg->text);
  return true;
}

void
actionlib_msgs__msg__GoalStatus__fini(actionlib_msgs__msg__GoalStatus * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  actionlib_msgs__msg__GoalID__fini(&msg->goal_id);
  // status
  // text
  rosidl_generator_c__String__fini(&msg->text);
}

actionlib_msgs__msg__GoalStatus *
actionlib_msgs__msg__GoalStatus__create()
{
  actionlib_msgs__msg__GoalStatus * msg = (actionlib_msgs__msg__GoalStatus *)malloc(sizeof(actionlib_msgs__msg__GoalStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(actionlib_msgs__msg__GoalStatus));
  bool success = actionlib_msgs__msg__GoalStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
actionlib_msgs__msg__GoalStatus__destroy(actionlib_msgs__msg__GoalStatus * msg)
{
  if (msg) {
    actionlib_msgs__msg__GoalStatus__fini(msg);
  }
  free(msg);
}


bool
actionlib_msgs__msg__GoalStatus__Array__init(actionlib_msgs__msg__GoalStatus__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  actionlib_msgs__msg__GoalStatus * data = NULL;
  if (size) {
    data = (actionlib_msgs__msg__GoalStatus *)calloc(size, sizeof(actionlib_msgs__msg__GoalStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = actionlib_msgs__msg__GoalStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        actionlib_msgs__msg__GoalStatus__fini(&data[i - 1]);
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
actionlib_msgs__msg__GoalStatus__Array__fini(actionlib_msgs__msg__GoalStatus__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      actionlib_msgs__msg__GoalStatus__fini(&array->data[i]);
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

actionlib_msgs__msg__GoalStatus__Array *
actionlib_msgs__msg__GoalStatus__Array__create(size_t size)
{
  actionlib_msgs__msg__GoalStatus__Array * array = (actionlib_msgs__msg__GoalStatus__Array *)malloc(sizeof(actionlib_msgs__msg__GoalStatus__Array));
  if (!array) {
    return NULL;
  }
  bool success = actionlib_msgs__msg__GoalStatus__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
actionlib_msgs__msg__GoalStatus__Array__destroy(actionlib_msgs__msg__GoalStatus__Array * array)
{
  if (array) {
    actionlib_msgs__msg__GoalStatus__Array__fini(array);
  }
  free(array);
}
