// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_ARRAY__STRUCT_H_
#define DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_ARRAY__STRUCT_H_

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
// status
#include "diagnostic_msgs/msg/diagnostic_status__struct.h"

/// Struct of message diagnostic_msgs/DiagnosticArray
typedef struct diagnostic_msgs__msg__DiagnosticArray
{
  std_msgs__msg__Header header;
  diagnostic_msgs__msg__DiagnosticStatus__Array status;
} diagnostic_msgs__msg__DiagnosticArray;

/// Struct for an array of messages
typedef struct diagnostic_msgs__msg__DiagnosticArray__Array
{
  diagnostic_msgs__msg__DiagnosticArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diagnostic_msgs__msg__DiagnosticArray__Array;

#if __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_ARRAY__STRUCT_H_
