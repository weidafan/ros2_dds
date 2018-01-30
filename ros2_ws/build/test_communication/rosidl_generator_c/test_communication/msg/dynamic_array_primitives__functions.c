// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "test_communication/msg/dynamic_array_primitives__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

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
#include "rosidl_generator_c/primitives_array_functions.h"
// string_values
#include "rosidl_generator_c/string_functions.h"

bool
test_communication__msg__DynamicArrayPrimitives__init(test_communication__msg__DynamicArrayPrimitives * msg)
{
  if (!msg) {
    return false;
  }
  // bool_values
  rosidl_generator_c__bool__Array__init(&msg->bool_values, 0);
  // byte_values
  rosidl_generator_c__byte__Array__init(&msg->byte_values, 0);
  // char_values
  rosidl_generator_c__char__Array__init(&msg->char_values, 0);
  // float32_values
  rosidl_generator_c__float32__Array__init(&msg->float32_values, 0);
  // float64_values
  rosidl_generator_c__float64__Array__init(&msg->float64_values, 0);
  // int8_values
  rosidl_generator_c__int8__Array__init(&msg->int8_values, 0);
  // uint8_values
  rosidl_generator_c__uint8__Array__init(&msg->uint8_values, 0);
  // int16_values
  rosidl_generator_c__int16__Array__init(&msg->int16_values, 0);
  // uint16_values
  rosidl_generator_c__uint16__Array__init(&msg->uint16_values, 0);
  // int32_values
  rosidl_generator_c__int32__Array__init(&msg->int32_values, 0);
  // uint32_values
  rosidl_generator_c__uint32__Array__init(&msg->uint32_values, 0);
  // int64_values
  rosidl_generator_c__int64__Array__init(&msg->int64_values, 0);
  // uint64_values
  rosidl_generator_c__uint64__Array__init(&msg->uint64_values, 0);
  // string_values
  rosidl_generator_c__String__Array__init(&msg->string_values, 0);
  // check
  return true;
}

void
test_communication__msg__DynamicArrayPrimitives__fini(test_communication__msg__DynamicArrayPrimitives * msg)
{
  if (!msg) {
    return;
  }
  // bool_values
  rosidl_generator_c__bool__Array__fini(&msg->bool_values);
  // byte_values
  rosidl_generator_c__byte__Array__fini(&msg->byte_values);
  // char_values
  rosidl_generator_c__char__Array__fini(&msg->char_values);
  // float32_values
  rosidl_generator_c__float32__Array__fini(&msg->float32_values);
  // float64_values
  rosidl_generator_c__float64__Array__fini(&msg->float64_values);
  // int8_values
  rosidl_generator_c__int8__Array__fini(&msg->int8_values);
  // uint8_values
  rosidl_generator_c__uint8__Array__fini(&msg->uint8_values);
  // int16_values
  rosidl_generator_c__int16__Array__fini(&msg->int16_values);
  // uint16_values
  rosidl_generator_c__uint16__Array__fini(&msg->uint16_values);
  // int32_values
  rosidl_generator_c__int32__Array__fini(&msg->int32_values);
  // uint32_values
  rosidl_generator_c__uint32__Array__fini(&msg->uint32_values);
  // int64_values
  rosidl_generator_c__int64__Array__fini(&msg->int64_values);
  // uint64_values
  rosidl_generator_c__uint64__Array__fini(&msg->uint64_values);
  // string_values
  rosidl_generator_c__String__Array__fini(&msg->string_values);
  // check
}

test_communication__msg__DynamicArrayPrimitives *
test_communication__msg__DynamicArrayPrimitives__create()
{
  test_communication__msg__DynamicArrayPrimitives * msg = (test_communication__msg__DynamicArrayPrimitives *)malloc(sizeof(test_communication__msg__DynamicArrayPrimitives));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_communication__msg__DynamicArrayPrimitives));
  bool success = test_communication__msg__DynamicArrayPrimitives__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_communication__msg__DynamicArrayPrimitives__destroy(test_communication__msg__DynamicArrayPrimitives * msg)
{
  if (msg) {
    test_communication__msg__DynamicArrayPrimitives__fini(msg);
  }
  free(msg);
}


bool
test_communication__msg__DynamicArrayPrimitives__Array__init(test_communication__msg__DynamicArrayPrimitives__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_communication__msg__DynamicArrayPrimitives * data = NULL;
  if (size) {
    data = (test_communication__msg__DynamicArrayPrimitives *)calloc(size, sizeof(test_communication__msg__DynamicArrayPrimitives));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_communication__msg__DynamicArrayPrimitives__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_communication__msg__DynamicArrayPrimitives__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test_communication__msg__DynamicArrayPrimitives__Array__fini(test_communication__msg__DynamicArrayPrimitives__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_communication__msg__DynamicArrayPrimitives__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test_communication__msg__DynamicArrayPrimitives__Array *
test_communication__msg__DynamicArrayPrimitives__Array__create(size_t size)
{
  test_communication__msg__DynamicArrayPrimitives__Array * array = (test_communication__msg__DynamicArrayPrimitives__Array *)malloc(sizeof(test_communication__msg__DynamicArrayPrimitives__Array));
  if (!array) {
    return NULL;
  }
  bool success = test_communication__msg__DynamicArrayPrimitives__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_communication__msg__DynamicArrayPrimitives__Array__destroy(test_communication__msg__DynamicArrayPrimitives__Array * array)
{
  if (array) {
    test_communication__msg__DynamicArrayPrimitives__Array__fini(array);
  }
  free(array);
}
