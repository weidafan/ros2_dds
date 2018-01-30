// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_STATUS__FUNCTIONS_H_
#define DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_STATUS__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "diagnostic_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "diagnostic_msgs/msg/diagnostic_status__struct.h"

/// Initialize diagnostic_msgs/DiagnosticStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(diagnostic_msgs__msg__DiagnosticStatus)) before
 * or use diagnostic_msgs__msg__DiagnosticStatus__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
bool
diagnostic_msgs__msg__DiagnosticStatus__init(diagnostic_msgs__msg__DiagnosticStatus * msg);

/// Finalize diagnostic_msgs/DiagnosticStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__msg__DiagnosticStatus__fini(diagnostic_msgs__msg__DiagnosticStatus * msg);

/// Create diagnostic_msgs/DiagnosticStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls diagnostic_msgs__msg__DiagnosticStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
diagnostic_msgs__msg__DiagnosticStatus *
diagnostic_msgs__msg__DiagnosticStatus__create();

/// Destroy diagnostic_msgs/DiagnosticStatus message.
/**
 * It calls diagnostic_msgs__msg__DiagnosticStatus__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__msg__DiagnosticStatus__destroy(diagnostic_msgs__msg__DiagnosticStatus * msg);


/// Initialize array of diagnostic_msgs/DiagnosticStatus messages.
/**
 * It allocates the memory for the number of elements and
 * calls diagnostic_msgs__msg__DiagnosticStatus__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
bool
diagnostic_msgs__msg__DiagnosticStatus__Array__init(diagnostic_msgs__msg__DiagnosticStatus__Array * array, size_t size);

/// Finalize array of diagnostic_msgs/DiagnosticStatus messages.
/**
 * It calls diagnostic_msgs__msg__DiagnosticStatus__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__msg__DiagnosticStatus__Array__fini(diagnostic_msgs__msg__DiagnosticStatus__Array * array);

/// Create array of diagnostic_msgs/DiagnosticStatus messages.
/**
 * It allocates the memory for the array and
 * calls diagnostic_msgs__msg__DiagnosticStatus__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
diagnostic_msgs__msg__DiagnosticStatus__Array *
diagnostic_msgs__msg__DiagnosticStatus__Array__create(size_t size);

/// Destroy array of diagnostic_msgs/DiagnosticStatus messages.
/**
 * It calls diagnostic_msgs__msg__DiagnosticStatus__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__msg__DiagnosticStatus__Array__destroy(diagnostic_msgs__msg__DiagnosticStatus__Array * array);

#if __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__MSG__DIAGNOSTIC_STATUS__FUNCTIONS_H_
