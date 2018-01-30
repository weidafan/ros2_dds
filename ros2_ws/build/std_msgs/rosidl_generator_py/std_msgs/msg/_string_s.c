// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <std_msgs/msg/string__struct.h>
#include <std_msgs/msg/string__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * std_msgs_string__convert_from_py(PyObject * _pymsg)
{
  std_msgs__msg__String * ros_message = std_msgs__msg__String__create();
  (void)ros_message;
  char full_classname_dest[28];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "std_msgs.msg._string.String",
      full_classname_dest, 27) == 0);

  PyObject * pydata = PyObject_GetAttrString(_pymsg, "data");
  assert(PyUnicode_Check(pydata));
  rosidl_generator_c__String__assign(
    &ros_message->data, (char *)PyUnicode_1BYTE_DATA(pydata));

  assert(ros_message != NULL);
  return ros_message;
}

void std_msgs_string__destroy_ros_message(void * raw_ros_message)
{
  std_msgs__msg__String * ros_message = (std_msgs__msg__String *)raw_ros_message;
  (void)ros_message;

  std_msgs__msg__String__destroy(ros_message);
}

PyObject * std_msgs_string__convert_to_py(void * raw_ros_message)
{
  std_msgs__msg__String * ros_message = (std_msgs__msg__String *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("std_msgs.msg._string");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "String");

  /* NOTE(esteve): Call constructor of String */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pydata = NULL;
  pydata = PyUnicode_FromString(ros_message->data.data);
  assert(pydata != NULL);
  Py_INCREF(pydata);
  PyObject_SetAttrString(_pymessage, "data", pydata);
  assert(_pymessage != NULL);
  return _pymessage;
}
