// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__MSG__TRANSITION__STRUCT_H_
#define LIFECYCLE_MSGS__MSG__TRANSITION__STRUCT_H_

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
// TRANSITION_CREATE
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_CREATE = 0u
};
// TRANSITION_CONFIGURE
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_CONFIGURE = 1u
};
// TRANSITION_CLEANUP
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_CLEANUP = 2u
};
// TRANSITION_ACTIVATE
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ACTIVATE = 3u
};
// TRANSITION_DEACTIVATE
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_DEACTIVATE = 4u
};
// TRANSITION_SHUTDOWN
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_SHUTDOWN = 5u
};
// TRANSITION_DESTROY
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_DESTROY = 6u
};
// TRANSITION_ON_CONFIGURE_SUCCESS
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_CONFIGURE_SUCCESS = 10u
};
// TRANSITION_ON_CONFIGURE_FAILURE
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_CONFIGURE_FAILURE = 11u
};
// TRANSITION_ON_CONFIGURE_ERROR
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_CONFIGURE_ERROR = 12u
};
// TRANSITION_ON_CLEANUP_SUCCESS
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_CLEANUP_SUCCESS = 20u
};
// TRANSITION_ON_CLEANUP_FAILURE
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_CLEANUP_FAILURE = 21u
};
// TRANSITION_ON_CLEANUP_ERROR
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_CLEANUP_ERROR = 22u
};
// TRANSITION_ON_ACTIVATE_SUCCESS
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_ACTIVATE_SUCCESS = 30u
};
// TRANSITION_ON_ACTIVATE_FAILURE
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_ACTIVATE_FAILURE = 31u
};
// TRANSITION_ON_ACTIVATE_ERROR
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_ACTIVATE_ERROR = 32u
};
// TRANSITION_ON_DEACTIVATE_SUCCESS
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_DEACTIVATE_SUCCESS = 40u
};
// TRANSITION_ON_DEACTIVATE_FAILURE
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_DEACTIVATE_FAILURE = 41u
};
// TRANSITION_ON_DEACTIVATE_ERROR
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_DEACTIVATE_ERROR = 42u
};
// TRANSITION_UNCONFIGURED_SHUTDOWN
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_UNCONFIGURED_SHUTDOWN = 50u
};
// TRANSITION_INACTIVE_SHUTDOWN
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_INACTIVE_SHUTDOWN = 51u
};
// TRANSITION_ACTIVE_SHUTDOWN
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ACTIVE_SHUTDOWN = 52u
};
// TRANSITION_ON_SHUTDOWN_SUCCESS
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_SHUTDOWN_SUCCESS = 53u
};
// TRANSITION_ON_SHUTDOWN_FAILURE
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_SHUTDOWN_FAILURE = 54u
};
// TRANSITION_ON_SHUTDOWN_ERROR
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_SHUTDOWN_ERROR = 55u
};
// TRANSITION_ON_ERROR_SUCCESS
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_ERROR_SUCCESS = 60u
};
// TRANSITION_ON_ERROR_FAILURE
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_ERROR_FAILURE = 61u
};
// TRANSITION_ON_ERROR_ERROR
enum
{
  lifecycle_msgs__msg__Transition__TRANSITION_ON_ERROR_ERROR = 62u
};

/// Struct of message lifecycle_msgs/Transition
typedef struct lifecycle_msgs__msg__Transition
{
  uint8_t id;
  rosidl_generator_c__String label;
} lifecycle_msgs__msg__Transition;

/// Struct for an array of messages
typedef struct lifecycle_msgs__msg__Transition__Array
{
  lifecycle_msgs__msg__Transition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__msg__Transition__Array;

#if __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__MSG__TRANSITION__STRUCT_H_
