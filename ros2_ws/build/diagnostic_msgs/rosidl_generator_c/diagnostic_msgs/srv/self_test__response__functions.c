// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "diagnostic_msgs/srv/self_test__response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// id
#include "rosidl_generator_c/string_functions.h"
// status
#include "diagnostic_msgs/msg/diagnostic_status__functions.h"

bool
diagnostic_msgs__srv__SelfTest_Response__init(diagnostic_msgs__srv__SelfTest_Response * msg)
{
  if (!msg) {
    return false;
  }
  // id
  rosidl_generator_c__String__init(&msg->id);
  // passed
  // status
  diagnostic_msgs__msg__DiagnosticStatus__Array__init(&msg->status, 0);
  return true;
}

void
diagnostic_msgs__srv__SelfTest_Response__fini(diagnostic_msgs__srv__SelfTest_Response * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_generator_c__String__fini(&msg->id);
  // passed
  // status
  diagnostic_msgs__msg__DiagnosticStatus__Array__fini(&msg->status);
}

diagnostic_msgs__srv__SelfTest_Response *
diagnostic_msgs__srv__SelfTest_Response__create()
{
  diagnostic_msgs__srv__SelfTest_Response * msg = (diagnostic_msgs__srv__SelfTest_Response *)malloc(sizeof(diagnostic_msgs__srv__SelfTest_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(diagnostic_msgs__srv__SelfTest_Response));
  bool success = diagnostic_msgs__srv__SelfTest_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
diagnostic_msgs__srv__SelfTest_Response__destroy(diagnostic_msgs__srv__SelfTest_Response * msg)
{
  if (msg) {
    diagnostic_msgs__srv__SelfTest_Response__fini(msg);
  }
  free(msg);
}


bool
diagnostic_msgs__srv__SelfTest_Response__Array__init(diagnostic_msgs__srv__SelfTest_Response__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  diagnostic_msgs__srv__SelfTest_Response * data = NULL;
  if (size) {
    data = (diagnostic_msgs__srv__SelfTest_Response *)calloc(size, sizeof(diagnostic_msgs__srv__SelfTest_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = diagnostic_msgs__srv__SelfTest_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        diagnostic_msgs__srv__SelfTest_Response__fini(&data[i - 1]);
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
diagnostic_msgs__srv__SelfTest_Response__Array__fini(diagnostic_msgs__srv__SelfTest_Response__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      diagnostic_msgs__srv__SelfTest_Response__fini(&array->data[i]);
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

diagnostic_msgs__srv__SelfTest_Response__Array *
diagnostic_msgs__srv__SelfTest_Response__Array__create(size_t size)
{
  diagnostic_msgs__srv__SelfTest_Response__Array * array = (diagnostic_msgs__srv__SelfTest_Response__Array *)malloc(sizeof(diagnostic_msgs__srv__SelfTest_Response__Array));
  if (!array) {
    return NULL;
  }
  bool success = diagnostic_msgs__srv__SelfTest_Response__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
diagnostic_msgs__srv__SelfTest_Response__Array__destroy(diagnostic_msgs__srv__SelfTest_Response__Array * array)
{
  if (array) {
    diagnostic_msgs__srv__SelfTest_Response__Array__fini(array);
  }
  free(array);
}
