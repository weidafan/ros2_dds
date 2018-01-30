// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <rcl_interfaces/msg/parameter__struct.h>
#include <rcl_interfaces/msg/parameter__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * rcl_interfaces_parameter__convert_from_py(PyObject * _pymsg)
{
  rcl_interfaces__msg__Parameter * ros_message = rcl_interfaces__msg__Parameter__create();
  (void)ros_message;
  char full_classname_dest[40];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "rcl_interfaces.msg._parameter.Parameter",
      full_classname_dest, 39) == 0);

  PyObject * pyname = PyObject_GetAttrString(_pymsg, "name");
  assert(PyUnicode_Check(pyname));
  rosidl_generator_c__String__assign(
    &ros_message->name, (char *)PyUnicode_1BYTE_DATA(pyname));
  PyObject * pyvalue = PyObject_GetAttrString(_pymsg, "value");
  PyObject * pyvalue_msg_module = PyImport_ImportModule("rcl_interfaces.msg._parameter_value");
  PyObject * pyvalue_msg_class = PyObject_GetAttrString(pyvalue_msg_module, "ParameterValue");
  PyObject * pyvalue_msg_metaclass = PyObject_GetAttrString(pyvalue_msg_class, "__class__");
  PyObject * pyvalue_convert_from_py = PyObject_GetAttrString(pyvalue_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_value = (convert_from_py_signature)PyCapsule_GetPointer(pyvalue_convert_from_py, NULL);
  rcl_interfaces__msg__ParameterValue * tmpvalue = (rcl_interfaces__msg__ParameterValue *) convert_from_py_value(pyvalue);
  if (!tmpvalue) {
    return NULL;
  }
  ros_message->value = *tmpvalue;

  assert(ros_message != NULL);
  return ros_message;
}

void rcl_interfaces_parameter__destroy_ros_message(void * raw_ros_message)
{
  rcl_interfaces__msg__Parameter * ros_message = (rcl_interfaces__msg__Parameter *)raw_ros_message;
  (void)ros_message;

  rcl_interfaces__msg__Parameter__destroy(ros_message);
}

PyObject * rcl_interfaces_parameter__convert_to_py(void * raw_ros_message)
{
  rcl_interfaces__msg__Parameter * ros_message = (rcl_interfaces__msg__Parameter *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.msg._parameter");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Parameter");

  /* NOTE(esteve): Call constructor of Parameter */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyname = NULL;
  pyname = PyUnicode_FromString(ros_message->name.data);
  assert(pyname != NULL);
  Py_INCREF(pyname);
  PyObject_SetAttrString(_pymessage, "name", pyname);
  PyObject * pyvalue = NULL;
  PyObject * pyvalue_msg_module = PyImport_ImportModule("rcl_interfaces.msg._parameter_value");
  PyObject * pyvalue_msg_class = PyObject_GetAttrString(pyvalue_msg_module, "ParameterValue");
  PyObject * pyvalue_msg_metaclass = PyObject_GetAttrString(pyvalue_msg_class, "__class__");
  PyObject * pyvalue_convert_to_py = PyObject_GetAttrString(pyvalue_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_value = (convert_to_py_signature)PyCapsule_GetPointer(pyvalue_convert_to_py, NULL);
  rcl_interfaces__msg__ParameterValue pytmpvalue = ros_message->value;
  pyvalue = convert_to_py_value(&pytmpvalue);
  if (!pyvalue) {
    return NULL;
  }
  assert(pyvalue != NULL);
  Py_INCREF(pyvalue);
  PyObject_SetAttrString(_pymessage, "value", pyvalue);
  assert(_pymessage != NULL);
  return _pymessage;
}
