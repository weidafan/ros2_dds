// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "composition/srv/load_node__request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// package_name
// plugin_name
#include "rosidl_generator_c/string_functions.h"

bool
composition__srv__LoadNode_Request__init(composition__srv__LoadNode_Request * msg)
{
  if (!msg) {
    return false;
  }
  // package_name
  rosidl_generator_c__String__init(&msg->package_name);
  // plugin_name
  rosidl_generator_c__String__init(&msg->plugin_name);
  return true;
}

void
composition__srv__LoadNode_Request__fini(composition__srv__LoadNode_Request * msg)
{
  if (!msg) {
    return;
  }
  // package_name
  rosidl_generator_c__String__fini(&msg->package_name);
  // plugin_name
  rosidl_generator_c__String__fini(&msg->plugin_name);
}

composition__srv__LoadNode_Request *
composition__srv__LoadNode_Request__create()
{
  composition__srv__LoadNode_Request * msg = (composition__srv__LoadNode_Request *)malloc(sizeof(composition__srv__LoadNode_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(composition__srv__LoadNode_Request));
  bool success = composition__srv__LoadNode_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
composition__srv__LoadNode_Request__destroy(composition__srv__LoadNode_Request * msg)
{
  if (msg) {
    composition__srv__LoadNode_Request__fini(msg);
  }
  free(msg);
}


bool
composition__srv__LoadNode_Request__Array__init(composition__srv__LoadNode_Request__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  composition__srv__LoadNode_Request * data = NULL;
  if (size) {
    data = (composition__srv__LoadNode_Request *)calloc(size, sizeof(composition__srv__LoadNode_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = composition__srv__LoadNode_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        composition__srv__LoadNode_Request__fini(&data[i - 1]);
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
composition__srv__LoadNode_Request__Array__fini(composition__srv__LoadNode_Request__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      composition__srv__LoadNode_Request__fini(&array->data[i]);
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

composition__srv__LoadNode_Request__Array *
composition__srv__LoadNode_Request__Array__create(size_t size)
{
  composition__srv__LoadNode_Request__Array * array = (composition__srv__LoadNode_Request__Array *)malloc(sizeof(composition__srv__LoadNode_Request__Array));
  if (!array) {
    return NULL;
  }
  bool success = composition__srv__LoadNode_Request__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
composition__srv__LoadNode_Request__Array__destroy(composition__srv__LoadNode_Request__Array * array)
{
  if (array) {
    composition__srv__LoadNode_Request__Array__fini(array);
  }
  free(array);
}