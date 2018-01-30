// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "tf2_msgs/msg/tf2_error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// error_string
#include "rosidl_generator_c/string_functions.h"

bool
tf2_msgs__msg__TF2Error__init(tf2_msgs__msg__TF2Error * msg)
{
  if (!msg) {
    return false;
  }
  // error
  // error_string
  rosidl_generator_c__String__init(&msg->error_string);
  return true;
}

void
tf2_msgs__msg__TF2Error__fini(tf2_msgs__msg__TF2Error * msg)
{
  if (!msg) {
    return;
  }
  // error
  // error_string
  rosidl_generator_c__String__fini(&msg->error_string);
}

tf2_msgs__msg__TF2Error *
tf2_msgs__msg__TF2Error__create()
{
  tf2_msgs__msg__TF2Error * msg = (tf2_msgs__msg__TF2Error *)malloc(sizeof(tf2_msgs__msg__TF2Error));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__msg__TF2Error));
  bool success = tf2_msgs__msg__TF2Error__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__msg__TF2Error__destroy(tf2_msgs__msg__TF2Error * msg)
{
  if (msg) {
    tf2_msgs__msg__TF2Error__fini(msg);
  }
  free(msg);
}


bool
tf2_msgs__msg__TF2Error__Array__init(tf2_msgs__msg__TF2Error__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  tf2_msgs__msg__TF2Error * data = NULL;
  if (size) {
    data = (tf2_msgs__msg__TF2Error *)calloc(size, sizeof(tf2_msgs__msg__TF2Error));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__msg__TF2Error__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__msg__TF2Error__fini(&data[i - 1]);
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
tf2_msgs__msg__TF2Error__Array__fini(tf2_msgs__msg__TF2Error__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tf2_msgs__msg__TF2Error__fini(&array->data[i]);
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

tf2_msgs__msg__TF2Error__Array *
tf2_msgs__msg__TF2Error__Array__create(size_t size)
{
  tf2_msgs__msg__TF2Error__Array * array = (tf2_msgs__msg__TF2Error__Array *)malloc(sizeof(tf2_msgs__msg__TF2Error__Array));
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__msg__TF2Error__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tf2_msgs__msg__TF2Error__Array__destroy(tf2_msgs__msg__TF2Error__Array * array)
{
  if (array) {
    tf2_msgs__msg__TF2Error__Array__fini(array);
  }
  free(array);
}
