// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <diagnostic_msgs/msg/key_value__struct.h>
#include <diagnostic_msgs/msg/key_value__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * diagnostic_msgs_key_value__convert_from_py(PyObject * _pymsg)
{
  diagnostic_msgs__msg__KeyValue * ros_message = diagnostic_msgs__msg__KeyValue__create();
  (void)ros_message;
  char full_classname_dest[40];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "diagnostic_msgs.msg._key_value.KeyValue",
      full_classname_dest, 39) == 0);

  PyObject * pykey = PyObject_GetAttrString(_pymsg, "key");
  assert(PyUnicode_Check(pykey));
  rosidl_generator_c__String__assign(
    &ros_message->key, (char *)PyUnicode_1BYTE_DATA(pykey));
  PyObject * pyvalue = PyObject_GetAttrString(_pymsg, "value");
  assert(PyUnicode_Check(pyvalue));
  rosidl_generator_c__String__assign(
    &ros_message->value, (char *)PyUnicode_1BYTE_DATA(pyvalue));

  assert(ros_message != NULL);
  return ros_message;
}

void diagnostic_msgs_key_value__destroy_ros_message(void * raw_ros_message)
{
  diagnostic_msgs__msg__KeyValue * ros_message = (diagnostic_msgs__msg__KeyValue *)raw_ros_message;
  (void)ros_message;

  diagnostic_msgs__msg__KeyValue__destroy(ros_message);
}

PyObject * diagnostic_msgs_key_value__convert_to_py(void * raw_ros_message)
{
  diagnostic_msgs__msg__KeyValue * ros_message = (diagnostic_msgs__msg__KeyValue *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("diagnostic_msgs.msg._key_value");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "KeyValue");

  /* NOTE(esteve): Call constructor of KeyValue */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pykey = NULL;
  pykey = PyUnicode_FromString(ros_message->key.data);
  assert(pykey != NULL);
  Py_INCREF(pykey);
  PyObject_SetAttrString(_pymessage, "key", pykey);
  PyObject * pyvalue = NULL;
  pyvalue = PyUnicode_FromString(ros_message->value.data);
  assert(pyvalue != NULL);
  Py_INCREF(pyvalue);
  PyObject_SetAttrString(_pymessage, "value", pyvalue);
  assert(_pymessage != NULL);
  return _pymessage;
}
