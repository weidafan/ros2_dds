// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "cartographer_ros_msgs/srv/submap_query__response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// cells
#include "rosidl_generator_c/primitives_array_functions.h"
// slice_pose
#include "geometry_msgs/msg/pose__functions.h"
// error_message
#include "rosidl_generator_c/string_functions.h"

bool
cartographer_ros_msgs__srv__SubmapQuery_Response__init(cartographer_ros_msgs__srv__SubmapQuery_Response * msg)
{
  if (!msg) {
    return false;
  }
  // submap_version
  // cells
  rosidl_generator_c__uint8__Array__init(&msg->cells, 0);
  // width
  // height
  // resolution
  // slice_pose
  geometry_msgs__msg__Pose__init(&msg->slice_pose);
  // error_message
  rosidl_generator_c__String__init(&msg->error_message);
  return true;
}

void
cartographer_ros_msgs__srv__SubmapQuery_Response__fini(cartographer_ros_msgs__srv__SubmapQuery_Response * msg)
{
  if (!msg) {
    return;
  }
  // submap_version
  // cells
  rosidl_generator_c__uint8__Array__fini(&msg->cells);
  // width
  // height
  // resolution
  // slice_pose
  geometry_msgs__msg__Pose__fini(&msg->slice_pose);
  // error_message
  rosidl_generator_c__String__fini(&msg->error_message);
}

cartographer_ros_msgs__srv__SubmapQuery_Response *
cartographer_ros_msgs__srv__SubmapQuery_Response__create()
{
  cartographer_ros_msgs__srv__SubmapQuery_Response * msg = (cartographer_ros_msgs__srv__SubmapQuery_Response *)malloc(sizeof(cartographer_ros_msgs__srv__SubmapQuery_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__srv__SubmapQuery_Response));
  bool success = cartographer_ros_msgs__srv__SubmapQuery_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__srv__SubmapQuery_Response__destroy(cartographer_ros_msgs__srv__SubmapQuery_Response * msg)
{
  if (msg) {
    cartographer_ros_msgs__srv__SubmapQuery_Response__fini(msg);
  }
  free(msg);
}


bool
cartographer_ros_msgs__srv__SubmapQuery_Response__Array__init(cartographer_ros_msgs__srv__SubmapQuery_Response__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartographer_ros_msgs__srv__SubmapQuery_Response * data = NULL;
  if (size) {
    data = (cartographer_ros_msgs__srv__SubmapQuery_Response *)calloc(size, sizeof(cartographer_ros_msgs__srv__SubmapQuery_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__srv__SubmapQuery_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__srv__SubmapQuery_Response__fini(&data[i - 1]);
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
cartographer_ros_msgs__srv__SubmapQuery_Response__Array__fini(cartographer_ros_msgs__srv__SubmapQuery_Response__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartographer_ros_msgs__srv__SubmapQuery_Response__fini(&array->data[i]);
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

cartographer_ros_msgs__srv__SubmapQuery_Response__Array *
cartographer_ros_msgs__srv__SubmapQuery_Response__Array__create(size_t size)
{
  cartographer_ros_msgs__srv__SubmapQuery_Response__Array * array = (cartographer_ros_msgs__srv__SubmapQuery_Response__Array *)malloc(sizeof(cartographer_ros_msgs__srv__SubmapQuery_Response__Array));
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__srv__SubmapQuery_Response__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__srv__SubmapQuery_Response__Array__destroy(cartographer_ros_msgs__srv__SubmapQuery_Response__Array * array)
{
  if (array) {
    cartographer_ros_msgs__srv__SubmapQuery_Response__Array__fini(array);
  }
  free(array);
}
