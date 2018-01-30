// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__BATTERY_STATE__STRUCT_H_
#define SENSOR_MSGS__MSG__BATTERY_STATE__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// header
#include "std_msgs/msg/header__struct.h"
// cell_voltage
#include "rosidl_generator_c/primitives_array.h"
// location
// serial_number
#include "rosidl_generator_c/string.h"

// constants defined in the message
// POWER_SUPPLY_STATUS_UNKNOWN
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_STATUS_UNKNOWN = 0u
};
// POWER_SUPPLY_STATUS_CHARGING
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_STATUS_CHARGING = 1u
};
// POWER_SUPPLY_STATUS_DISCHARGING
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_STATUS_DISCHARGING = 2u
};
// POWER_SUPPLY_STATUS_NOT_CHARGING
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_STATUS_NOT_CHARGING = 3u
};
// POWER_SUPPLY_STATUS_FULL
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_STATUS_FULL = 4u
};
// POWER_SUPPLY_HEALTH_UNKNOWN
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_UNKNOWN = 0u
};
// POWER_SUPPLY_HEALTH_GOOD
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_GOOD = 1u
};
// POWER_SUPPLY_HEALTH_OVERHEAT
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_OVERHEAT = 2u
};
// POWER_SUPPLY_HEALTH_DEAD
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_DEAD = 3u
};
// POWER_SUPPLY_HEALTH_OVERVOLTAGE
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_OVERVOLTAGE = 4u
};
// POWER_SUPPLY_HEALTH_UNSPEC_FAILURE
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_UNSPEC_FAILURE = 5u
};
// POWER_SUPPLY_HEALTH_COLD
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_COLD = 6u
};
// POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE = 7u
};
// POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE = 8u
};
// POWER_SUPPLY_TECHNOLOGY_UNKNOWN
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_UNKNOWN = 0u
};
// POWER_SUPPLY_TECHNOLOGY_NIMH
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_NIMH = 1u
};
// POWER_SUPPLY_TECHNOLOGY_LION
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_LION = 2u
};
// POWER_SUPPLY_TECHNOLOGY_LIPO
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_LIPO = 3u
};
// POWER_SUPPLY_TECHNOLOGY_LIFE
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_LIFE = 4u
};
// POWER_SUPPLY_TECHNOLOGY_NICD
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_NICD = 5u
};
// POWER_SUPPLY_TECHNOLOGY_LIMN
enum
{
  sensor_msgs__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_LIMN = 6u
};

/// Struct of message sensor_msgs/BatteryState
typedef struct sensor_msgs__msg__BatteryState
{
  std_msgs__msg__Header header;
  float voltage;
  float current;
  float charge;
  float capacity;
  float design_capacity;
  float percentage;
  uint8_t power_supply_status;
  uint8_t power_supply_health;
  uint8_t power_supply_technology;
  bool present;
  rosidl_generator_c__float32__Array cell_voltage;
  rosidl_generator_c__String location;
  rosidl_generator_c__String serial_number;
} sensor_msgs__msg__BatteryState;

/// Struct for an array of messages
typedef struct sensor_msgs__msg__BatteryState__Array
{
  sensor_msgs__msg__BatteryState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__msg__BatteryState__Array;

#if __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__BATTERY_STATE__STRUCT_H_
