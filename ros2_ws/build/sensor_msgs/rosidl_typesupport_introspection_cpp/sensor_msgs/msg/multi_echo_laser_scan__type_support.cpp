// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// providing offsetof()
#include <cstddef>
#include <vector>

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "sensor_msgs/msg/multi_echo_laser_scan__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sensor_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__MultiEchoLaserScan__ranges(const void * untyped_member)
{
  const std::vector<sensor_msgs::msg::LaserEcho> * member =
    reinterpret_cast<const std::vector<sensor_msgs::msg::LaserEcho> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiEchoLaserScan__ranges(const void * untyped_member, size_t index)
{
  const std::vector<sensor_msgs::msg::LaserEcho> & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::LaserEcho> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiEchoLaserScan__ranges(void * untyped_member, size_t index)
{
  std::vector<sensor_msgs::msg::LaserEcho> & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::LaserEcho> *>(untyped_member);
  return &member[index];
}

void resize_function__MultiEchoLaserScan__ranges(void * untyped_member, size_t size)
{
  std::vector<sensor_msgs::msg::LaserEcho> * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::LaserEcho> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiEchoLaserScan__intensities(const void * untyped_member)
{
  const std::vector<sensor_msgs::msg::LaserEcho> * member =
    reinterpret_cast<const std::vector<sensor_msgs::msg::LaserEcho> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiEchoLaserScan__intensities(const void * untyped_member, size_t index)
{
  const std::vector<sensor_msgs::msg::LaserEcho> & member =
    *reinterpret_cast<const std::vector<sensor_msgs::msg::LaserEcho> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiEchoLaserScan__intensities(void * untyped_member, size_t index)
{
  std::vector<sensor_msgs::msg::LaserEcho> & member =
    *reinterpret_cast<std::vector<sensor_msgs::msg::LaserEcho> *>(untyped_member);
  return &member[index];
}

void resize_function__MultiEchoLaserScan__intensities(void * untyped_member, size_t size)
{
  std::vector<sensor_msgs::msg::LaserEcho> * member =
    reinterpret_cast<std::vector<sensor_msgs::msg::LaserEcho> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MultiEchoLaserScan_message_member_array[10] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::MultiEchoLaserScan, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angle_min",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::MultiEchoLaserScan, angle_min),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angle_max",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::MultiEchoLaserScan, angle_max),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angle_increment",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::MultiEchoLaserScan, angle_increment),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_increment",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::MultiEchoLaserScan, time_increment),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "scan_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::MultiEchoLaserScan, scan_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "range_min",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::MultiEchoLaserScan, range_min),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "range_max",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::MultiEchoLaserScan, range_max),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ranges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::LaserEcho>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::MultiEchoLaserScan, ranges),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiEchoLaserScan__ranges,  // size() function pointer
    get_const_function__MultiEchoLaserScan__ranges,  // get_const(index) function pointer
    get_function__MultiEchoLaserScan__ranges,  // get(index) function pointer
    resize_function__MultiEchoLaserScan__ranges  // resize(index) function pointer
  },
  {
    "intensities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::LaserEcho>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::MultiEchoLaserScan, intensities),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiEchoLaserScan__intensities,  // size() function pointer
    get_const_function__MultiEchoLaserScan__intensities,  // get_const(index) function pointer
    get_function__MultiEchoLaserScan__intensities,  // get(index) function pointer
    resize_function__MultiEchoLaserScan__intensities  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MultiEchoLaserScan_message_members = {
  "sensor_msgs",  // package name
  "MultiEchoLaserScan",  // message name
  10,  // number of fields
  sizeof(sensor_msgs::msg::MultiEchoLaserScan),
  MultiEchoLaserScan_message_member_array  // message members
};

static const rosidl_message_type_support_t MultiEchoLaserScan_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MultiEchoLaserScan_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sensor_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sensor_msgs::msg::MultiEchoLaserScan>()
{
  return &::sensor_msgs::msg::rosidl_typesupport_introspection_cpp::MultiEchoLaserScan_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sensor_msgs, msg, MultiEchoLaserScan)() {
  return &::sensor_msgs::msg::rosidl_typesupport_introspection_cpp::MultiEchoLaserScan_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
