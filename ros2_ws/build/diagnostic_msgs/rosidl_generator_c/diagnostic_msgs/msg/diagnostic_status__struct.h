// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_STATUS__STRUCT_H_
#define DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_STATUS__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// name
// message
// hardware_id
#include "rosidl_generator_c/string.h"
// values
#include "diagnostic_msgs/msg/key_value__struct.h"

// constants defined in the message
// OK
enum
{
  diagnostic_msgs__msg__DiagnosticStatus__OK = 0
};
// WARN
enum
{
  diagnostic_msgs__msg__DiagnosticStatus__WARN = 1
};
// ERROR
enum
{
  diagnostic_msgs__msg__DiagnosticStatus__ERROR = 2
};
// STALE
enum
{
  diagnostic_msgs__msg__DiagnosticStatus__STALE = 3
};

/// Struct of message diagnostic_msgs/DiagnosticStatus
typedef struct diagnostic_msgs__msg__DiagnosticStatus
{
  uint8_t level;
  rosidl_generator_c__String name;
  rosidl_generator_c__String message;
  rosidl_generator_c__String hardware_id;
  diagnostic_msgs__msg__KeyValue__Array values;
} diagnostic_msgs__msg__DiagnosticStatus;

/// Struct for an array of messages
typedef struct diagnostic_msgs__msg__DiagnosticStatus__Array
{
  diagnostic_msgs__msg__DiagnosticStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diagnostic_msgs__msg__DiagnosticStatus__Array;

#if __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_STATUS__STRUCT_H_
