// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__EMPTY__REQUEST__FUNCTIONS_H_
#define STD_SRVS__SRV__EMPTY__REQUEST__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "std_srvs/msg/rosidl_generator_c__visibility_control.h"

#include "std_srvs/srv/empty__request__struct.h"

/// Initialize std_srvs/Empty_Request message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(std_srvs__srv__Empty_Request)) before
 * or use std_srvs__srv__Empty_Request__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
bool
std_srvs__srv__Empty_Request__init(std_srvs__srv__Empty_Request * msg);

/// Finalize std_srvs/Empty_Request message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
void
std_srvs__srv__Empty_Request__fini(std_srvs__srv__Empty_Request * msg);

/// Create std_srvs/Empty_Request message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls std_srvs__srv__Empty_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
std_srvs__srv__Empty_Request *
std_srvs__srv__Empty_Request__create();

/// Destroy std_srvs/Empty_Request message.
/**
 * It calls std_srvs__srv__Empty_Request__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
void
std_srvs__srv__Empty_Request__destroy(std_srvs__srv__Empty_Request * msg);


/// Initialize array of std_srvs/Empty_Request messages.
/**
 * It allocates the memory for the number of elements and
 * calls std_srvs__srv__Empty_Request__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
bool
std_srvs__srv__Empty_Request__Array__init(std_srvs__srv__Empty_Request__Array * array, size_t size);

/// Finalize array of std_srvs/Empty_Request messages.
/**
 * It calls std_srvs__srv__Empty_Request__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
void
std_srvs__srv__Empty_Request__Array__fini(std_srvs__srv__Empty_Request__Array * array);

/// Create array of std_srvs/Empty_Request messages.
/**
 * It allocates the memory for the array and
 * calls std_srvs__srv__Empty_Request__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
std_srvs__srv__Empty_Request__Array *
std_srvs__srv__Empty_Request__Array__create(size_t size);

/// Destroy array of std_srvs/Empty_Request messages.
/**
 * It calls std_srvs__srv__Empty_Request__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_srvs
void
std_srvs__srv__Empty_Request__Array__destroy(std_srvs__srv__Empty_Request__Array * array);

#if __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__EMPTY__REQUEST__FUNCTIONS_H_
