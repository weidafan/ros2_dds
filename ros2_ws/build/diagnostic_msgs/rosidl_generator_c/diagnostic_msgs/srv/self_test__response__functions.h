// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__SELF_TEST__RESPONSE__FUNCTIONS_H_
#define DIAGNOSTIC_MSGS__SRV__SELF_TEST__RESPONSE__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "diagnostic_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "diagnostic_msgs/srv/self_test__response__struct.h"

/// Initialize diagnostic_msgs/SelfTest_Response message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(diagnostic_msgs__srv__SelfTest_Response)) before
 * or use diagnostic_msgs__srv__SelfTest_Response__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
bool
diagnostic_msgs__srv__SelfTest_Response__init(diagnostic_msgs__srv__SelfTest_Response * msg);

/// Finalize diagnostic_msgs/SelfTest_Response message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__srv__SelfTest_Response__fini(diagnostic_msgs__srv__SelfTest_Response * msg);

/// Create diagnostic_msgs/SelfTest_Response message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls diagnostic_msgs__srv__SelfTest_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
diagnostic_msgs__srv__SelfTest_Response *
diagnostic_msgs__srv__SelfTest_Response__create();

/// Destroy diagnostic_msgs/SelfTest_Response message.
/**
 * It calls diagnostic_msgs__srv__SelfTest_Response__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__srv__SelfTest_Response__destroy(diagnostic_msgs__srv__SelfTest_Response * msg);


/// Initialize array of diagnostic_msgs/SelfTest_Response messages.
/**
 * It allocates the memory for the number of elements and
 * calls diagnostic_msgs__srv__SelfTest_Response__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
bool
diagnostic_msgs__srv__SelfTest_Response__Array__init(diagnostic_msgs__srv__SelfTest_Response__Array * array, size_t size);

/// Finalize array of diagnostic_msgs/SelfTest_Response messages.
/**
 * It calls diagnostic_msgs__srv__SelfTest_Response__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__srv__SelfTest_Response__Array__fini(diagnostic_msgs__srv__SelfTest_Response__Array * array);

/// Create array of diagnostic_msgs/SelfTest_Response messages.
/**
 * It allocates the memory for the array and
 * calls diagnostic_msgs__srv__SelfTest_Response__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
diagnostic_msgs__srv__SelfTest_Response__Array *
diagnostic_msgs__srv__SelfTest_Response__Array__create(size_t size);

/// Destroy array of diagnostic_msgs/SelfTest_Response messages.
/**
 * It calls diagnostic_msgs__srv__SelfTest_Response__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_diagnostic_msgs
void
diagnostic_msgs__srv__SelfTest_Response__Array__destroy(diagnostic_msgs__srv__SelfTest_Response__Array * array);

#if __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__SRV__SELF_TEST__RESPONSE__FUNCTIONS_H_
