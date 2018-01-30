// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <rcl_interfaces/msg/parameter_descriptor__struct.h>
#include <rcl_interfaces/msg/parameter_descriptor__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * rcl_interfaces_parameter_descriptor__convert_from_py(PyObject * _pymsg)
{
  rcl_interfaces__msg__ParameterDescriptor * ros_message = rcl_interfaces__msg__ParameterDescriptor__create();
  (void)ros_message;
  char full_classname_dest[61];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "rcl_interfaces.msg._parameter_descriptor.ParameterDescriptor",
      full_classname_dest, 60) == 0);

  PyObject * pyname = PyObject_GetAttrString(_pymsg, "name");
  assert(PyUnicode_Check(pyname));
  rosidl_generator_c__String__assign(
    &ros_message->name, (char *)PyUnicode_1BYTE_DATA(pyname));
  PyObject * pytype = PyObject_GetAttrString(_pymsg, "type");
  assert(PyLong_Check(pytype));
  ros_message->type = (uint8_t)PyLong_AsUnsignedLong(pytype);

  assert(ros_message != NULL);
  return ros_message;
}

void rcl_interfaces_parameter_descriptor__destroy_ros_message(void * raw_ros_message)
{
  rcl_interfaces__msg__ParameterDescriptor * ros_message = (rcl_interfaces__msg__ParameterDescriptor *)raw_ros_message;
  (void)ros_message;

  rcl_interfaces__msg__ParameterDescriptor__destroy(ros_message);
}

PyObject * rcl_interfaces_parameter_descriptor__convert_to_py(void * raw_ros_message)
{
  rcl_interfaces__msg__ParameterDescriptor * ros_message = (rcl_interfaces__msg__ParameterDescriptor *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.msg._parameter_descriptor");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ParameterDescriptor");

  /* NOTE(esteve): Call constructor of ParameterDescriptor */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyname = NULL;
  pyname = PyUnicode_FromString(ros_message->name.data);
  assert(pyname != NULL);
  Py_INCREF(pyname);
  PyObject_SetAttrString(_pymessage, "name", pyname);
  PyObject * pytype = NULL;
  pytype = PyLong_FromUnsignedLong(ros_message->type);
  assert(pytype != NULL);
  Py_INCREF(pytype);
  PyObject_SetAttrString(_pymessage, "type", pytype);
  assert(_pymessage != NULL);
  return _pymessage;
}
