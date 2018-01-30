// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "sensor_msgs/msg/multi_dof_joint_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// header
#include "std_msgs/msg/header__functions.h"
// joint_names
#include "rosidl_generator_c/string_functions.h"
// transforms
#include "geometry_msgs/msg/transform__functions.h"
// twist
#include "geometry_msgs/msg/twist__functions.h"
// wrench
#include "geometry_msgs/msg/wrench__functions.h"

bool
sensor_msgs__msg__MultiDOFJointState__init(sensor_msgs__msg__MultiDOFJointState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  std_msgs__msg__Header__init(&msg->header);
  // joint_names
  rosidl_generator_c__String__Array__init(&msg->joint_names, 0);
  // transforms
  geometry_msgs__msg__Transform__Array__init(&msg->transforms, 0);
  // twist
  geometry_msgs__msg__Twist__Array__init(&msg->twist, 0);
  // wrench
  geometry_msgs__msg__Wrench__Array__init(&msg->wrench, 0);
  return true;
}

void
sensor_msgs__msg__MultiDOFJointState__fini(sensor_msgs__msg__MultiDOFJointState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // joint_names
  rosidl_generator_c__String__Array__fini(&msg->joint_names);
  // transforms
  geometry_msgs__msg__Transform__Array__fini(&msg->transforms);
  // twist
  geometry_msgs__msg__Twist__Array__fini(&msg->twist);
  // wrench
  geometry_msgs__msg__Wrench__Array__fini(&msg->wrench);
}

sensor_msgs__msg__MultiDOFJointState *
sensor_msgs__msg__MultiDOFJointState__create()
{
  sensor_msgs__msg__MultiDOFJointState * msg = (sensor_msgs__msg__MultiDOFJointState *)malloc(sizeof(sensor_msgs__msg__MultiDOFJointState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__MultiDOFJointState));
  bool success = sensor_msgs__msg__MultiDOFJointState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__MultiDOFJointState__destroy(sensor_msgs__msg__MultiDOFJointState * msg)
{
  if (msg) {
    sensor_msgs__msg__MultiDOFJointState__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__MultiDOFJointState__Array__init(sensor_msgs__msg__MultiDOFJointState__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__MultiDOFJointState * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__MultiDOFJointState *)calloc(size, sizeof(sensor_msgs__msg__MultiDOFJointState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__MultiDOFJointState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__MultiDOFJointState__fini(&data[i - 1]);
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
sensor_msgs__msg__MultiDOFJointState__Array__fini(sensor_msgs__msg__MultiDOFJointState__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__MultiDOFJointState__fini(&array->data[i]);
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

sensor_msgs__msg__MultiDOFJointState__Array *
sensor_msgs__msg__MultiDOFJointState__Array__create(size_t size)
{
  sensor_msgs__msg__MultiDOFJointState__Array * array = (sensor_msgs__msg__MultiDOFJointState__Array *)malloc(sizeof(sensor_msgs__msg__MultiDOFJointState__Array));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__MultiDOFJointState__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__MultiDOFJointState__Array__destroy(sensor_msgs__msg__MultiDOFJointState__Array * array)
{
  if (array) {
    sensor_msgs__msg__MultiDOFJointState__Array__fini(array);
  }
  free(array);
}
