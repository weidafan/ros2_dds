// generated from rosidl_typesupport_introspection_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// providing offsetof()
#include <cstddef>
#include <vector>

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"

#include "cartographer_ros_msgs/msg/submap_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cartographer_ros_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__SubmapList__trajectory(const void * untyped_member)
{
  const std::vector<cartographer_ros_msgs::msg::TrajectorySubmapList> * member =
    reinterpret_cast<const std::vector<cartographer_ros_msgs::msg::TrajectorySubmapList> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SubmapList__trajectory(const void * untyped_member, size_t index)
{
  const std::vector<cartographer_ros_msgs::msg::TrajectorySubmapList> & member =
    *reinterpret_cast<const std::vector<cartographer_ros_msgs::msg::TrajectorySubmapList> *>(untyped_member);
  return &member[index];
}

void * get_function__SubmapList__trajectory(void * untyped_member, size_t index)
{
  std::vector<cartographer_ros_msgs::msg::TrajectorySubmapList> & member =
    *reinterpret_cast<std::vector<cartographer_ros_msgs::msg::TrajectorySubmapList> *>(untyped_member);
  return &member[index];
}

void resize_function__SubmapList__trajectory(void * untyped_member, size_t size)
{
  std::vector<cartographer_ros_msgs::msg::TrajectorySubmapList> * member =
    reinterpret_cast<std::vector<cartographer_ros_msgs::msg::TrajectorySubmapList> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SubmapList_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs::msg::SubmapList, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cartographer_ros_msgs::msg::TrajectorySubmapList>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs::msg::SubmapList, trajectory),  // bytes offset in struct
    nullptr,  // default value
    size_function__SubmapList__trajectory,  // size() function pointer
    get_const_function__SubmapList__trajectory,  // get_const(index) function pointer
    get_function__SubmapList__trajectory,  // get(index) function pointer
    resize_function__SubmapList__trajectory  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SubmapList_message_members = {
  "cartographer_ros_msgs",  // package name
  "SubmapList",  // message name
  2,  // number of fields
  sizeof(cartographer_ros_msgs::msg::SubmapList),
  SubmapList_message_member_array  // message members
};

static const rosidl_message_type_support_t SubmapList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SubmapList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cartographer_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartographer_ros_msgs::msg::SubmapList>()
{
  return &::cartographer_ros_msgs::msg::rosidl_typesupport_introspection_cpp::SubmapList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartographer_ros_msgs, msg, SubmapList)() {
  return &::cartographer_ros_msgs::msg::rosidl_typesupport_introspection_cpp::SubmapList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
