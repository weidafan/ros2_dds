// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__GOAL_STATUS__STRUCT_H_
#define ACTIONLIB_MSGS__MSG__GOAL_STATUS__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// goal_id
#include "actionlib_msgs/msg/goal_id__struct.h"
// text
#include "rosidl_generator_c/string.h"

// constants defined in the message
// PENDING
enum
{
  actionlib_msgs__msg__GoalStatus__PENDING = 0u
};
// ACTIVE
enum
{
  actionlib_msgs__msg__GoalStatus__ACTIVE = 1u
};
// PREEMPTED
enum
{
  actionlib_msgs__msg__GoalStatus__PREEMPTED = 2u
};
// SUCCEEDED
enum
{
  actionlib_msgs__msg__GoalStatus__SUCCEEDED = 3u
};
// ABORTED
enum
{
  actionlib_msgs__msg__GoalStatus__ABORTED = 4u
};
// REJECTED
enum
{
  actionlib_msgs__msg__GoalStatus__REJECTED = 5u
};
// PREEMPTING
enum
{
  actionlib_msgs__msg__GoalStatus__PREEMPTING = 6u
};
// RECALLING
enum
{
  actionlib_msgs__msg__GoalStatus__RECALLING = 7u
};
// RECALLED
enum
{
  actionlib_msgs__msg__GoalStatus__RECALLED = 8u
};
// LOST
enum
{
  actionlib_msgs__msg__GoalStatus__LOST = 9u
};

/// Struct of message actionlib_msgs/GoalStatus
typedef struct actionlib_msgs__msg__GoalStatus
{
  actionlib_msgs__msg__GoalID goal_id;
  uint8_t status;
  rosidl_generator_c__String text;
} actionlib_msgs__msg__GoalStatus;

/// Struct for an array of messages
typedef struct actionlib_msgs__msg__GoalStatus__Array
{
  actionlib_msgs__msg__GoalStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib_msgs__msg__GoalStatus__Array;

#if __cplusplus
}
#endif

#endif  // ACTIONLIB_MSGS__MSG__GOAL_STATUS__STRUCT_H_
