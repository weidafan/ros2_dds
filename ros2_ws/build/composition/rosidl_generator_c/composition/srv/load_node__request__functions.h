// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef COMPOSITION__SRV__LOAD_NODE__REQUEST__FUNCTIONS_H_
#define COMPOSITION__SRV__LOAD_NODE__REQUEST__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "composition/msg/rosidl_generator_c__visibility_control.h"

#include "composition/srv/load_node__request__struct.h"

/// Initialize composition/LoadNode_Request message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(composition__srv__LoadNode_Request)) before
 * or use composition__srv__LoadNode_Request__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_composition
bool
composition__srv__LoadNode_Request__init(composition__srv__LoadNode_Request * msg);

/// Finalize composition/LoadNode_Request message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition
void
composition__srv__LoadNode_Request__fini(composition__srv__LoadNode_Request * msg);

/// Create composition/LoadNode_Request message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls composition__srv__LoadNode_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_composition
composition__srv__LoadNode_Request *
composition__srv__LoadNode_Request__create();

/// Destroy composition/LoadNode_Request message.
/**
 * It calls composition__srv__LoadNode_Request__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition
void
composition__srv__LoadNode_Request__destroy(composition__srv__LoadNode_Request * msg);


/// Initialize array of composition/LoadNode_Request messages.
/**
 * It allocates the memory for the number of elements and
 * calls composition__srv__LoadNode_Request__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition
bool
composition__srv__LoadNode_Request__Array__init(composition__srv__LoadNode_Request__Array * array, size_t size);

/// Finalize array of composition/LoadNode_Request messages.
/**
 * It calls composition__srv__LoadNode_Request__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition
void
composition__srv__LoadNode_Request__Array__fini(composition__srv__LoadNode_Request__Array * array);

/// Create array of composition/LoadNode_Request messages.
/**
 * It allocates the memory for the array and
 * calls composition__srv__LoadNode_Request__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_composition
composition__srv__LoadNode_Request__Array *
composition__srv__LoadNode_Request__Array__create(size_t size);

/// Destroy array of composition/LoadNode_Request messages.
/**
 * It calls composition__srv__LoadNode_Request__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_composition
void
composition__srv__LoadNode_Request__Array__destroy(composition__srv__LoadNode_Request__Array * array);

#if __cplusplus
}
#endif

#endif  // COMPOSITION__SRV__LOAD_NODE__REQUEST__FUNCTIONS_H_
