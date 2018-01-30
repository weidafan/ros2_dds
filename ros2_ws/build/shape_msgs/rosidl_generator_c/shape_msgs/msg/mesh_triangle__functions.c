// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "shape_msgs/msg/mesh_triangle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
shape_msgs__msg__MeshTriangle__init(shape_msgs__msg__MeshTriangle * msg)
{
  if (!msg) {
    return false;
  }
  // vertex_indices
  return true;
}

void
shape_msgs__msg__MeshTriangle__fini(shape_msgs__msg__MeshTriangle * msg)
{
  if (!msg) {
    return;
  }
  // vertex_indices
}

shape_msgs__msg__MeshTriangle *
shape_msgs__msg__MeshTriangle__create()
{
  shape_msgs__msg__MeshTriangle * msg = (shape_msgs__msg__MeshTriangle *)malloc(sizeof(shape_msgs__msg__MeshTriangle));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shape_msgs__msg__MeshTriangle));
  bool success = shape_msgs__msg__MeshTriangle__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
shape_msgs__msg__MeshTriangle__destroy(shape_msgs__msg__MeshTriangle * msg)
{
  if (msg) {
    shape_msgs__msg__MeshTriangle__fini(msg);
  }
  free(msg);
}


bool
shape_msgs__msg__MeshTriangle__Array__init(shape_msgs__msg__MeshTriangle__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  shape_msgs__msg__MeshTriangle * data = NULL;
  if (size) {
    data = (shape_msgs__msg__MeshTriangle *)calloc(size, sizeof(shape_msgs__msg__MeshTriangle));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shape_msgs__msg__MeshTriangle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shape_msgs__msg__MeshTriangle__fini(&data[i - 1]);
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
shape_msgs__msg__MeshTriangle__Array__fini(shape_msgs__msg__MeshTriangle__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      shape_msgs__msg__MeshTriangle__fini(&array->data[i]);
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

shape_msgs__msg__MeshTriangle__Array *
shape_msgs__msg__MeshTriangle__Array__create(size_t size)
{
  shape_msgs__msg__MeshTriangle__Array * array = (shape_msgs__msg__MeshTriangle__Array *)malloc(sizeof(shape_msgs__msg__MeshTriangle__Array));
  if (!array) {
    return NULL;
  }
  bool success = shape_msgs__msg__MeshTriangle__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
shape_msgs__msg__MeshTriangle__Array__destroy(shape_msgs__msg__MeshTriangle__Array * array)
{
  if (array) {
    shape_msgs__msg__MeshTriangle__Array__fini(array);
  }
  free(array);
}