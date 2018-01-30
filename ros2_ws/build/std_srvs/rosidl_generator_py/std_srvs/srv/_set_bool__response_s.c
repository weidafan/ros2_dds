// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <std_srvs/srv/set_bool__response__struct.h>
#include <std_srvs/srv/set_bool__response__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * std_srvs_set_bool__response__convert_from_py(PyObject * _pymsg)
{
  std_srvs__srv__SetBool_Response * ros_message = std_srvs__srv__SetBool_Response__create();
  (void)ros_message;
  char full_classname_dest[50];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "std_srvs.srv._set_bool__response.SetBool_Response",
      full_classname_dest, 49) == 0);

  PyObject * pysuccess = PyObject_GetAttrString(_pymsg, "success");
  assert(PyBool_Check(pysuccess));
  ros_message->success = (Py_True == pysuccess);
  PyObject * pymessage = PyObject_GetAttrString(_pymsg, "message");
  assert(PyUnicode_Check(pymessage));
  rosidl_generator_c__String__assign(
    &ros_message->message, (char *)PyUnicode_1BYTE_DATA(pymessage));

  assert(ros_message != NULL);
  return ros_message;
}

void std_srvs_set_bool__response__destroy_ros_message(void * raw_ros_message)
{
  std_srvs__srv__SetBool_Response * ros_message = (std_srvs__srv__SetBool_Response *)raw_ros_message;
  (void)ros_message;

  std_srvs__srv__SetBool_Response__destroy(ros_message);
}

PyObject * std_srvs_set_bool__response__convert_to_py(void * raw_ros_message)
{
  std_srvs__srv__SetBool_Response * ros_message = (std_srvs__srv__SetBool_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("std_srvs.srv._set_bool__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetBool_Response");

  /* NOTE(esteve): Call constructor of SetBool_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pysuccess = NULL;
  pysuccess = ros_message->success ? Py_True : Py_False;
  assert(pysuccess != NULL);
  Py_INCREF(pysuccess);
  PyObject_SetAttrString(_pymessage, "success", pysuccess);
  PyObject * pymessage = NULL;
  pymessage = PyUnicode_FromString(ros_message->message.data);
  assert(pymessage != NULL);
  Py_INCREF(pymessage);
  PyObject_SetAttrString(_pymessage, "message", pymessage);
  assert(_pymessage != NULL);
  return _pymessage;
}
