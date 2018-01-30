// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <nav_msgs/srv/set_map__response__struct.h>
#include <nav_msgs/srv/set_map__response__functions.h>


void * nav_msgs_set_map__response__convert_from_py(PyObject * _pymsg)
{
  nav_msgs__srv__SetMap_Response * ros_message = nav_msgs__srv__SetMap_Response__create();
  (void)ros_message;
  char full_classname_dest[48];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "nav_msgs.srv._set_map__response.SetMap_Response",
      full_classname_dest, 47) == 0);

  PyObject * pysuccess = PyObject_GetAttrString(_pymsg, "success");
  assert(PyBool_Check(pysuccess));
  ros_message->success = (Py_True == pysuccess);

  assert(ros_message != NULL);
  return ros_message;
}

void nav_msgs_set_map__response__destroy_ros_message(void * raw_ros_message)
{
  nav_msgs__srv__SetMap_Response * ros_message = (nav_msgs__srv__SetMap_Response *)raw_ros_message;
  (void)ros_message;

  nav_msgs__srv__SetMap_Response__destroy(ros_message);
}

PyObject * nav_msgs_set_map__response__convert_to_py(void * raw_ros_message)
{
  nav_msgs__srv__SetMap_Response * ros_message = (nav_msgs__srv__SetMap_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("nav_msgs.srv._set_map__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetMap_Response");

  /* NOTE(esteve): Call constructor of SetMap_Response */
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
