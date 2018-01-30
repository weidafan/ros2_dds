// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "nav_msgs/srv/get_map__response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// map
#include "nav_msgs/msg/occupancy_grid__functions.h"

bool
nav_msgs__srv__GetMap_Response__init(nav_msgs__srv__GetMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // map
  nav_msgs__msg__OccupancyGrid__init(&msg->map);
  return true;
}

void
nav_msgs__srv__GetMap_Response__fini(nav_msgs__srv__GetMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // map
  nav_msgs__msg__OccupancyGrid__fini(&msg->map);
}

nav_msgs__srv__GetMap_Response *
nav_msgs__srv__GetMap_Response__create()
{
  nav_msgs__srv__GetMap_Response * msg = (nav_msgs__srv__GetMap_Response *)malloc(sizeof(nav_msgs__srv__GetMap_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__srv__GetMap_Response));
  bool success = nav_msgs__srv__GetMap_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav_msgs__srv__GetMap_Response__destroy(nav_msgs__srv__GetMap_Response * msg)
{
  if (msg) {
    nav_msgs__srv__GetMap_Response__fini(msg);
  }
  free(msg);
}


bool
nav_msgs__srv__GetMap_Response__Array__init(nav_msgs__srv__GetMap_Response__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav_msgs__srv__GetMap_Response * data = NULL;
  if (size) {
    data = (nav_msgs__srv__GetMap_Response *)calloc(size, sizeof(nav_msgs__srv__GetMap_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__srv__GetMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__srv__GetMap_Response__fini(&data[i - 1]);
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
nav_msgs__srv__GetMap_Response__Array__fini(nav_msgs__srv__GetMap_Response__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav_msgs__srv__GetMap_Response__fini(&array->data[i]);
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

nav_msgs__srv__GetMap_Response__Array *
nav_msgs__srv__GetMap_Response__Array__create(size_t size)
{
  nav_msgs__srv__GetMap_Response__Array * array = (nav_msgs__srv__GetMap_Response__Array *)malloc(sizeof(nav_msgs__srv__GetMap_Response__Array));
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__srv__GetMap_Response__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav_msgs__srv__GetMap_Response__Array__destroy(nav_msgs__srv__GetMap_Response__Array * array)
{
  if (array) {
    nav_msgs__srv__GetMap_Response__Array__fini(array);
  }
  free(array);
}
