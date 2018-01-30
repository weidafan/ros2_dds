// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "shape_msgs/msg/mesh__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// triangles
#include "shape_msgs/msg/mesh_triangle__functions.h"
// vertices
#include "geometry_msgs/msg/point__functions.h"

bool
shape_msgs__msg__Mesh__init(shape_msgs__msg__Mesh * msg)
{
  if (!msg) {
    return false;
  }
  // triangles
  shape_msgs__msg__MeshTriangle__Array__init(&msg->triangles, 0);
  // vertices
  geometry_msgs__msg__Point__Array__init(&msg->vertices, 0);
  return true;
}

void
shape_msgs__msg__Mesh__fini(shape_msgs__msg__Mesh * msg)
{
  if (!msg) {
    return;
  }
  // triangles
  shape_msgs__msg__MeshTriangle__Array__fini(&msg->triangles);
  // vertices
  geometry_msgs__msg__Point__Array__fini(&msg->vertices);
}

shape_msgs__msg__Mesh *
shape_msgs__msg__Mesh__create()
{
  shape_msgs__msg__Mesh * msg = (shape_msgs__msg__Mesh *)malloc(sizeof(shape_msgs__msg__Mesh));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shape_msgs__msg__Mesh));
  bool success = shape_msgs__msg__Mesh__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
shape_msgs__msg__Mesh__destroy(shape_msgs__msg__Mesh * msg)
{
  if (msg) {
    shape_msgs__msg__Mesh__fini(msg);
  }
  free(msg);
}


bool
shape_msgs__msg__Mesh__Array__init(shape_msgs__msg__Mesh__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  shape_msgs__msg__Mesh * data = NULL;
  if (size) {
    data = (shape_msgs__msg__Mesh *)calloc(size, sizeof(shape_msgs__msg__Mesh));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shape_msgs__msg__Mesh__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shape_msgs__msg__Mesh__fini(&data[i - 1]);
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
shape_msgs__msg__Mesh__Array__fini(shape_msgs__msg__Mesh__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      shape_msgs__msg__Mesh__fini(&array->data[i]);
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

shape_msgs__msg__Mesh__Array *
shape_msgs__msg__Mesh__Array__create(size_t size)
{
  shape_msgs__msg__Mesh__Array * array = (shape_msgs__msg__Mesh__Array *)malloc(sizeof(shape_msgs__msg__Mesh__Array));
  if (!array) {
    return NULL;
  }
  bool success = shape_msgs__msg__Mesh__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
shape_msgs__msg__Mesh__Array__destroy(shape_msgs__msg__Mesh__Array * array)
{
  if (array) {
    shape_msgs__msg__Mesh__Array__fini(array);
  }
  free(array);
}
