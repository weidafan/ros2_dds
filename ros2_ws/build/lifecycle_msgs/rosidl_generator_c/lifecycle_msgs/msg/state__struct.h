// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__MSG__STATE__STRUCT_H_
#define LIFECYCLE_MSGS__MSG__STATE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// label
#include "rosidl_generator_c/string.h"

// constants defined in the message
// PRIMARY_STATE_UNKNOWN
enum
{
  lifecycle_msgs__msg__State__PRIMARY_STATE_UNKNOWN = 0u
};
// PRIMARY_STATE_UNCONFIGURED
enum
{
  lifecycle_msgs__msg__State__PRIMARY_STATE_UNCONFIGURED = 1u
};
// PRIMARY_STATE_INACTIVE
enum
{
  lifecycle_msgs__msg__State__PRIMARY_STATE_INACTIVE = 2u
};
// PRIMARY_STATE_ACTIVE
enum
{
  lifecycle_msgs__msg__State__PRIMARY_STATE_ACTIVE = 3u
};
// PRIMARY_STATE_FINALIZED
enum
{
  lifecycle_msgs__msg__State__PRIMARY_STATE_FINALIZED = 4u
};
// TRANSITION_STATE_CONFIGURING
enum
{
  lifecycle_msgs__msg__State__TRANSITION_STATE_CONFIGURING = 10u
};
// TRANSITION_STATE_CLEANINGUP
enum
{
  lifecycle_msgs__msg__State__TRANSITION_STATE_CLEANINGUP = 11u
};
// TRANSITION_STATE_SHUTTINGDOWN
enum
{
  lifecycle_msgs__msg__State__TRANSITION_STATE_SHUTTINGDOWN = 12u
};
// TRANSITION_STATE_ACTIVATING
enum
{
  lifecycle_msgs__msg__State__TRANSITION_STATE_ACTIVATING = 13u
};
// TRANSITION_STATE_DEACTIVATING
enum
{
  lifecycle_msgs__msg__State__TRANSITION_STATE_DEACTIVATING = 14u
};
// TRANSITION_STATE_ERRORPROCESSING
enum
{
  lifecycle_msgs__msg__State__TRANSITION_STATE_ERRORPROCESSING = 15u
};

/// Struct of message lifecycle_msgs/State
typedef struct lifecycle_msgs__msg__State
{
  uint8_t id;
  rosidl_generator_c__String label;
} lifecycle_msgs__msg__State;

/// Struct for an array of messages
typedef struct lifecycle_msgs__msg__State__Array
{
  lifecycle_msgs__msg__State * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__msg__State__Array;

#if __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__MSG__STATE__STRUCT_H_
