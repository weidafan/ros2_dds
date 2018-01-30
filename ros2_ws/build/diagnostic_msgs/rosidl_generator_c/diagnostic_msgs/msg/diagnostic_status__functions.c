// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "diagnostic_msgs/msg/diagnostic_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// name
// message
// hardware_id
#include "rosidl_generator_c/string_functions.h"
// values
#include "diagnostic_msgs/msg/key_value__functions.h"

bool
diagnostic_msgs__msg__DiagnosticStatus__init(diagnostic_msgs__msg__DiagnosticStatus * msg)
{
  if (!msg) {
    return false;
  }
  // level
  // name
  rosidl_generator_c__String__init(&msg->name);
  // message
  rosidl_generator_c__String__init(&msg->message);
  // hardware_id
  rosidl_generator_c__String__init(&msg->hardware_id);
  // values
  diagnostic_msgs__msg__KeyValue__Array__init(&msg->values, 0);
  return true;
}

void
diagnostic_msgs__msg__DiagnosticStatus__fini(diagnostic_msgs__msg__DiagnosticStatus * msg)
{
  if (!msg) {
    return;
  }
  // level
  // name
  rosidl_generator_c__String__fini(&msg->name);
  // message
  rosidl_generator_c__String__fini(&msg->message);
  // hardware_id
  rosidl_generator_c__String__fini(&msg->hardware_id);
  // values
  diagnostic_msgs__msg__KeyValue__Array__fini(&msg->values);
}

diagnostic_msgs__msg__DiagnosticStatus *
diagnostic_msgs__msg__DiagnosticStatus__create()
{
  diagnostic_msgs__msg__DiagnosticStatus * msg = (diagnostic_msgs__msg__DiagnosticStatus *)malloc(sizeof(diagnostic_msgs__msg__DiagnosticStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(diagnostic_msgs__msg__DiagnosticStatus));
  bool success = diagnostic_msgs__msg__DiagnosticStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
diagnostic_msgs__msg__DiagnosticStatus__destroy(diagnostic_msgs__msg__DiagnosticStatus * msg)
{
  if (msg) {
    diagnostic_msgs__msg__DiagnosticStatus__fini(msg);
  }
  free(msg);
}


bool
diagnostic_msgs__msg__DiagnosticStatus__Array__init(diagnostic_msgs__msg__DiagnosticStatus__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  diagnostic_msgs__msg__DiagnosticStatus * data = NULL;
  if (size) {
    data = (diagnostic_msgs__msg__DiagnosticStatus *)calloc(size, sizeof(diagnostic_msgs__msg__DiagnosticStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = diagnostic_msgs__msg__DiagnosticStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        diagnostic_msgs__msg__DiagnosticStatus__fini(&data[i - 1]);
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
diagnostic_msgs__msg__DiagnosticStatus__Array__fini(diagnostic_msgs__msg__DiagnosticStatus__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      diagnostic_msgs__msg__DiagnosticStatus__fini(&array->data[i]);
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

diagnostic_msgs__msg__DiagnosticStatus__Array *
diagnostic_msgs__msg__DiagnosticStatus__Array__create(size_t size)
{
  diagnostic_msgs__msg__DiagnosticStatus__Array * array = (diagnostic_msgs__msg__DiagnosticStatus__Array *)malloc(sizeof(diagnostic_msgs__msg__DiagnosticStatus__Array));
  if (!array) {
    return NULL;
  }
  bool success = diagnostic_msgs__msg__DiagnosticStatus__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
diagnostic_msgs__msg__DiagnosticStatus__Array__destroy(diagnostic_msgs__msg__DiagnosticStatus__Array * array)
{
  if (array) {
    diagnostic_msgs__msg__DiagnosticStatus__Array__fini(array);
  }
  free(array);
}
