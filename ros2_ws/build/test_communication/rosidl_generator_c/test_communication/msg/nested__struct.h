// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__MSG__NESTED__STRUCT_H_
#define TEST_COMMUNICATION__MSG__NESTED__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// primitive_values
#include "test_communication/msg/primitives__struct.h"

/// Struct of message test_communication/Nested
typedef struct test_communication__msg__Nested
{
  test_communication__msg__Primitives primitive_values;
} test_communication__msg__Nested;

/// Struct for an array of messages
typedef struct test_communication__msg__Nested__Array
{
  test_communication__msg__Nested * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_communication__msg__Nested__Array;

#if __cplusplus
}
#endif

#endif  // TEST_COMMUNICATION__MSG__NESTED__STRUCT_H_
