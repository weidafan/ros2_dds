// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "nav_msgs/msg/occupancy_grid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// header
#include "std_msgs/msg/header__functions.h"
// info
#include "nav_msgs/msg/map_meta_data__functions.h"
// data
#include "rosidl_generator_c/primitives_array_functions.h"

bool
nav_msgs__msg__OccupancyGrid__init(nav_msgs__msg__OccupancyGrid * msg)
{
  if (!msg) {
    return false;
  }
  // header
  std_msgs__msg__Header__init(&msg->header);
  // info
  nav_msgs__msg__MapMetaData__init(&msg->info);
  // data
  rosidl_generator_c__int8__Array__init(&msg->data, 0);
  return true;
}

void
nav_msgs__msg__OccupancyGrid__fini(nav_msgs__msg__OccupancyGrid * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // info
  nav_msgs__msg__MapMetaData__fini(&msg->info);
  // data
  rosidl_generator_c__int8__Array__fini(&msg->data);
}

nav_msgs__msg__OccupancyGrid *
nav_msgs__msg__OccupancyGrid__create()
{
  nav_msgs__msg__OccupancyGrid * msg = (nav_msgs__msg__OccupancyGrid *)malloc(sizeof(nav_msgs__msg__OccupancyGrid));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__msg__OccupancyGrid));
  bool success = nav_msgs__msg__OccupancyGrid__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav_msgs__msg__OccupancyGrid__destroy(nav_msgs__msg__OccupancyGrid * msg)
{
  if (msg) {
    nav_msgs__msg__OccupancyGrid__fini(msg);
  }
  free(msg);
}


bool
nav_msgs__msg__OccupancyGrid__Array__init(nav_msgs__msg__OccupancyGrid__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav_msgs__msg__OccupancyGrid * data = NULL;
  if (size) {
    data = (nav_msgs__msg__OccupancyGrid *)calloc(size, sizeof(nav_msgs__msg__OccupancyGrid));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__msg__OccupancyGrid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__msg__OccupancyGrid__fini(&data[i - 1]);
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
nav_msgs__msg__OccupancyGrid__Array__fini(nav_msgs__msg__OccupancyGrid__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav_msgs__msg__OccupancyGrid__fini(&array->data[i]);
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

nav_msgs__msg__OccupancyGrid__Array *
nav_msgs__msg__OccupancyGrid__Array__create(size_t size)
{
  nav_msgs__msg__OccupancyGrid__Array * array = (nav_msgs__msg__OccupancyGrid__Array *)malloc(sizeof(nav_msgs__msg__OccupancyGrid__Array));
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__msg__OccupancyGrid__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav_msgs__msg__OccupancyGrid__Array__destroy(nav_msgs__msg__OccupancyGrid__Array * array)
{
  if (array) {
    nav_msgs__msg__OccupancyGrid__Array__fini(array);
  }
  free(array);
}
