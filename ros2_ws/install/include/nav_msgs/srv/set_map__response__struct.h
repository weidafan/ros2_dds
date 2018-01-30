// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__SET_MAP__RESPONSE__STRUCT_H_
#define NAV_MSGS__SRV__SET_MAP__RESPONSE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message nav_msgs/SetMap_Response
typedef struct nav_msgs__srv__SetMap_Response
{
  bool success;
} nav_msgs__srv__SetMap_Response;

/// Struct for an array of messages
typedef struct nav_msgs__srv__SetMap_Response__Array
{
  nav_msgs__srv__SetMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__srv__SetMap_Response__Array;

#if __cplusplus
}
#endif

#endif  // NAV_MSGS__SRV__SET_MAP__RESPONSE__STRUCT_H_
