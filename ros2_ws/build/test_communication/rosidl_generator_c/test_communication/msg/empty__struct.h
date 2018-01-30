// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__MSG__EMPTY__STRUCT_H_
#define TEST_COMMUNICATION__MSG__EMPTY__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message test_communication/Empty
typedef struct test_communication__msg__Empty
{
  bool _dummy;
} test_communication__msg__Empty;

/// Struct for an array of messages
typedef struct test_communication__msg__Empty__Array
{
  test_communication__msg__Empty * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_communication__msg__Empty__Array;

#if __cplusplus
}
#endif

#endif  // TEST_COMMUNICATION__MSG__EMPTY__STRUCT_H_
