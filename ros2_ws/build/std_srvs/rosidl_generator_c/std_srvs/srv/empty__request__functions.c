// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "std_srvs/srv/empty__request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
std_srvs__srv__Empty_Request__init(std_srvs__srv__Empty_Request * msg)
{
  if (!msg) {
    return false;
  }
  return true;
}

void
std_srvs__srv__Empty_Request__fini(std_srvs__srv__Empty_Request * msg)
{
  if (!msg) {
    return;
  }
}

std_srvs__srv__Empty_Request *
std_srvs__srv__Empty_Request__create()
{
  std_srvs__srv__Empty_Request * msg = (std_srvs__srv__Empty_Request *)malloc(sizeof(std_srvs__srv__Empty_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(std_srvs__srv__Empty_Request));
  bool success = std_srvs__srv__Empty_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
std_srvs__srv__Empty_Request__destroy(std_srvs__srv__Empty_Request * msg)
{
  if (msg) {
    std_srvs__srv__Empty_Request__fini(msg);
  }
  free(msg);
}


bool
std_srvs__srv__Empty_Request__Array__init(std_srvs__srv__Empty_Request__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  std_srvs__srv__Empty_Request * data = NULL;
  if (size) {
    data = (std_srvs__srv__Empty_Request *)calloc(size, sizeof(std_srvs__srv__Empty_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = std_srvs__srv__Empty_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        std_srvs__srv__Empty_Request__fini(&data[i - 1]);
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
std_srvs__srv__Empty_Request__Array__fini(std_srvs__srv__Empty_Request__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      std_srvs__srv__Empty_Request__fini(&array->data[i]);
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

std_srvs__srv__Empty_Request__Array *
std_srvs__srv__Empty_Request__Array__create(size_t size)
{
  std_srvs__srv__Empty_Request__Array * array = (std_srvs__srv__Empty_Request__Array *)malloc(sizeof(std_srvs__srv__Empty_Request__Array));
  if (!array) {
    return NULL;
  }
  bool success = std_srvs__srv__Empty_Request__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
std_srvs__srv__Empty_Request__Array__destroy(std_srvs__srv__Empty_Request__Array * array)
{
  if (array) {
    std_srvs__srv__Empty_Request__Array__fini(array);
  }
  free(array);
}
