// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "cartographer_ros_msgs/msg/trajectory_submap_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// submap
#include "cartographer_ros_msgs/msg/submap_entry__functions.h"

bool
cartographer_ros_msgs__msg__TrajectorySubmapList__init(cartographer_ros_msgs__msg__TrajectorySubmapList * msg)
{
  if (!msg) {
    return false;
  }
  // submap
  cartographer_ros_msgs__msg__SubmapEntry__Array__init(&msg->submap, 0);
  return true;
}

void
cartographer_ros_msgs__msg__TrajectorySubmapList__fini(cartographer_ros_msgs__msg__TrajectorySubmapList * msg)
{
  if (!msg) {
    return;
  }
  // submap
  cartographer_ros_msgs__msg__SubmapEntry__Array__fini(&msg->submap);
}

cartographer_ros_msgs__msg__TrajectorySubmapList *
cartographer_ros_msgs__msg__TrajectorySubmapList__create()
{
  cartographer_ros_msgs__msg__TrajectorySubmapList * msg = (cartographer_ros_msgs__msg__TrajectorySubmapList *)malloc(sizeof(cartographer_ros_msgs__msg__TrajectorySubmapList));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__TrajectorySubmapList));
  bool success = cartographer_ros_msgs__msg__TrajectorySubmapList__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__TrajectorySubmapList__destroy(cartographer_ros_msgs__msg__TrajectorySubmapList * msg)
{
  if (msg) {
    cartographer_ros_msgs__msg__TrajectorySubmapList__fini(msg);
  }
  free(msg);
}


bool
cartographer_ros_msgs__msg__TrajectorySubmapList__Array__init(cartographer_ros_msgs__msg__TrajectorySubmapList__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartographer_ros_msgs__msg__TrajectorySubmapList * data = NULL;
  if (size) {
    data = (cartographer_ros_msgs__msg__TrajectorySubmapList *)calloc(size, sizeof(cartographer_ros_msgs__msg__TrajectorySubmapList));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__TrajectorySubmapList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__TrajectorySubmapList__fini(&data[i - 1]);
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
cartographer_ros_msgs__msg__TrajectorySubmapList__Array__fini(cartographer_ros_msgs__msg__TrajectorySubmapList__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartographer_ros_msgs__msg__TrajectorySubmapList__fini(&array->data[i]);
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

cartographer_ros_msgs__msg__TrajectorySubmapList__Array *
cartographer_ros_msgs__msg__TrajectorySubmapList__Array__create(size_t size)
{
  cartographer_ros_msgs__msg__TrajectorySubmapList__Array * array = (cartographer_ros_msgs__msg__TrajectorySubmapList__Array *)malloc(sizeof(cartographer_ros_msgs__msg__TrajectorySubmapList__Array));
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__TrajectorySubmapList__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__TrajectorySubmapList__Array__destroy(cartographer_ros_msgs__msg__TrajectorySubmapList__Array * array)
{
  if (array) {
    cartographer_ros_msgs__msg__TrajectorySubmapList__Array__fini(array);
  }
  free(array);
}
