// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <rcl_interfaces/msg/parameter_type__struct.h>
#include <rcl_interfaces/msg/parameter_type__functions.h>


void * rcl_interfaces_parameter_type__convert_from_py(PyObject * _pymsg)
{
  rcl_interfaces__msg__ParameterType * ros_message = rcl_interfaces__msg__ParameterType__create();
  (void)ros_message;
  char full_classname_dest[49];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "rcl_interfaces.msg._parameter_type.ParameterType",
      full_classname_dest, 48) == 0);


  assert(ros_message != NULL);
  return ros_message;
}

void rcl_interfaces_parameter_type__destroy_ros_message(void * raw_ros_message)
{
  rcl_interfaces__msg__ParameterType * ros_message = (rcl_interfaces__msg__ParameterType *)raw_ros_message;
  (void)ros_message;

  rcl_interfaces__msg__ParameterType__destroy(ros_message);
}

PyObject * rcl_interfaces_parameter_type__convert_to_py(void * raw_ros_message)
{
  rcl_interfaces__msg__ParameterType * ros_message = (rcl_interfaces__msg__ParameterType *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.msg._parameter_type");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ParameterType");

  /* NOTE(esteve): Call constructor of ParameterType */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  assert(_pymessage != NULL);
  return _pymessage;
}
