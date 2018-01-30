// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <std_msgs/msg/int32__struct.h>
#include <std_msgs/msg/int32__functions.h>


void * std_msgs_int32__convert_from_py(PyObject * _pymsg)
{
  std_msgs__msg__Int32 * ros_message = std_msgs__msg__Int32__create();
  (void)ros_message;
  char full_classname_dest[26];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "std_msgs.msg._int32.Int32",
      full_classname_dest, 25) == 0);

  PyObject * pydata = PyObject_GetAttrString(_pymsg, "data");
  assert(PyLong_Check(pydata));
  ros_message->data = (int32_t)PyLong_AsLong(pydata);

  assert(ros_message != NULL);
  return ros_message;
}

void std_msgs_int32__destroy_ros_message(void * raw_ros_message)
{
  std_msgs__msg__Int32 * ros_message = (std_msgs__msg__Int32 *)raw_ros_message;
  (void)ros_message;

  std_msgs__msg__Int32__destroy(ros_message);
}

PyObject * std_msgs_int32__convert_to_py(void * raw_ros_message)
{
  std_msgs__msg__Int32 * ros_message = (std_msgs__msg__Int32 *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("std_msgs.msg._int32");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Int32");

  /* NOTE(esteve): Call constructor of Int32 */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pydata = NULL;
  pydata = PyLong_FromLong(ros_message->data);
  assert(pydata != NULL);
  Py_INCREF(pydata);
  PyObject_SetAttrString(_pymessage, "data", pydata);
  assert(_pymessage != NULL);
  return _pymessage;
}
