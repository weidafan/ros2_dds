// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__MSG__BUILTINS__STRUCT_H_
#define TEST_COMMUNICATION__MSG__BUILTINS__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// duration_value
#include "builtin_interfaces/msg/duration__struct.h"
// time_value
#include "builtin_interfaces/msg/time__struct.h"

/// Struct of message test_communication/Builtins
typedef struct test_communication__msg__Builtins
{
  builtin_interfaces__msg__Duration duration_value;
  builtin_interfaces__msg__Time time_value;
} test_communication__msg__Builtins;

/// Struct for an array of messages
typedef struct test_communication__msg__Builtins__Array
{
  test_communication__msg__Builtins * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_communication__msg__Builtins__Array;

#if __cplusplus
}
#endif

#endif  // TEST_COMMUNICATION__MSG__BUILTINS__STRUCT_H_
