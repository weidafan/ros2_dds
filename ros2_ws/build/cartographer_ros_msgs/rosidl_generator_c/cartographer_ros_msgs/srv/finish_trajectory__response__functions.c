// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "cartographer_ros_msgs/srv/finish_trajectory__response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
cartographer_ros_msgs__srv__FinishTrajectory_Response__init(cartographer_ros_msgs__srv__FinishTrajectory_Response * msg)
{
  if (!msg) {
    return false;
  }
  return true;
}

void
cartographer_ros_msgs__srv__FinishTrajectory_Response__fini(cartographer_ros_msgs__srv__FinishTrajectory_Response * msg)
{
  if (!msg) {
    return;
  }
}

cartographer_ros_msgs__srv__FinishTrajectory_Response *
cartographer_ros_msgs__srv__FinishTrajectory_Response__create()
{
  cartographer_ros_msgs__srv__FinishTrajectory_Response * msg = (cartographer_ros_msgs__srv__FinishTrajectory_Response *)malloc(sizeof(cartographer_ros_msgs__srv__FinishTrajectory_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__srv__FinishTrajectory_Response));
  bool success = cartographer_ros_msgs__srv__FinishTrajectory_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__srv__FinishTrajectory_Response__destroy(cartographer_ros_msgs__srv__FinishTrajectory_Response * msg)
{
  if (msg) {
    cartographer_ros_msgs__srv__FinishTrajectory_Response__fini(msg);
  }
  free(msg);
}


bool
cartographer_ros_msgs__srv__FinishTrajectory_Response__Array__init(cartographer_ros_msgs__srv__FinishTrajectory_Response__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartographer_ros_msgs__srv__FinishTrajectory_Response * data = NULL;
  if (size) {
    data = (cartographer_ros_msgs__srv__FinishTrajectory_Response *)calloc(size, sizeof(cartographer_ros_msgs__srv__FinishTrajectory_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__srv__FinishTrajectory_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__srv__FinishTrajectory_Response__fini(&data[i - 1]);
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
cartographer_ros_msgs__srv__FinishTrajectory_Response__Array__fini(cartographer_ros_msgs__srv__FinishTrajectory_Response__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartographer_ros_msgs__srv__FinishTrajectory_Response__fini(&array->data[i]);
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

cartographer_ros_msgs__srv__FinishTrajectory_Response__Array *
cartographer_ros_msgs__srv__FinishTrajectory_Response__Array__create(size_t size)
{
  cartographer_ros_msgs__srv__FinishTrajectory_Response__Array * array = (cartographer_ros_msgs__srv__FinishTrajectory_Response__Array *)malloc(sizeof(cartographer_ros_msgs__srv__FinishTrajectory_Response__Array));
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__srv__FinishTrajectory_Response__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__srv__FinishTrajectory_Response__Array__destroy(cartographer_ros_msgs__srv__FinishTrajectory_Response__Array * array)
{
  if (array) {
    cartographer_ros_msgs__srv__FinishTrajectory_Response__Array__fini(array);
  }
  free(array);
}
