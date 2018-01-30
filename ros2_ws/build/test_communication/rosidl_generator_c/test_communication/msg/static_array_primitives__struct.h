// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__MSG__STATIC_ARRAY_PRIMITIVES__STRUCT_H_
#define TEST_COMMUNICATION__MSG__STATIC_ARRAY_PRIMITIVES__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// string_values
#include "rosidl_generator_c/string.h"

/// Struct of message test_communication/StaticArrayPrimitives
typedef struct test_communication__msg__StaticArrayPrimitives
{
  bool bool_values[3];
  uint8_t byte_values[3];
  signed char char_values[3];
  float float32_values[3];
  double float64_values[3];
  int8_t int8_values[3];
  uint8_t uint8_values[3];
  int16_t int16_values[3];
  uint16_t uint16_values[3];
  int32_t int32_values[3];
  uint32_t uint32_values[3];
  int64_t int64_values[3];
  uint64_t uint64_values[3];
  rosidl_generator_c__String string_values[3];
} test_communication__msg__StaticArrayPrimitives;

/// Struct for an array of messages
typedef struct test_communication__msg__StaticArrayPrimitives__Array
{
  test_communication__msg__StaticArrayPrimitives * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_communication__msg__StaticArrayPrimitives__Array;

#if __cplusplus
}
#endif

#endif  // TEST_COMMUNICATION__MSG__STATIC_ARRAY_PRIMITIVES__STRUCT_H_
