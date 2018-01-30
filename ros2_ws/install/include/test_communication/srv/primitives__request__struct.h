// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__SRV__PRIMITIVES__REQUEST__STRUCT_H_
#define TEST_COMMUNICATION__SRV__PRIMITIVES__REQUEST__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// string_value
#include "rosidl_generator_c/string.h"

/// Struct of message test_communication/Primitives_Request
typedef struct test_communication__srv__Primitives_Request
{
  bool bool_value;
  uint8_t byte_value;
  signed char char_value;
  float float32_value;
  double float64_value;
  int8_t int8_value;
  uint8_t uint8_value;
  int16_t int16_value;
  uint16_t uint16_value;
  int32_t int32_value;
  uint32_t uint32_value;
  int64_t int64_value;
  uint64_t uint64_value;
  rosidl_generator_c__String string_value;
} test_communication__srv__Primitives_Request;

/// Struct for an array of messages
typedef struct test_communication__srv__Primitives_Request__Array
{
  test_communication__srv__Primitives_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_communication__srv__Primitives_Request__Array;

#if __cplusplus
}
#endif

#endif  // TEST_COMMUNICATION__SRV__PRIMITIVES__REQUEST__STRUCT_H_
