// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <lifecycle_msgs/srv/change_state__response__struct.h>
#include <lifecycle_msgs/srv/change_state__response__functions.h>


void * lifecycle_msgs_change_state__response__convert_from_py(PyObject * _pymsg)
{
  lifecycle_msgs__srv__ChangeState_Response * ros_message = lifecycle_msgs__srv__ChangeState_Response__create();
  (void)ros_message;
  char full_classname_dest[64];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "lifecycle_msgs.srv._change_state__response.ChangeState_Response",
      full_classname_dest, 63) == 0);

  PyObject * pysuccess = PyObject_GetAttrString(_pymsg, "success");
  assert(PyBool_Check(pysuccess));
  ros_message->success = (Py_True == pysuccess);

  assert(ros_message != NULL);
  return ros_message;
}

void lifecycle_msgs_change_state__response__destroy_ros_message(void * raw_ros_message)
{
  lifecycle_msgs__srv__ChangeState_Response * ros_message = (lifecycle_msgs__srv__ChangeState_Response *)raw_ros_message;
  (void)ros_message;

  lifecycle_msgs__srv__ChangeState_Response__destroy(ros_message);
}

PyObject * lifecycle_msgs_change_state__response__convert_to_py(void * raw_ros_message)
{
  lifecycle_msgs__srv__ChangeState_Response * ros_message = (lifecycle_msgs__srv__ChangeState_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("lifecycle_msgs.srv._change_state__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChangeState_Response");

  /* NOTE(esteve): Call constructor of ChangeState_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pysuccess = NULL;
  pysuccess = ros_message->success ? Py_True : Py_False;
  assert(pysuccess != NULL);
  Py_INCREF(pysuccess);
  PyObject_SetAttrString(_pymessage, "success", pysuccess);
  assert(_pymessage != NULL);
  return _pymessage;
}
