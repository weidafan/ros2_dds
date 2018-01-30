// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "tf2_msgs/srv/frame_graph__response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// frame_yaml
#include "rosidl_generator_c/string_functions.h"

bool
tf2_msgs__srv__FrameGraph_Response__init(tf2_msgs__srv__FrameGraph_Response * msg)
{
  if (!msg) {
    return false;
  }
  // frame_yaml
  rosidl_generator_c__String__init(&msg->frame_yaml);
  return true;
}

void
tf2_msgs__srv__FrameGraph_Response__fini(tf2_msgs__srv__FrameGraph_Response * msg)
{
  if (!msg) {
    return;
  }
  // frame_yaml
  rosidl_generator_c__String__fini(&msg->frame_yaml);
}

tf2_msgs__srv__FrameGraph_Response *
tf2_msgs__srv__FrameGraph_Response__create()
{
  tf2_msgs__srv__FrameGraph_Response * msg = (tf2_msgs__srv__FrameGraph_Response *)malloc(sizeof(tf2_msgs__srv__FrameGraph_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tf2_msgs__srv__FrameGraph_Response));
  bool success = tf2_msgs__srv__FrameGraph_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tf2_msgs__srv__FrameGraph_Response__destroy(tf2_msgs__srv__FrameGraph_Response * msg)
{
  if (msg) {
    tf2_msgs__srv__FrameGraph_Response__fini(msg);
  }
  free(msg);
}


bool
tf2_msgs__srv__FrameGraph_Response__Array__init(tf2_msgs__srv__FrameGraph_Response__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  tf2_msgs__srv__FrameGraph_Response * data = NULL;
  if (size) {
    data = (tf2_msgs__srv__FrameGraph_Response *)calloc(size, sizeof(tf2_msgs__srv__FrameGraph_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tf2_msgs__srv__FrameGraph_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tf2_msgs__srv__FrameGraph_Response__fini(&data[i - 1]);
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
tf2_msgs__srv__FrameGraph_Response__Array__fini(tf2_msgs__srv__FrameGraph_Response__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tf2_msgs__srv__FrameGraph_Response__fini(&array->data[i]);
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

tf2_msgs__srv__FrameGraph_Response__Array *
tf2_msgs__srv__FrameGraph_Response__Array__create(size_t size)
{
  tf2_msgs__srv__FrameGraph_Response__Array * array = (tf2_msgs__srv__FrameGraph_Response__Array *)malloc(sizeof(tf2_msgs__srv__FrameGraph_Response__Array));
  if (!array) {
    return NULL;
  }
  bool success = tf2_msgs__srv__FrameGraph_Response__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tf2_msgs__srv__FrameGraph_Response__Array__destroy(tf2_msgs__srv__FrameGraph_Response__Array * array)
{
  if (array) {
    tf2_msgs__srv__FrameGraph_Response__Array__fini(array);
  }
  free(array);
}
