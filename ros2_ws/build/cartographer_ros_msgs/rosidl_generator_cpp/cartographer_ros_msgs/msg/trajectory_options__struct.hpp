// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__TRAJECTORY_OPTIONS__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__TRAJECTORY_OPTIONS__STRUCT_HPP_

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_cartographer_ros_msgs_msg_TrajectoryOptions __attribute__((deprecated))
#else
# define DEPRECATED_cartographer_ros_msgs_msg_TrajectoryOptions __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryOptions_
{
  using Type = TrajectoryOptions_<ContainerAllocator>;

  TrajectoryOptions_()
  {
  }
  explicit TrajectoryOptions_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _tracking_frame_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _tracking_frame_type tracking_frame;
  using _published_frame_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _published_frame_type published_frame;
  using _odom_frame_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _odom_frame_type odom_frame;
  using _provide_odom_frame_type =
      bool;
  _provide_odom_frame_type provide_odom_frame;
  using _use_odometry_type =
      bool;
  _use_odometry_type use_odometry;
  using _use_laser_scan_type =
      bool;
  _use_laser_scan_type use_laser_scan;
  using _use_multi_echo_laser_scan_type =
      bool;
  _use_multi_echo_laser_scan_type use_multi_echo_laser_scan;
  using _num_point_clouds_type =
      int32_t;
  _num_point_clouds_type num_point_clouds;
  using _trajectory_builder_options_proto_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _trajectory_builder_options_proto_type trajectory_builder_options_proto;

  // setters for named parameter idiom
  Type * set__tracking_frame(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->tracking_frame = _arg;
    return this;
  }
  Type * set__published_frame(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->published_frame = _arg;
    return this;
  }
  Type * set__odom_frame(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->odom_frame = _arg;
    return this;
  }
  Type * set__provide_odom_frame(
    const bool & _arg)
  {
    this->provide_odom_frame = _arg;
    return this;
  }
  Type * set__use_odometry(
    const bool & _arg)
  {
    this->use_odometry = _arg;
    return this;
  }
  Type * set__use_laser_scan(
    const bool & _arg)
  {
    this->use_laser_scan = _arg;
    return this;
  }
  Type * set__use_multi_echo_laser_scan(
    const bool & _arg)
  {
    this->use_multi_echo_laser_scan = _arg;
    return this;
  }
  Type * set__num_point_clouds(
    const int32_t & _arg)
  {
    this->num_point_clouds = _arg;
    return this;
  }
  Type * set__trajectory_builder_options_proto(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->trajectory_builder_options_proto = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator> *;
  using ConstRawPtr =
      const cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_cartographer_ros_msgs_msg_TrajectoryOptions
    std::shared_ptr<cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_cartographer_ros_msgs_msg_TrajectoryOptions
    std::shared_ptr<cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryOptions_ & other) const
  {
    if (this->tracking_frame != other.tracking_frame) {
      return false;
    }
    if (this->published_frame != other.published_frame) {
      return false;
    }
    if (this->odom_frame != other.odom_frame) {
      return false;
    }
    if (this->provide_odom_frame != other.provide_odom_frame) {
      return false;
    }
    if (this->use_odometry != other.use_odometry) {
      return false;
    }
    if (this->use_laser_scan != other.use_laser_scan) {
      return false;
    }
    if (this->use_multi_echo_laser_scan != other.use_multi_echo_laser_scan) {
      return false;
    }
    if (this->num_point_clouds != other.num_point_clouds) {
      return false;
    }
    if (this->trajectory_builder_options_proto != other.trajectory_builder_options_proto) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryOptions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryOptions_

// alias to use template instance with default allocator
using TrajectoryOptions =
    cartographer_ros_msgs::msg::TrajectoryOptions_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__TRAJECTORY_OPTIONS__STRUCT_HPP_
