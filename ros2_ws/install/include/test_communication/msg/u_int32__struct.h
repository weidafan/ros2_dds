// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__MSG__U_INT32__STRUCT_H_
#define TEST_COMMUNICATION__MSG__U_INT32__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message test_communication/UInt32
typedef struct test_communication__msg__UInt32
{
  uint32_t data;
} test_communication__msg__UInt32;

/// Struct for an array of messages
typedef struct test_communication__msg__UInt32__Array
{
  test_communication__msg__UInt32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_communication__msg__UInt32__Array;

#if __cplusplus
}
#endif

#endif  // TEST_COMMUNICATION__MSG__U_INT32__STRUCT_H_
