// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__MSG__TRANSITION_EVENT__STRUCT_H_
#define LIFECYCLE_MSGS__MSG__TRANSITION_EVENT__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// transition
#include "lifecycle_msgs/msg/transition__struct.h"
// start_state
// goal_state
#include "lifecycle_msgs/msg/state__struct.h"

/// Struct of message lifecycle_msgs/TransitionEvent
typedef struct lifecycle_msgs__msg__TransitionEvent
{
  uint64_t timestamp;
  lifecycle_msgs__msg__Transition transition;
  lifecycle_msgs__msg__State start_state;
  lifecycle_msgs__msg__State goal_state;
} lifecycle_msgs__msg__TransitionEvent;

/// Struct for an array of messages
typedef struct lifecycle_msgs__msg__TransitionEvent__Array
{
  lifecycle_msgs__msg__TransitionEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__msg__TransitionEvent__Array;

#if __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__MSG__TRANSITION_EVENT__STRUCT_H_
