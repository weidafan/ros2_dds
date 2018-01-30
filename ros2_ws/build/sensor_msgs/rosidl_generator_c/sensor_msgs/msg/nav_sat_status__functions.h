// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__NAV_SAT_STATUS__FUNCTIONS_H_
#define SENSOR_MSGS__MSG__NAV_SAT_STATUS__FUNCTIONS_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "sensor_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "sensor_msgs/msg/nav_sat_status__struct.h"

/// Initialize sensor_msgs/NavSatStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(sensor_msgs__msg__NavSatStatus)) before
 * or use sensor_msgs__msg__NavSatStatus__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__NavSatStatus__init(sensor_msgs__msg__NavSatStatus * msg);

/// Finalize sensor_msgs/NavSatStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__NavSatStatus__fini(sensor_msgs__msg__NavSatStatus * msg);

/// Create sensor_msgs/NavSatStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls sensor_msgs__msg__NavSatStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
sensor_msgs__msg__NavSatStatus *
sensor_msgs__msg__NavSatStatus__create();

/// Destroy sensor_msgs/NavSatStatus message.
/**
 * It calls sensor_msgs__msg__NavSatStatus__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__NavSatStatus__destroy(sensor_msgs__msg__NavSatStatus * msg);


/// Initialize array of sensor_msgs/NavSatStatus messages.
/**
 * It allocates the memory for the number of elements and
 * calls sensor_msgs__msg__NavSatStatus__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__NavSatStatus__Array__init(sensor_msgs__msg__NavSatStatus__Array * array, size_t size);

/// Finalize array of sensor_msgs/NavSatStatus messages.
/**
 * It calls sensor_msgs__msg__NavSatStatus__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__NavSatStatus__Array__fini(sensor_msgs__msg__NavSatStatus__Array * array);

/// Create array of sensor_msgs/NavSatStatus messages.
/**
 * It allocates the memory for the array and
 * calls sensor_msgs__msg__NavSatStatus__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
sensor_msgs__msg__NavSatStatus__Array *
sensor_msgs__msg__NavSatStatus__Array__create(size_t size);

/// Destroy array of sensor_msgs/NavSatStatus messages.
/**
 * It calls sensor_msgs__msg__NavSatStatus__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__NavSatStatus__Array__destroy(sensor_msgs__msg__NavSatStatus__Array * array);

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__NAV_SAT_STATUS__FUNCTIONS_H_
