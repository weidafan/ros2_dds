// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <rcl_interfaces/srv/set_parameters_atomically__response__struct.h>
#include <rcl_interfaces/srv/set_parameters_atomically__response__functions.h>


void * rcl_interfaces_set_parameters_atomically__response__convert_from_py(PyObject * _pymsg)
{
  rcl_interfaces__srv__SetParametersAtomically_Response * ros_message = rcl_interfaces__srv__SetParametersAtomically_Response__create();
  (void)ros_message;
  char full_classname_dest[89];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "rcl_interfaces.srv._set_parameters_atomically__response.SetParametersAtomically_Response",
      full_classname_dest, 88) == 0);

  PyObject * pyresult = PyObject_GetAttrString(_pymsg, "result");
  PyObject * pyresult_msg_module = PyImport_ImportModule("rcl_interfaces.msg._set_parameters_result");
  PyObject * pyresult_msg_class = PyObject_GetAttrString(pyresult_msg_module, "SetParametersResult");
  PyObject * pyresult_msg_metaclass = PyObject_GetAttrString(pyresult_msg_class, "__class__");
  PyObject * pyresult_convert_from_py = PyObject_GetAttrString(pyresult_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_result = (convert_from_py_signature)PyCapsule_GetPointer(pyresult_convert_from_py, NULL);
  rcl_interfaces__msg__SetParametersResult * tmpresult = (rcl_interfaces__msg__SetParametersResult *) convert_from_py_result(pyresult);
  if (!tmpresult) {
    return NULL;
  }
  ros_message->result = *tmpresult;

  assert(ros_message != NULL);
  return ros_message;
}

void rcl_interfaces_set_parameters_atomically__response__destroy_ros_message(void * raw_ros_message)
{
  rcl_interfaces__srv__SetParametersAtomically_Response * ros_message = (rcl_interfaces__srv__SetParametersAtomically_Response *)raw_ros_message;
  (void)ros_message;

  rcl_interfaces__srv__SetParametersAtomically_Response__destroy(ros_message);
}

PyObject * rcl_interfaces_set_parameters_atomically__response__convert_to_py(void * raw_ros_message)
{
  rcl_interfaces__srv__SetParametersAtomically_Response * ros_message = (rcl_interfaces__srv__SetParametersAtomically_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.srv._set_parameters_atomically__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetParametersAtomically_Response");

  /* NOTE(esteve): Call constructor of SetParametersAtomically_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyresult = NULL;
  PyObject * pyresult_msg_module = PyImport_ImportModule("rcl_interfaces.msg._set_parameters_result");
  PyObject * pyresult_msg_class = PyObject_GetAttrString(pyresult_msg_module, "SetParametersResult");
  PyObject * pyresult_msg_metaclass = PyObject_GetAttrString(pyresult_msg_class, "__class__");
  PyObject * pyresult_convert_to_py = PyObject_GetAttrString(pyresult_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_result = (convert_to_py_signature)PyCapsule_GetPointer(pyresult_convert_to_py, NULL);
  rcl_interfaces__msg__SetParametersResult pytmpresult = ros_message->result;
  pyresult = convert_to_py_result(&pytmpresult);
  if (!pyresult) {
    return NULL;
  }
  assert(pyresult != NULL);
  Py_INCREF(pyresult);
  PyObject_SetAttrString(_pymessage, "result", pyresult);
  assert(_pymessage != NULL);
  return _pymessage;
}
