// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__REQUEST__FUNCTIONS_H_
#define EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__REQUEST__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "example_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "example_interfaces/srv/add_two_ints__request__struct.h"

/// Initialize example_interfaces/AddTwoInts_Request message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(example_interfaces__srv__AddTwoInts_Request)) before
 * or use example_interfaces__srv__AddTwoInts_Request__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
bool
example_interfaces__srv__AddTwoInts_Request__init(example_interfaces__srv__AddTwoInts_Request * msg);

/// Finalize example_interfaces/AddTwoInts_Request message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
void
example_interfaces__srv__AddTwoInts_Request__fini(example_interfaces__srv__AddTwoInts_Request * msg);

/// Create example_interfaces/AddTwoInts_Request message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls example_interfaces__srv__AddTwoInts_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
example_interfaces__srv__AddTwoInts_Request *
example_interfaces__srv__AddTwoInts_Request__create();

/// Destroy example_interfaces/AddTwoInts_Request message.
/**
 * It calls example_interfaces__srv__AddTwoInts_Request__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
void
example_interfaces__srv__AddTwoInts_Request__destroy(example_interfaces__srv__AddTwoInts_Request * msg);


/// Initialize array of example_interfaces/AddTwoInts_Request messages.
/**
 * It allocates the memory for the number of elements and
 * calls example_interfaces__srv__AddTwoInts_Request__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
bool
example_interfaces__srv__AddTwoInts_Request__Array__init(example_interfaces__srv__AddTwoInts_Request__Array * array, size_t size);

/// Finalize array of example_interfaces/AddTwoInts_Request messages.
/**
 * It calls example_interfaces__srv__AddTwoInts_Request__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
void
example_interfaces__srv__AddTwoInts_Request__Array__fini(example_interfaces__srv__AddTwoInts_Request__Array * array);

/// Create array of example_interfaces/AddTwoInts_Request messages.
/**
 * It allocates the memory for the array and
 * calls example_interfaces__srv__AddTwoInts_Request__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
example_interfaces__srv__AddTwoInts_Request__Array *
example_interfaces__srv__AddTwoInts_Request__Array__create(size_t size);

/// Destroy array of example_interfaces/AddTwoInts_Request messages.
/**
 * It calls example_interfaces__srv__AddTwoInts_Request__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_example_interfaces
void
example_interfaces__srv__AddTwoInts_Request__Array__destroy(example_interfaces__srv__AddTwoInts_Request__Array * array);

#if __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__SRV__ADD_TWO_INTS__REQUEST__FUNCTIONS_H_
