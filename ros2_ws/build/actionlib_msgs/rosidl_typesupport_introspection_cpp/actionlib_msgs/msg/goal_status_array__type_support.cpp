// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// providing offsetof()
#include <cstddef>
#include <vector>

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "actionlib_msgs/msg/goal_status_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace actionlib_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__GoalStatusArray__status_list(const void * untyped_member)
{
  const std::vector<actionlib_msgs::msg::GoalStatus> * member =
    reinterpret_cast<const std::vector<actionlib_msgs::msg::GoalStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GoalStatusArray__status_list(const void * untyped_member, size_t index)
{
  const std::vector<actionlib_msgs::msg::GoalStatus> & member =
    *reinterpret_cast<const std::vector<actionlib_msgs::msg::GoalStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__GoalStatusArray__status_list(void * untyped_member, size_t index)
{
  std::vector<actionlib_msgs::msg::GoalStatus> & member =
    *reinterpret_cast<std::vector<actionlib_msgs::msg::GoalStatus> *>(untyped_member);
  return &member[index];
}

void resize_function__GoalStatusArray__status_list(void * untyped_member, size_t size)
{
  std::vector<actionlib_msgs::msg::GoalStatus> * member =
    reinterpret_cast<std::vector<actionlib_msgs::msg::GoalStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GoalStatusArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(actionlib_msgs::msg::GoalStatusArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<actionlib_msgs::msg::GoalStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(actionlib_msgs::msg::GoalStatusArray, status_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__GoalStatusArray__status_list,  // size() function pointer
    get_const_function__GoalStatusArray__status_list,  // get_const(index) function pointer
    get_function__GoalStatusArray__status_list,  // get(index) function pointer
    resize_function__GoalStatusArray__status_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GoalStatusArray_message_members = {
  "actionlib_msgs",  // package name
  "GoalStatusArray",  // message name
  2,  // number of fields
  sizeof(actionlib_msgs::msg::GoalStatusArray),
  GoalStatusArray_message_member_array  // message members
};

static const rosidl_message_type_support_t GoalStatusArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GoalStatusArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace actionlib_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<actionlib_msgs::msg::GoalStatusArray>()
{
  return &::actionlib_msgs::msg::rosidl_typesupport_introspection_cpp::GoalStatusArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, actionlib_msgs, msg, GoalStatusArray)() {
  return &::actionlib_msgs::msg::rosidl_typesupport_introspection_cpp::GoalStatusArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
