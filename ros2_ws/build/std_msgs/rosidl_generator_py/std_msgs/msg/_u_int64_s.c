// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <std_msgs/msg/u_int64__struct.h>
#include <std_msgs/msg/u_int64__functions.h>


void * std_msgs_u_int64__convert_from_py(PyObject * _pymsg)
{
  std_msgs__msg__UInt64 * ros_message = std_msgs__msg__UInt64__create();
  (void)ros_message;
  char full_classname_dest[29];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "std_msgs.msg._u_int64.UInt64",
      full_classname_dest, 28) == 0);

  PyObject * pydata = PyObject_GetAttrString(_pymsg, "data");
  assert(PyLong_Check(pydata));
  ros_message->data = PyLong_AsUnsignedLongLong(pydata);

  assert(ros_message != NULL);
  return ros_message;
}

void std_msgs_u_int64__destroy_ros_message(void * raw_ros_message)
{
  std_msgs__msg__UInt64 * ros_message = (std_msgs__msg__UInt64 *)raw_ros_message;
  (void)ros_message;

  std_msgs__msg__UInt64__destroy(ros_message);
}

PyObject * std_msgs_u_int64__convert_to_py(void * raw_ros_message)
{
  std_msgs__msg__UInt64 * ros_message = (std_msgs__msg__UInt64 *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("std_msgs.msg._u_int64");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UInt64");

  /* NOTE(esteve): Call constructor of UInt64 */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pydata = NULL;
  pydata = PyLong_FromUnsignedLongLong(ros_message->data);
  assert(pydata != NULL);
  Py_INCREF(pydata);
  PyObject_SetAttrString(_pymessage, "data", pydata);
  assert(_pymessage != NULL);
  return _pymessage;
}
