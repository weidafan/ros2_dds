// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "geometry_msgs/msg/twist_with_covariance_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// header
#include "std_msgs/msg/header__functions.h"
// twist
#include "geometry_msgs/msg/twist_with_covariance__functions.h"

bool
geometry_msgs__msg__TwistWithCovarianceStamped__init(geometry_msgs__msg__TwistWithCovarianceStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  std_msgs__msg__Header__init(&msg->header);
  // twist
  geometry_msgs__msg__TwistWithCovariance__init(&msg->twist);
  return true;
}

void
geometry_msgs__msg__TwistWithCovarianceStamped__fini(geometry_msgs__msg__TwistWithCovarianceStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // twist
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->twist);
}

geometry_msgs__msg__TwistWithCovarianceStamped *
geometry_msgs__msg__TwistWithCovarianceStamped__create()
{
  geometry_msgs__msg__TwistWithCovarianceStamped * msg = (geometry_msgs__msg__TwistWithCovarianceStamped *)malloc(sizeof(geometry_msgs__msg__TwistWithCovarianceStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geometry_msgs__msg__TwistWithCovarianceStamped));
  bool success = geometry_msgs__msg__TwistWithCovarianceStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geometry_msgs__msg__TwistWithCovarianceStamped__destroy(geometry_msgs__msg__TwistWithCovarianceStamped * msg)
{
  if (msg) {
    geometry_msgs__msg__TwistWithCovarianceStamped__fini(msg);
  }
  free(msg);
}


bool
geometry_msgs__msg__TwistWithCovarianceStamped__Array__init(geometry_msgs__msg__TwistWithCovarianceStamped__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  geometry_msgs__msg__TwistWithCovarianceStamped * data = NULL;
  if (size) {
    data = (geometry_msgs__msg__TwistWithCovarianceStamped *)calloc(size, sizeof(geometry_msgs__msg__TwistWithCovarianceStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geometry_msgs__msg__TwistWithCovarianceStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geometry_msgs__msg__TwistWithCovarianceStamped__fini(&data[i - 1]);
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
geometry_msgs__msg__TwistWithCovarianceStamped__Array__fini(geometry_msgs__msg__TwistWithCovarianceStamped__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geometry_msgs__msg__TwistWithCovarianceStamped__fini(&array->data[i]);
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

geometry_msgs__msg__TwistWithCovarianceStamped__Array *
geometry_msgs__msg__TwistWithCovarianceStamped__Array__create(size_t size)
{
  geometry_msgs__msg__TwistWithCovarianceStamped__Array * array = (geometry_msgs__msg__TwistWithCovarianceStamped__Array *)malloc(sizeof(geometry_msgs__msg__TwistWithCovarianceStamped__Array));
  if (!array) {
    return NULL;
  }
  bool success = geometry_msgs__msg__TwistWithCovarianceStamped__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geometry_msgs__msg__TwistWithCovarianceStamped__Array__destroy(geometry_msgs__msg__TwistWithCovarianceStamped__Array * array)
{
  if (array) {
    geometry_msgs__msg__TwistWithCovarianceStamped__Array__fini(array);
  }
  free(array);
}
