// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__GOAL_STATUS_ARRAY__STRUCT_H_
#define ACTIONLIB_MSGS__MSG__GOAL_STATUS_ARRAY__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// header
#include "std_msgs/msg/header__struct.h"
// status_list
#include "actionlib_msgs/msg/goal_status__struct.h"

/// Struct of message actionlib_msgs/GoalStatusArray
typedef struct actionlib_msgs__msg__GoalStatusArray
{
  std_msgs__msg__Header header;
  actionlib_msgs__msg__GoalStatus__Array status_list;
} actionlib_msgs__msg__GoalStatusArray;

/// Struct for an array of messages
typedef struct actionlib_msgs__msg__GoalStatusArray__Array
{
  actionlib_msgs__msg__GoalStatusArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actionlib_msgs__msg__GoalStatusArray__Array;

#if __cplusplus
}
#endif

#endif  // ACTIONLIB_MSGS__MSG__GOAL_STATUS_ARRAY__STRUCT_H_
