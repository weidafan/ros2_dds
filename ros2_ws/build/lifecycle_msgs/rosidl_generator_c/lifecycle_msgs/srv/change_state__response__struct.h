// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__SRV__CHANGE_STATE__RESPONSE__STRUCT_H_
#define LIFECYCLE_MSGS__SRV__CHANGE_STATE__RESPONSE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message lifecycle_msgs/ChangeState_Response
typedef struct lifecycle_msgs__srv__ChangeState_Response
{
  bool success;
} lifecycle_msgs__srv__ChangeState_Response;

/// Struct for an array of messages
typedef struct lifecycle_msgs__srv__ChangeState_Response__Array
{
  lifecycle_msgs__srv__ChangeState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__ChangeState_Response__Array;

#if __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__SRV__CHANGE_STATE__RESPONSE__STRUCT_H_
