// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__MSG__PRIMITIVES__FUNCTIONS_H_
#define TEST_COMMUNICATION__MSG__PRIMITIVES__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "test_communication/msg/rosidl_generator_c__visibility_control.h"

#include "test_communication/msg/primitives__struct.h"

/// Initialize test_communication/Primitives message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(test_communication__msg__Primitives)) before
 * or use test_communication__msg__Primitives__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_communication
bool
test_communication__msg__Primitives__init(test_communication__msg__Primitives * msg);

/// Finalize test_communication/Primitives message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_communication
void
test_communication__msg__Primitives__fini(test_communication__msg__Primitives * msg);

/// Create test_communication/Primitives message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls test_communication__msg__Primitives__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_communication
test_communication__msg__Primitives *
test_communication__msg__Primitives__create();

/// Destroy test_communication/Primitives message.
/**
 * It calls test_communication__msg__Primitives__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_communication
void
test_communication__msg__Primitives__destroy(test_communication__msg__Primitives * msg);


/// Initialize array of test_communication/Primitives messages.
/**
 * It allocates the memory for the number of elements and
 * calls test_communication__msg__Primitives__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_communication
bool
test_communication__msg__Primitives__Array__init(test_communication__msg__Primitives__Array * array, size_t size);

/// Finalize array of test_communication/Primitives messages.
/**
 * It calls test_communication__msg__Primitives__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_communication
void
test_communication__msg__Primitives__Array__fini(test_communication__msg__Primitives__Array * array);

/// Create array of test_communication/Primitives messages.
/**
 * It allocates the memory for the array and
 * calls test_communication__msg__Primitives__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_communication
test_communication__msg__Primitives__Array *
test_communication__msg__Primitives__Array__create(size_t size);

/// Destroy array of test_communication/Primitives messages.
/**
 * It calls test_communication__msg__Primitives__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_communication
void
test_communication__msg__Primitives__Array__destroy(test_communication__msg__Primitives__Array * array);

#if __cplusplus
}
#endif

#endif  // TEST_COMMUNICATION__MSG__PRIMITIVES__FUNCTIONS_H_
