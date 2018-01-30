// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <rcl_interfaces/msg/set_parameters_result__struct.h>
#include <rcl_interfaces/msg/set_parameters_result__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * rcl_interfaces_set_parameters_result__convert_from_py(PyObject * _pymsg)
{
  rcl_interfaces__msg__SetParametersResult * ros_message = rcl_interfaces__msg__SetParametersResult__create();
  (void)ros_message;
  char full_classname_dest[62];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "rcl_interfaces.msg._set_parameters_result.SetParametersResult",
      full_classname_dest, 61) == 0);

  PyObject * pysuccessful = PyObject_GetAttrString(_pymsg, "successful");
  assert(PyBool_Check(pysuccessful));
  ros_message->successful = (Py_True == pysuccessful);
  PyObject * pyreason = PyObject_GetAttrString(_pymsg, "reason");
  assert(PyUnicode_Check(pyreason));
  rosidl_generator_c__String__assign(
    &ros_message->reason, (char *)PyUnicode_1BYTE_DATA(pyreason));

  assert(ros_message != NULL);
  return ros_message;
}

void rcl_interfaces_set_parameters_result__destroy_ros_message(void * raw_ros_message)
{
  rcl_interfaces__msg__SetParametersResult * ros_message = (rcl_interfaces__msg__SetParametersResult *)raw_ros_message;
  (void)ros_message;

  rcl_interfaces__msg__SetParametersResult__destroy(ros_message);
}

PyObject * rcl_interfaces_set_parameters_result__convert_to_py(void * raw_ros_message)
{
  rcl_interfaces__msg__SetParametersResult * ros_message = (rcl_interfaces__msg__SetParametersResult *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.msg._set_parameters_result");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetParametersResult");

  /* NOTE(esteve): Call constructor of SetParametersResult */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pysuccessful = NULL;
  pysuccessful = ros_message->successful ? Py_True : Py_False;
  assert(pysuccessful != NULL);
  Py_INCREF(pysuccessful);
  PyObject_SetAttrString(_pymessage, "successful", pysuccessful);
  PyObject * pyreason = NULL;
  pyreason = PyUnicode_FromString(ros_message->reason.data);
  assert(pyreason != NULL);
  Py_INCREF(pyreason);
  PyObject_SetAttrString(_pymessage, "reason", pyreason);
  assert(_pymessage != NULL);
  return _pymessage;
}
