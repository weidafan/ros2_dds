// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <geometry_msgs/msg/pose2_d__struct.h>
#include <geometry_msgs/msg/pose2_d__functions.h>


void * geometry_msgs_pose2_d__convert_from_py(PyObject * _pymsg)
{
  geometry_msgs__msg__Pose2D * ros_message = geometry_msgs__msg__Pose2D__create();
  (void)ros_message;
  char full_classname_dest[34];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "geometry_msgs.msg._pose2_d.Pose2D",
      full_classname_dest, 33) == 0);

  PyObject * pyx = PyObject_GetAttrString(_pymsg, "x");
  assert(PyFloat_Check(pyx));
  ros_message->x = PyFloat_AS_DOUBLE(pyx);
  PyObject * pyy = PyObject_GetAttrString(_pymsg, "y");
  assert(PyFloat_Check(pyy));
  ros_message->y = PyFloat_AS_DOUBLE(pyy);
  PyObject * pytheta = PyObject_GetAttrString(_pymsg, "theta");
  assert(PyFloat_Check(pytheta));
  ros_message->theta = PyFloat_AS_DOUBLE(pytheta);

  assert(ros_message != NULL);
  return ros_message;
}

void geometry_msgs_pose2_d__destroy_ros_message(void * raw_ros_message)
{
  geometry_msgs__msg__Pose2D * ros_message = (geometry_msgs__msg__Pose2D *)raw_ros_message;
  (void)ros_message;

  geometry_msgs__msg__Pose2D__destroy(ros_message);
}

PyObject * geometry_msgs_pose2_d__convert_to_py(void * raw_ros_message)
{
  geometry_msgs__msg__Pose2D * ros_message = (geometry_msgs__msg__Pose2D *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("geometry_msgs.msg._pose2_d");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Pose2D");

  /* NOTE(esteve): Call constructor of Pose2D */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyx = NULL;
  pyx = PyFloat_FromDouble(ros_message->x);
  assert(pyx != NULL);
  Py_INCREF(pyx);
  PyObject_SetAttrString(_pymessage, "x", pyx);
  PyObject * pyy = NULL;
  pyy = PyFloat_FromDouble(ros_message->y);
  assert(pyy != NULL);
  Py_INCREF(pyy);
  PyObject_SetAttrString(_pymessage, "y", pyy);
  PyObject * pytheta = NULL;
  pytheta = PyFloat_FromDouble(ros_message->theta);
  assert(pytheta != NULL);
  Py_INCREF(pytheta);
  PyObject_SetAttrString(_pymessage, "theta", pytheta);
  assert(_pymessage != NULL);
  return _pymessage;
}
