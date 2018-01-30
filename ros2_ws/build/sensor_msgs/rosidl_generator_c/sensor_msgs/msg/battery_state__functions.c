// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "sensor_msgs/msg/battery_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// header
#include "std_msgs/msg/header__functions.h"
// cell_voltage
#include "rosidl_generator_c/primitives_array_functions.h"
// location
// serial_number
#include "rosidl_generator_c/string_functions.h"

bool
sensor_msgs__msg__BatteryState__init(sensor_msgs__msg__BatteryState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  std_msgs__msg__Header__init(&msg->header);
  // voltage
  // current
  // charge
  // capacity
  // design_capacity
  // percentage
  // power_supply_status
  // power_supply_health
  // power_supply_technology
  // present
  // cell_voltage
  rosidl_generator_c__float32__Array__init(&msg->cell_voltage, 0);
  // location
  rosidl_generator_c__String__init(&msg->location);
  // serial_number
  rosidl_generator_c__String__init(&msg->serial_number);
  return true;
}

void
sensor_msgs__msg__BatteryState__fini(sensor_msgs__msg__BatteryState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // voltage
  // current
  // charge
  // capacity
  // design_capacity
  // percentage
  // power_supply_status
  // power_supply_health
  // power_supply_technology
  // present
  // cell_voltage
  rosidl_generator_c__float32__Array__fini(&msg->cell_voltage);
  // location
  rosidl_generator_c__String__fini(&msg->location);
  // serial_number
  rosidl_generator_c__String__fini(&msg->serial_number);
}

sensor_msgs__msg__BatteryState *
sensor_msgs__msg__BatteryState__create()
{
  sensor_msgs__msg__BatteryState * msg = (sensor_msgs__msg__BatteryState *)malloc(sizeof(sensor_msgs__msg__BatteryState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__BatteryState));
  bool success = sensor_msgs__msg__BatteryState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__BatteryState__destroy(sensor_msgs__msg__BatteryState * msg)
{
  if (msg) {
    sensor_msgs__msg__BatteryState__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__BatteryState__Array__init(sensor_msgs__msg__BatteryState__Array * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__BatteryState * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__BatteryState *)calloc(size, sizeof(sensor_msgs__msg__BatteryState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__BatteryState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__BatteryState__fini(&data[i - 1]);
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
sensor_msgs__msg__BatteryState__Array__fini(sensor_msgs__msg__BatteryState__Array * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__BatteryState__fini(&array->data[i]);
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

sensor_msgs__msg__BatteryState__Array *
sensor_msgs__msg__BatteryState__Array__create(size_t size)
{
  sensor_msgs__msg__BatteryState__Array * array = (sensor_msgs__msg__BatteryState__Array *)malloc(sizeof(sensor_msgs__msg__BatteryState__Array));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__BatteryState__Array__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__BatteryState__Array__destroy(sensor_msgs__msg__BatteryState__Array * array)
{
  if (array) {
    sensor_msgs__msg__BatteryState__Array__fini(array);
  }
  free(array);
}
