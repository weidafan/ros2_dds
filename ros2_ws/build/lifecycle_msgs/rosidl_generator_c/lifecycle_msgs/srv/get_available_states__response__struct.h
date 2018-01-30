// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__SRV__GET_AVAILABLE_STATES__RESPONSE__STRUCT_H_
#define LIFECYCLE_MSGS__SRV__GET_AVAILABLE_STATES__RESPONSE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// available_states
#include "lifecycle_msgs/msg/state__struct.h"

/// Struct of message lifecycle_msgs/GetAvailableStates_Response
typedef struct lifecycle_msgs__srv__GetAvailableStates_Response
{
  lifecycle_msgs__msg__State__Array available_states;
} lifecycle_msgs__srv__GetAvailableStates_Response;

/// Struct for an array of messages
typedef struct lifecycle_msgs__srv__GetAvailableStates_Response__Array
{
  lifecycle_msgs__srv__GetAvailableStates_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__GetAvailableStates_Response__Array;

#if __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__SRV__GET_AVAILABLE_STATES__RESPONSE__STRUCT_H_
