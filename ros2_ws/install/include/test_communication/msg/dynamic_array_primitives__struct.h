// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__MSG__DYNAMIC_ARRAY_PRIMITIVES__STRUCT_H_
#define TEST_COMMUNICATION__MSG__DYNAMIC_ARRAY_PRIMITIVES__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// bool_values
// byte_values
// char_values
// float32_values
// float64_values
// int8_values
// uint8_values
// int16_values
// uint16_values
// int32_values
// uint32_values
// int64_values
// uint64_values
#include "rosidl_generator_c/primitives_array.h"
// string_values
#include "rosidl_generator_c/string.h"

/// Struct of message test_communication/DynamicArrayPrimitives
typedef struct test_communication__msg__DynamicArrayPrimitives
{
  rosidl_generator_c__bool__Array bool_values;
  rosidl_generator_c__byte__Array byte_values;
  rosidl_generator_c__char__Array char_values;
  rosidl_generator_c__float32__Array float32_values;
  rosidl_generator_c__float64__Array float64_values;
  rosidl_generator_c__int8__Array int8_values;
  rosidl_generator_c__uint8__Array uint8_values;
  rosidl_generator_c__int16__Array int16_values;
  rosidl_generator_c__uint16__Array uint16_values;
  rosidl_generator_c__int32__Array int32_values;
  rosidl_generator_c__uint32__Array uint32_values;
  rosidl_generator_c__int64__Array int64_values;
  rosidl_generator_c__uint64__Array uint64_values;
  rosidl_generator_c__String__Array string_values;
  int32_t check;
} test_communication__msg__DynamicArrayPrimitives;

/// Struct for an array of messages
typedef struct test_communication__msg__DynamicArrayPrimitives__Array
{
  test_communication__msg__DynamicArrayPrimitives * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_communication__msg__DynamicArrayPrimitives__Array;

#if __cplusplus
}
#endif

#endif  // TEST_COMMUNICATION__MSG__DYNAMIC_ARRAY_PRIMITIVES__STRUCT_H_
