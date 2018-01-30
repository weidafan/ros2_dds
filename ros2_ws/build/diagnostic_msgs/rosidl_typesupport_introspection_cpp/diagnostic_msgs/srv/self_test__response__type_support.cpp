// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// providing offsetof()
#include <cstddef>
#include <vector>

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "diagnostic_msgs/srv/self_test__response__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace diagnostic_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__SelfTest_Response__status(const void * untyped_member)
{
  const std::vector<diagnostic_msgs::msg::DiagnosticStatus> * member =
    reinterpret_cast<const std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SelfTest_Response__status(const void * untyped_member, size_t index)
{
  const std::vector<diagnostic_msgs::msg::DiagnosticStatus> & member =
    *reinterpret_cast<const std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__SelfTest_Response__status(void * untyped_member, size_t index)
{
  std::vector<diagnostic_msgs::msg::DiagnosticStatus> & member =
    *reinterpret_cast<std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  return &member[index];
}

void resize_function__SelfTest_Response__status(void * untyped_member, size_t size)
{
  std::vector<diagnostic_msgs::msg::DiagnosticStatus> * member =
    reinterpret_cast<std::vector<diagnostic_msgs::msg::DiagnosticStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SelfTest_Response_message_member_array[3] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs::srv::SelfTest_Response, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "passed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BYTE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs::srv::SelfTest_Response, passed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<diagnostic_msgs::msg::DiagnosticStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(diagnostic_msgs::srv::SelfTest_Response, status),  // bytes offset in struct
    nullptr,  // default value
    size_function__SelfTest_Response__status,  // size() function pointer
    get_const_function__SelfTest_Response__status,  // get_const(index) function pointer
    get_function__SelfTest_Response__status,  // get(index) function pointer
    resize_function__SelfTest_Response__status  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SelfTest_Response_message_members = {
  "diagnostic_msgs",  // package name
  "SelfTest_Response",  // message name
  3,  // number of fields
  sizeof(diagnostic_msgs::srv::SelfTest_Response),
  SelfTest_Response_message_member_array  // message members
};

static const rosidl_message_type_support_t SelfTest_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SelfTest_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace diagnostic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<diagnostic_msgs::srv::SelfTest_Response>()
{
  return &::diagnostic_msgs::srv::rosidl_typesupport_introspection_cpp::SelfTest_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, diagnostic_msgs, srv, SelfTest_Response)() {
  return &::diagnostic_msgs::srv::rosidl_typesupport_introspection_cpp::SelfTest_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
