// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// providing offsetof()
#include <cstddef>
#include <vector>

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "diagnostic_msgs/msg/diagnostic_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace diagnostic_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__DiagnosticStatus__values(const void * untyped_member)
{
  const std::vector<diagnostic_msgs::msg::KeyValue> * member =
    reinterpret_cast<const std::vector<diagnostic_msgs::msg::KeyValue> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DiagnosticStatus__values(const void * untyped_member, size_t index)
{
  const std::vector<diagnostic_msgs::msg::KeyValue> & member =
    *reinterpret_cast<const std::vector<diagnostic_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void * get_function__DiagnosticStatus__values(void * untyped_member, size_t index)
{
  std::vector<diagnostic_msgs::msg::KeyValue> & member =
    *reinterpret_cast<std::vector<diagnostic_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void resize_function__DiagnosticStatus__values(void * untyped_member, size_t size)
{
  std::vector<diagnostic_msgs::msg::KeyValue> * member =
    reinterpret_cast<std::vector<diagnostic_msgs::msg::KeyValue> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DiagnosticStatus_message_member_array[5] = {
  {
    "level",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BYTE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs::msg::DiagnosticStatus, level),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs::msg::DiagnosticStatus, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs::msg::DiagnosticStatus, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hardware_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs::msg::DiagnosticStatus, hardware_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<diagnostic_msgs::msg::KeyValue>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs::msg::DiagnosticStatus, values),  // bytes offset in struct
    nullptr,  // default value
    size_function__DiagnosticStatus__values,  // size() function pointer
    get_const_function__DiagnosticStatus__values,  // get_const(index) function pointer
    get_function__DiagnosticStatus__values,  // get(index) function pointer
    resize_function__DiagnosticStatus__values  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DiagnosticStatus_message_members = {
  "diagnostic_msgs",  // package name
  "DiagnosticStatus",  // message name
  5,  // number of fields
  sizeof(diagnostic_msgs::msg::DiagnosticStatus),
  DiagnosticStatus_message_member_array  // message members
};

static const rosidl_message_type_support_t DiagnosticStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DiagnosticStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace diagnostic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<diagnostic_msgs::msg::DiagnosticStatus>()
{
  return &::diagnostic_msgs::msg::rosidl_typesupport_introspection_cpp::DiagnosticStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, diagnostic_msgs, msg, DiagnosticStatus)() {
  return &::diagnostic_msgs::msg::rosidl_typesupport_introspection_cpp::DiagnosticStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
