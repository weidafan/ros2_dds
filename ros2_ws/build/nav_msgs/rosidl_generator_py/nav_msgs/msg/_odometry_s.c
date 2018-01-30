// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <nav_msgs/msg/odometry__struct.h>
#include <nav_msgs/msg/odometry__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * nav_msgs_odometry__convert_from_py(PyObject * _pymsg)
{
  nav_msgs__msg__Odometry * ros_message = nav_msgs__msg__Odometry__create();
  (void)ros_message;
  char full_classname_dest[32];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "nav_msgs.msg._odometry.Odometry",
      full_classname_dest, 31) == 0);

  PyObject * pyheader = PyObject_GetAttrString(_pymsg, "header");
  PyObject * pyheader_msg_module = PyImport_ImportModule("std_msgs.msg._header");
  PyObject * pyheader_msg_class = PyObject_GetAttrString(pyheader_msg_module, "Header");
  PyObject * pyheader_msg_metaclass = PyObject_GetAttrString(pyheader_msg_class, "__class__");
  PyObject * pyheader_convert_from_py = PyObject_GetAttrString(pyheader_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_header = (convert_from_py_signature)PyCapsule_GetPointer(pyheader_convert_from_py, NULL);
  std_msgs__msg__Header * tmpheader = (std_msgs__msg__Header *) convert_from_py_header(pyheader);
  if (!tmpheader) {
    return NULL;
  }
  ros_message->header = *tmpheader;
  PyObject * pychild_frame_id = PyObject_GetAttrString(_pymsg, "child_frame_id");
  assert(PyUnicode_Check(pychild_frame_id));
  rosidl_generator_c__String__assign(
    &ros_message->child_frame_id, (char *)PyUnicode_1BYTE_DATA(pychild_frame_id));
  PyObject * pypose = PyObject_GetAttrString(_pymsg, "pose");
  PyObject * pypose_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose_with_covariance");
  PyObject * pypose_msg_class = PyObject_GetAttrString(pypose_msg_module, "PoseWithCovariance");
  PyObject * pypose_msg_metaclass = PyObject_GetAttrString(pypose_msg_class, "__class__");
  PyObject * pypose_convert_from_py = PyObject_GetAttrString(pypose_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_pose = (convert_from_py_signature)PyCapsule_GetPointer(pypose_convert_from_py, NULL);
  geometry_msgs__msg__PoseWithCovariance * tmppose = (geometry_msgs__msg__PoseWithCovariance *) convert_from_py_pose(pypose);
  if (!tmppose) {
    return NULL;
  }
  ros_message->pose = *tmppose;
  PyObject * pytwist = PyObject_GetAttrString(_pymsg, "twist");
  PyObject * pytwist_msg_module = PyImport_ImportModule("geometry_msgs.msg._twist_with_covariance");
  PyObject * pytwist_msg_class = PyObject_GetAttrString(pytwist_msg_module, "TwistWithCovariance");
  PyObject * pytwist_msg_metaclass = PyObject_GetAttrString(pytwist_msg_class, "__class__");
  PyObject * pytwist_convert_from_py = PyObject_GetAttrString(pytwist_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_twist = (convert_from_py_signature)PyCapsule_GetPointer(pytwist_convert_from_py, NULL);
  geometry_msgs__msg__TwistWithCovariance * tmptwist = (geometry_msgs__msg__TwistWithCovariance *) convert_from_py_twist(pytwist);
  if (!tmptwist) {
    return NULL;
  }
  ros_message->twist = *tmptwist;

  assert(ros_message != NULL);
  return ros_message;
}

void nav_msgs_odometry__destroy_ros_message(void * raw_ros_message)
{
  nav_msgs__msg__Odometry * ros_message = (nav_msgs__msg__Odometry *)raw_ros_message;
  (void)ros_message;

  nav_msgs__msg__Odometry__destroy(ros_message);
}

PyObject * nav_msgs_odometry__convert_to_py(void * raw_ros_message)
{
  nav_msgs__msg__Odometry * ros_message = (nav_msgs__msg__Odometry *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("nav_msgs.msg._odometry");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Odometry");

  /* NOTE(esteve): Call constructor of Odometry */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyheader = NULL;
  PyObject * pyheader_msg_module = PyImport_ImportModule("std_msgs.msg._header");
  PyObject * pyheader_msg_class = PyObject_GetAttrString(pyheader_msg_module, "Header");
  PyObject * pyheader_msg_metaclass = PyObject_GetAttrString(pyheader_msg_class, "__class__");
  PyObject * pyheader_convert_to_py = PyObject_GetAttrString(pyheader_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_header = (convert_to_py_signature)PyCapsule_GetPointer(pyheader_convert_to_py, NULL);
  std_msgs__msg__Header pytmpheader = ros_message->header;
  pyheader = convert_to_py_header(&pytmpheader);
  if (!pyheader) {
    return NULL;
  }
  assert(pyheader != NULL);
  Py_INCREF(pyheader);
  PyObject_SetAttrString(_pymessage, "header", pyheader);
  PyObject * pychild_frame_id = NULL;
  pychild_frame_id = PyUnicode_FromString(ros_message->child_frame_id.data);
  assert(pychild_frame_id != NULL);
  Py_INCREF(pychild_frame_id);
  PyObject_SetAttrString(_pymessage, "child_frame_id", pychild_frame_id);
  PyObject * pypose = NULL;
  PyObject * pypose_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose_with_covariance");
  PyObject * pypose_msg_class = PyObject_GetAttrString(pypose_msg_module, "PoseWithCovariance");
  PyObject * pypose_msg_metaclass = PyObject_GetAttrString(pypose_msg_class, "__class__");
  PyObject * pypose_convert_to_py = PyObject_GetAttrString(pypose_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_pose = (convert_to_py_signature)PyCapsule_GetPointer(pypose_convert_to_py, NULL);
  geometry_msgs__msg__PoseWithCovariance pytmppose = ros_message->pose;
  pypose = convert_to_py_pose(&pytmppose);
  if (!pypose) {
    return NULL;
  }
  assert(pypose != NULL);
  Py_INCREF(pypose);
  PyObject_SetAttrString(_pymessage, "pose", pypose);
  PyObject * pytwist = NULL;
  PyObject * pytwist_msg_module = PyImport_ImportModule("geometry_msgs.msg._twist_with_covariance");
  PyObject * pytwist_msg_class = PyObject_GetAttrString(pytwist_msg_module, "TwistWithCovariance");
  PyObject * pytwist_msg_metaclass = PyObject_GetAttrString(pytwist_msg_class, "__class__");
  PyObject * pytwist_convert_to_py = PyObject_GetAttrString(pytwist_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_twist = (convert_to_py_signature)PyCapsule_GetPointer(pytwist_convert_to_py, NULL);
  geometry_msgs__msg__TwistWithCovariance pytmptwist = ros_message->twist;
  pytwist = convert_to_py_twist(&pytmptwist);
  if (!pytwist) {
    return NULL;
  }
  assert(pytwist != NULL);
  Py_INCREF(pytwist);
  PyObject_SetAttrString(_pymessage, "twist", pytwist);
  assert(_pymessage != NULL);
  return _pymessage;
}
