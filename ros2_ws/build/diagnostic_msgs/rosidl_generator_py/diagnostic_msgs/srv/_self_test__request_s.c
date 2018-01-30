// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <diagnostic_msgs/srv/self_test__request__struct.h>
#include <diagnostic_msgs/srv/self_test__request__functions.h>


void * diagnostic_msgs_self_test__request__convert_from_py(PyObject * _pymsg)
{
  diagnostic_msgs__srv__SelfTest_Request * ros_message = diagnostic_msgs__srv__SelfTest_Request__create();
  (void)ros_message;
  char full_classname_dest[57];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "diagnostic_msgs.srv._self_test__request.SelfTest_Request",
      full_classname_dest, 56) == 0);


  assert(ros_message != NULL);
  return ros_message;
}

void diagnostic_msgs_self_test__request__destroy_ros_message(void * raw_ros_message)
{
  diagnostic_msgs__srv__SelfTest_Request * ros_message = (diagnostic_msgs__srv__SelfTest_Request *)raw_ros_message;
  (void)ros_message;

  diagnostic_msgs__srv__SelfTest_Request__destroy(ros_message);
}

PyObject * diagnostic_msgs_self_test__request__convert_to_py(void * raw_ros_message)
{
  diagnostic_msgs__srv__SelfTest_Request * ros_message = (diagnostic_msgs__srv__SelfTest_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("diagnostic_msgs.srv._self_test__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SelfTest_Request");

  /* NOTE(esteve): Call constructor of SelfTest_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  assert(_pymessage != NULL);
  return _pymessage;
}
