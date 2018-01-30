// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "geometry_msgs/msg/inertia__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// com
#include "geometry_msgs/msg/vector3__functions.h"

bool
geometry_msgs__msg__Inertia__init(geometry_msgs__msg__Inertia * msg)
{
  if (!msg) {
    return false;
  }
  // m
  // com
  geometry_msgs__msg__Vector3__init(&msg->com);
  // ixx
  // ixy
  // ixz
  // iyy
  // iyz
  // izz
  return true;
}

void
geometry_msgs__msg__Inertia__fini(geometry_msgs__msg__Inertia * msg)
{
  if (!msg) {
    return;
  }
  // m
  // com
  geometry_msgs__msg__Vector3__fini(&msg->com);
  // ixx
  // ixy
  // ixz
  // iyy
  // iyz
  // izz
}

geometry_msgs__msg__Inertia *
geometry_msgs__msg__Inertia__create()
{
  geometry_msgs__msg__Inertia * msg = (geometry_msgs__msg__Inertia *)malloc(sizeof(geometry_msgs__msg__Inertia));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geometry_msgs__msg__Inertia));
  bool success = geometry_msgs__msg__Inertia__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
geometry_msgs__msg__Inertia__destroy(geometry_msgs__msg__Inertia * msg)
{
  if (msg) {
    geometry_msgs__msg__Inertia__fini(msg);
  }
  free(msg);
}


bool
geometry_msgs__msg__Inertia__Array__init(geometry_msgs__msg__Inertia__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  geometry_msgs__msg__Inertia * data = NULL;
  if (size) {
    data = (geometry_msgs__msg__Inertia *)calloc(size, sizeof(geometry_msgs__msg__Inertia));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geometry_msgs__msg__Inertia__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geometry_msgs__msg__Inertia__fini(&data[i - 1]);
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
geometry_msgs__msg__Inertia__Array__fini(geometry_msgs__msg__Inertia__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      geometry_msgs__msg__Inertia__fini(&array->data[i]);
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

geometry_msgs__msg__Inertia__Array *
geometry_msgs__msg__Inertia__Array__create(size_t size)
{
  geometry_msgs__msg__Inertia__Array * array = (geometry_msgs__msg__Inertia__Array *)malloc(sizeof(geometry_msgs__msg__Inertia__Array));
  if (!array) {
    return NULL;
  }
  bool success = geometry_msgs__msg__Inertia__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
geometry_msgs__msg__Inertia__Array__destroy(geometry_msgs__msg__Inertia__Array * array)
{
  if (array) {
    geometry_msgs__msg__Inertia__Array__fini(array);
  }
  free(array);
}
