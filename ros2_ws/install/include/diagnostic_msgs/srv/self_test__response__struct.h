// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__SELF_TEST__RESPONSE__STRUCT_H_
#define DIAGNOSTIC_MSGS__SRV__SELF_TEST__RESPONSE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// id
#include "rosidl_generator_c/string.h"
// status
#include "diagnostic_msgs/msg/diagnostic_status__struct.h"

/// Struct of message diagnostic_msgs/SelfTest_Response
typedef struct diagnostic_msgs__srv__SelfTest_Response
{
  rosidl_generator_c__String id;
  uint8_t passed;
  diagnostic_msgs__msg__DiagnosticStatus__Array status;
} diagnostic_msgs__srv__SelfTest_Response;

/// Struct for an array of messages
typedef struct diagnostic_msgs__srv__SelfTest_Response__Array
{
  diagnostic_msgs__srv__SelfTest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diagnostic_msgs__srv__SelfTest_Response__Array;

#if __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__SRV__SELF_TEST__RESPONSE__STRUCT_H_
