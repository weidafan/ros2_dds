// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__GOAL_ID__STRUCT_H_
#define ACTIONLIB_MSGS__MSG__GOAL_ID__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// stamp
#include "builtin_interfaces/msg/time__struct.h"
// id
#include "rosidl_generator_c/string.h"

/// Struct of message actionlib_msgs/GoalID
typedef struct actionlib_msgs__msg__GoalID
{
  builtin_interfaces__msg__Time stamp;
  rosidl_generator_c__String id;
} actionlib_msgs__msg__GoalID;

/// Struct for an array of messages
typedef struct actionlib_msgs__msg__GoalID__Array
{
  actionlib_msgs__msg__GoalID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib_msgs__msg__GoalID__Array;

#if __cplusplus
}
#endif

#endif  // ACTIONLIB_MSGS__MSG__GOAL_ID__STRUCT_H_
