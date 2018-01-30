// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "nav_msgs/srv/set_map__request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// map
#include "nav_msgs/msg/occupancy_grid__functions.h"
// initial_pose
#include "geometry_msgs/msg/pose_with_covariance_stamped__functions.h"

bool
nav_msgs__srv__SetMap_Request__init(nav_msgs__srv__SetMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // map
  nav_msgs__msg__OccupancyGrid__init(&msg->map);
  // initial_pose
  geometry_msgs__msg__PoseWithCovarianceStamped__init(&msg->initial_pose);
  return true;
}

void
nav_msgs__srv__SetMap_Request__fini(nav_msgs__srv__SetMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // map
  nav_msgs__msg__OccupancyGrid__fini(&msg->map);
  // initial_pose
  geometry_msgs__msg__PoseWithCovarianceStamped__fini(&msg->initial_pose);
}

nav_msgs__srv__SetMap_Request *
nav_msgs__srv__SetMap_Request__create()
{
  nav_msgs__srv__SetMap_Request * msg = (nav_msgs__srv__SetMap_Request *)malloc(sizeof(nav_msgs__srv__SetMap_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_msgs__srv__SetMap_Request));
  bool success = nav_msgs__srv__SetMap_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav_msgs__srv__SetMap_Request__destroy(nav_msgs__srv__SetMap_Request * msg)
{
  if (msg) {
    nav_msgs__srv__SetMap_Request__fini(msg);
  }
  free(msg);
}


bool
nav_msgs__srv__SetMap_Request__Array__init(nav_msgs__srv__SetMap_Request__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav_msgs__srv__SetMap_Request * data = NULL;
  if (size) {
    data = (nav_msgs__srv__SetMap_Request *)calloc(size, sizeof(nav_msgs__srv__SetMap_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_msgs__srv__SetMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_msgs__srv__SetMap_Request__fini(&data[i - 1]);
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
nav_msgs__srv__SetMap_Request__Array__fini(nav_msgs__srv__SetMap_Request__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav_msgs__srv__SetMap_Request__fini(&array->data[i]);
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

nav_msgs__srv__SetMap_Request__Array *
nav_msgs__srv__SetMap_Request__Array__create(size_t size)
{
  nav_msgs__srv__SetMap_Request__Array * array = (nav_msgs__srv__SetMap_Request__Array *)malloc(sizeof(nav_msgs__srv__SetMap_Request__Array));
  if (!array) {
    return NULL;
  }
  bool success = nav_msgs__srv__SetMap_Request__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav_msgs__srv__SetMap_Request__Array__destroy(nav_msgs__srv__SetMap_Request__Array * array)
{
  if (array) {
    nav_msgs__srv__SetMap_Request__Array__fini(array);
  }
  free(array);
}
