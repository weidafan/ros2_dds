// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__SRV__FRAME_GRAPH__RESPONSE__STRUCT_H_
#define TF2_MSGS__SRV__FRAME_GRAPH__RESPONSE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// frame_yaml
#include "rosidl_generator_c/string.h"

/// Struct of message tf2_msgs/FrameGraph_Response
typedef struct tf2_msgs__srv__FrameGraph_Response
{
  rosidl_generator_c__String frame_yaml;
} tf2_msgs__srv__FrameGraph_Response;

/// Struct for an array of messages
typedef struct tf2_msgs__srv__FrameGraph_Response__Array
{
  tf2_msgs__srv__FrameGraph_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__srv__FrameGraph_Response__Array;

#if __cplusplus
}
#endif

#endif  // TF2_MSGS__SRV__FRAME_GRAPH__RESPONSE__STRUCT_H_
