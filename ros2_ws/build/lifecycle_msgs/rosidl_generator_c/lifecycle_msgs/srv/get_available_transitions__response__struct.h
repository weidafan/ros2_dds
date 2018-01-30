// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__SRV__GET_AVAILABLE_TRANSITIONS__RESPONSE__STRUCT_H_
#define LIFECYCLE_MSGS__SRV__GET_AVAILABLE_TRANSITIONS__RESPONSE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// available_transitions
#include "lifecycle_msgs/msg/transition_description__struct.h"

/// Struct of message lifecycle_msgs/GetAvailableTransitions_Response
typedef struct lifecycle_msgs__srv__GetAvailableTransitions_Response
{
  lifecycle_msgs__msg__TransitionDescription__Array available_transitions;
} lifecycle_msgs__srv__GetAvailableTransitions_Response;

/// Struct for an array of messages
typedef struct lifecycle_msgs__srv__GetAvailableTransitions_Response__Array
{
  lifecycle_msgs__srv__GetAvailableTransitions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__GetAvailableTransitions_Response__Array;

#if __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__SRV__GET_AVAILABLE_TRANSITIONS__RESPONSE__STRUCT_H_
