// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__SRV__GET_AVAILABLE_TRANSITIONS__REQUEST__STRUCT_H_
#define LIFECYCLE_MSGS__SRV__GET_AVAILABLE_TRANSITIONS__REQUEST__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// node_name
#include "rosidl_generator_c/string.h"

/// Struct of message lifecycle_msgs/GetAvailableTransitions_Request
typedef struct lifecycle_msgs__srv__GetAvailableTransitions_Request
{
  rosidl_generator_c__String node_name;
} lifecycle_msgs__srv__GetAvailableTransitions_Request;

/// Struct for an array of messages
typedef struct lifecycle_msgs__srv__GetAvailableTransitions_Request__Array
{
  lifecycle_msgs__srv__GetAvailableTransitions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__GetAvailableTransitions_Request__Array;

#if __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__SRV__GET_AVAILABLE_TRANSITIONS__REQUEST__STRUCT_H_
