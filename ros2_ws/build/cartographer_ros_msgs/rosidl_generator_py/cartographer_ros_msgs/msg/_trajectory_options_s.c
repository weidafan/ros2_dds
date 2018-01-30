// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <cartographer_ros_msgs/msg/trajectory_options__struct.h>
#include <cartographer_ros_msgs/msg/trajectory_options__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * cartographer_ros_msgs_trajectory_options__convert_from_py(PyObject * _pymsg)
{
  cartographer_ros_msgs__msg__TrajectoryOptions * ros_message = cartographer_ros_msgs__msg__TrajectoryOptions__create();
  (void)ros_message;
  char full_classname_dest[64];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "cartographer_ros_msgs.msg._trajectory_options.TrajectoryOptions",
      full_classname_dest, 63) == 0);

  PyObject * pytracking_frame = PyObject_GetAttrString(_pymsg, "tracking_frame");
  assert(PyUnicode_Check(pytracking_frame));
  rosidl_generator_c__String__assign(
    &ros_message->tracking_frame, (char *)PyUnicode_1BYTE_DATA(pytracking_frame));
  PyObject * pypublished_frame = PyObject_GetAttrString(_pymsg, "published_frame");
  assert(PyUnicode_Check(pypublished_frame));
  rosidl_generator_c__String__assign(
    &ros_message->published_frame, (char *)PyUnicode_1BYTE_DATA(pypublished_frame));
  PyObject * pyodom_frame = PyObject_GetAttrString(_pymsg, "odom_frame");
  assert(PyUnicode_Check(pyodom_frame));
  rosidl_generator_c__String__assign(
    &ros_message->odom_frame, (char *)PyUnicode_1BYTE_DATA(pyodom_frame));
  PyObject * pyprovide_odom_frame = PyObject_GetAttrString(_pymsg, "provide_odom_frame");
  assert(PyBool_Check(pyprovide_odom_frame));
  ros_message->provide_odom_frame = (Py_True == pyprovide_odom_frame);
  PyObject * pyuse_odometry = PyObject_GetAttrString(_pymsg, "use_odometry");
  assert(PyBool_Check(pyuse_odometry));
  ros_message->use_odometry = (Py_True == pyuse_odometry);
  PyObject * pyuse_laser_scan = PyObject_GetAttrString(_pymsg, "use_laser_scan");
  assert(PyBool_Check(pyuse_laser_scan));
  ros_message->use_laser_scan = (Py_True == pyuse_laser_scan);
  PyObject * pyuse_multi_echo_laser_scan = PyObject_GetAttrString(_pymsg, "use_multi_echo_laser_scan");
  assert(PyBool_Check(pyuse_multi_echo_laser_scan));
  ros_message->use_multi_echo_laser_scan = (Py_True == pyuse_multi_echo_laser_scan);
  PyObject * pynum_point_clouds = PyObject_GetAttrString(_pymsg, "num_point_clouds");
  assert(PyLong_Check(pynum_point_clouds));
  ros_message->num_point_clouds = (int32_t)PyLong_AsLong(pynum_point_clouds);
  PyObject * pytrajectory_builder_options_proto = PyObject_GetAttrString(_pymsg, "trajectory_builder_options_proto");
  assert(PyUnicode_Check(pytrajectory_builder_options_proto));
  rosidl_generator_c__String__assign(
    &ros_message->trajectory_builder_options_proto, (char *)PyUnicode_1BYTE_DATA(pytrajectory_builder_options_proto));

  assert(ros_message != NULL);
  return ros_message;
}

void cartographer_ros_msgs_trajectory_options__destroy_ros_message(void * raw_ros_message)
{
  cartographer_ros_msgs__msg__TrajectoryOptions * ros_message = (cartographer_ros_msgs__msg__TrajectoryOptions *)raw_ros_message;
  (void)ros_message;

  cartographer_ros_msgs__msg__TrajectoryOptions__destroy(ros_message);
}

PyObject * cartographer_ros_msgs_trajectory_options__convert_to_py(void * raw_ros_message)
{
  cartographer_ros_msgs__msg__TrajectoryOptions * ros_message = (cartographer_ros_msgs__msg__TrajectoryOptions *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("cartographer_ros_msgs.msg._trajectory_options");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrajectoryOptions");

  /* NOTE(esteve): Call constructor of TrajectoryOptions */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pytracking_frame = NULL;
  pytracking_frame = PyUnicode_FromString(ros_message->tracking_frame.data);
  assert(pytracking_frame != NULL);
  Py_INCREF(pytracking_frame);
  PyObject_SetAttrString(_pymessage, "tracking_frame", pytracking_frame);
  PyObject * pypublished_frame = NULL;
  pypublished_frame = PyUnicode_FromString(ros_message->published_frame.data);
  assert(pypublished_frame != NULL);
  Py_INCREF(pypublished_frame);
  PyObject_SetAttrString(_pymessage, "published_frame", pypublished_frame);
  PyObject * pyodom_frame = NULL;
  pyodom_frame = PyUnicode_FromString(ros_message->odom_frame.data);
  assert(pyodom_frame != NULL);
  Py_INCREF(pyodom_frame);
  PyObject_SetAttrString(_pymessage, "odom_frame", pyodom_frame);
  PyObject * pyprovide_odom_frame = NULL;
  pyprovide_odom_frame = ros_message->provide_odom_frame ? Py_True : Py_False;
  assert(pyprovide_odom_frame != NULL);
  Py_INCREF(pyprovide_odom_frame);
  PyObject_SetAttrString(_pymessage, "provide_odom_frame", pyprovide_odom_frame);
  PyObject * pyuse_odometry = NULL;
  pyuse_odometry = ros_message->use_odometry ? Py_True : Py_False;
  assert(pyuse_odometry != NULL);
  Py_INCREF(pyuse_odometry);
  PyObject_SetAttrString(_pymessage, "use_odometry", pyuse_odometry);
  PyObject * pyuse_laser_scan = NULL;
  pyuse_laser_scan = ros_message->use_laser_scan ? Py_True : Py_False;
  assert(pyuse_laser_scan != NULL);
  Py_INCREF(pyuse_laser_scan);
  PyObject_SetAttrString(_pymessage, "use_laser_scan", pyuse_laser_scan);
  PyObject * pyuse_multi_echo_laser_scan = NULL;
  pyuse_multi_echo_laser_scan = ros_message->use_multi_echo_laser_scan ? Py_True : Py_False;
  assert(pyuse_multi_echo_laser_scan != NULL);
  Py_INCREF(pyuse_multi_echo_laser_scan);
  PyObject_SetAttrString(_pymessage, "use_multi_echo_laser_scan", pyuse_multi_echo_laser_scan);
  PyObject * pynum_point_clouds = NULL;
  pynum_point_clouds = PyLong_FromLong(ros_message->num_point_clouds);
  assert(pynum_point_clouds != NULL);
  Py_INCREF(pynum_point_clouds);
  PyObject_SetAttrString(_pymessage, "num_point_clouds", pynum_point_clouds);
  PyObject * pytrajectory_builder_options_proto = NULL;
  pytrajectory_builder_options_proto = PyUnicode_FromString(ros_message->trajectory_builder_options_proto.data);
  assert(pytrajectory_builder_options_proto != NULL);
  Py_INCREF(pytrajectory_builder_options_proto);
  PyObject_SetAttrString(_pymessage, "trajectory_builder_options_proto", pytrajectory_builder_options_proto);
  assert(_pymessage != NULL);
  return _pymessage;
}
