// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__GOAL_STATUS__FUNCTIONS_H_
#define ACTIONLIB_MSGS__MSG__GOAL_STATUS__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "actionlib_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "actionlib_msgs/msg/goal_status__struct.h"

/// Initialize actionlib_msgs/GoalStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(actionlib_msgs__msg__GoalStatus)) before
 * or use actionlib_msgs__msg__GoalStatus__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
bool
actionlib_msgs__msg__GoalStatus__init(actionlib_msgs__msg__GoalStatus * msg);

/// Finalize actionlib_msgs/GoalStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
void
actionlib_msgs__msg__GoalStatus__fini(actionlib_msgs__msg__GoalStatus * msg);

/// Create actionlib_msgs/GoalStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls actionlib_msgs__msg__GoalStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
actionlib_msgs__msg__GoalStatus *
actionlib_msgs__msg__GoalStatus__create();

/// Destroy actionlib_msgs/GoalStatus message.
/**
 * It calls actionlib_msgs__msg__GoalStatus__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
void
actionlib_msgs__msg__GoalStatus__destroy(actionlib_msgs__msg__GoalStatus * msg);


/// Initialize array of actionlib_msgs/GoalStatus messages.
/**
 * It allocates the memory for the number of elements and
 * calls actionlib_msgs__msg__GoalStatus__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
bool
actionlib_msgs__msg__GoalStatus__Array__init(actionlib_msgs__msg__GoalStatus__Array * array, size_t size);

/// Finalize array of actionlib_msgs/GoalStatus messages.
/**
 * It calls actionlib_msgs__msg__GoalStatus__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
void
actionlib_msgs__msg__GoalStatus__Array__fini(actionlib_msgs__msg__GoalStatus__Array * array);

/// Create array of actionlib_msgs/GoalStatus messages.
/**
 * It allocates the memory for the array and
 * calls actionlib_msgs__msg__GoalStatus__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
actionlib_msgs__msg__GoalStatus__Array *
actionlib_msgs__msg__GoalStatus__Array__create(size_t size);

/// Destroy array of actionlib_msgs/GoalStatus messages.
/**
 * It calls actionlib_msgs__msg__GoalStatus__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_actionlib_msgs
void
actionlib_msgs__msg__GoalStatus__Array__destroy(actionlib_msgs__msg__GoalStatus__Array * array);

#if __cplusplus
}
#endif

#endif  // ACTIONLIB_MSGS__MSG__GOAL_STATUS__FUNCTIONS_H_
