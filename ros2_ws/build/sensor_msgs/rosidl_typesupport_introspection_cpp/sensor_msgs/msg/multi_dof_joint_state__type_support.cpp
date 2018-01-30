// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// providing offsetof()
#include <cstddef>
#include <vector>

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "sensor_msgs/msg/multi_dof_joint_state__struct.hpp"
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

size_t size_function__MultiDOFJointState__transforms(const void * untyped_member)
{
  const std::vector<geometry_msgs::msg::Transform> * member =
    reinterpret_cast<const std::vector<geometry_msgs::msg::Transform> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiDOFJointState__transforms(const void * untyped_member, size_t index)
{
  const std::vector<geometry_msgs::msg::Transform> & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Transform> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiDOFJointState__transforms(void * untyped_member, size_t index)
{
  std::vector<geometry_msgs::msg::Transform> & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Transform> *>(untyped_member);
  return &member[index];
}

void resize_function__MultiDOFJointState__transforms(void * untyped_member, size_t size)
{
  std::vector<geometry_msgs::msg::Transform> * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Transform> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiDOFJointState__twist(const void * untyped_member)
{
  const std::vector<geometry_msgs::msg::Twist> * member =
    reinterpret_cast<const std::vector<geometry_msgs::msg::Twist> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiDOFJointState__twist(const void * untyped_member, size_t index)
{
  const std::vector<geometry_msgs::msg::Twist> & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Twist> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiDOFJointState__twist(void * untyped_member, size_t index)
{
  std::vector<geometry_msgs::msg::Twist> & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Twist> *>(untyped_member);
  return &member[index];
}

void resize_function__MultiDOFJointState__twist(void * untyped_member, size_t size)
{
  std::vector<geometry_msgs::msg::Twist> * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Twist> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiDOFJointState__wrench(const void * untyped_member)
{
  const std::vector<geometry_msgs::msg::Wrench> * member =
    reinterpret_cast<const std::vector<geometry_msgs::msg::Wrench> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiDOFJointState__wrench(const void * untyped_member, size_t index)
{
  const std::vector<geometry_msgs::msg::Wrench> & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Wrench> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiDOFJointState__wrench(void * untyped_member, size_t index)
{
  std::vector<geometry_msgs::msg::Wrench> & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Wrench> *>(untyped_member);
  return &member[index];
}

void resize_function__MultiDOFJointState__wrench(void * untyped_member, size_t size)
{
  std::vector<geometry_msgs::msg::Wrench> * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Wrench> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MultiDOFJointState_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::MultiDOFJointState, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::MultiDOFJointState, joint_names),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "transforms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Transform>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::MultiDOFJointState, transforms),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiDOFJointState__transforms,  // size() function pointer
    get_const_function__MultiDOFJointState__transforms,  // get_const(index) function pointer
    get_function__MultiDOFJointState__transforms,  // get(index) function pointer
    resize_function__MultiDOFJointState__transforms  // resize(index) function pointer
  },
  {
    "twist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Twist>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::MultiDOFJointState, twist),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiDOFJointState__twist,  // size() function pointer
    get_const_function__MultiDOFJointState__twist,  // get_const(index) function pointer
    get_function__MultiDOFJointState__twist,  // get(index) function pointer
    resize_function__MultiDOFJointState__twist  // resize(index) function pointer
  },
  {
    "wrench",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Wrench>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_msgs::msg::MultiDOFJointState, wrench),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiDOFJointState__wrench,  // size() function pointer
    get_const_function__MultiDOFJointState__wrench,  // get_const(index) function pointer
    get_function__MultiDOFJointState__wrench,  // get(index) function pointer
    resize_function__MultiDOFJointState__wrench  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MultiDOFJointState_message_members = {
  "sensor_msgs",  // package name
  "MultiDOFJointState",  // message name
  5,  // number of fields
  sizeof(sensor_msgs::msg::MultiDOFJointState),
  MultiDOFJointState_message_member_array  // message members
};

static const rosidl_message_type_support_t MultiDOFJointState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MultiDOFJointState_message_members,
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
get_message_type_support_handle<sensor_msgs::msg::MultiDOFJointState>()
{
  return &::sensor_msgs::msg::rosidl_typesupport_introspection_cpp::MultiDOFJointState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sensor_msgs, msg, MultiDOFJointState)() {
  return &::sensor_msgs::msg::rosidl_typesupport_introspection_cpp::MultiDOFJointState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
