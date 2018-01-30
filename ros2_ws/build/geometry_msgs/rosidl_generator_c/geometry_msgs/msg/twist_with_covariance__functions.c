// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "geometry_msgs/msg/twist_with_covariance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// twist
#include "geometry_msgs/msg/twist__functions.h"

bool
geometry_msgs__msg__TwistWithCovariance__init(geometry_msgs__msg__TwistWithCovariance * msg)
{
  if (!msg) {
    return false;
  }
  // twist
  geometry_msgs__msg__Twist__init(&msg->twist);
  // covariance
  return true;
}

void
geometry_msgs__msg__TwistWithCovariance__fini(geometry_msgs__msg__TwistWithCovariance * msg)
{
  if (!msg) {
    return;
  }
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // covariance
}

geometry_msgs__msg__TwistWithCovariance *
geometry_msgs__msg__TwistWithCovariance__create()
{
  geometry_msgs__msg__TwistWithCovariance * msg = (geometry_msgs__msg__TwistWithCovariance *)malloc(sizeof(geometry_msgs__msg__TwistWithCovariance));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geometry_msgs__msg__TwistWithCovariance));
  bool success = geometry_msgs__msg__TwistWithCovariance__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geometry_msgs__msg__TwistWithCovariance__destroy(geometry_msgs__msg__TwistWithCovariance * msg)
{
  if (msg) {
    geometry_msgs__msg__TwistWithCovariance__fini(msg);
  }
  free(msg);
}


bool
geometry_msgs__msg__TwistWithCovariance__Array__init(geometry_msgs__msg__TwistWithCovariance__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  geometry_msgs__msg__TwistWithCovariance * data = NULL;
  if (size) {
    data = (geometry_msgs__msg__TwistWithCovariance *)calloc(size, sizeof(geometry_msgs__msg__TwistWithCovariance));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geometry_msgs__msg__TwistWithCovariance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geometry_msgs__msg__TwistWithCovariance__fini(&data[i - 1]);
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
geometry_msgs__msg__TwistWithCovariance__Array__fini(geometry_msgs__msg__TwistWithCovariance__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geometry_msgs__msg__TwistWithCovariance__fini(&array->data[i]);
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

geometry_msgs__msg__TwistWithCovariance__Array *
geometry_msgs__msg__TwistWithCovariance__Array__create(size_t size)
{
  geometry_msgs__msg__TwistWithCovariance__Array * array = (geometry_msgs__msg__TwistWithCovariance__Array *)malloc(sizeof(geometry_msgs__msg__TwistWithCovariance__Array));
  if (!array) {
    return NULL;
  }
  bool success = geometry_msgs__msg__TwistWithCovariance__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geometry_msgs__msg__TwistWithCovariance__Array__destroy(geometry_msgs__msg__TwistWithCovariance__Array * array)
{
  if (array) {
    geometry_msgs__msg__TwistWithCovariance__Array__fini(array);
  }
  free(array);
}
