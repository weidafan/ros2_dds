// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <cartographer_ros_msgs/srv/finish_trajectory__response__struct.h>
#include <cartographer_ros_msgs/srv/finish_trajectory__response__functions.h>


void * cartographer_ros_msgs_finish_trajectory__response__convert_from_py(PyObject * _pymsg)
{
  cartographer_ros_msgs__srv__FinishTrajectory_Response * ros_message = cartographer_ros_msgs__srv__FinishTrajectory_Response__create();
  (void)ros_message;
  char full_classname_dest[81];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "cartographer_ros_msgs.srv._finish_trajectory__response.FinishTrajectory_Response",
      full_classname_dest, 80) == 0);


  assert(ros_message != NULL);
  return ros_message;
}

void cartographer_ros_msgs_finish_trajectory__response__destroy_ros_message(void * raw_ros_message)
{
  cartographer_ros_msgs__srv__FinishTrajectory_Response * ros_message = (cartographer_ros_msgs__srv__FinishTrajectory_Response *)raw_ros_message;
  (void)ros_message;

  cartographer_ros_msgs__srv__FinishTrajectory_Response__destroy(ros_message);
}

PyObject * cartographer_ros_msgs_finish_trajectory__response__convert_to_py(void * raw_ros_message)
{
  cartographer_ros_msgs__srv__FinishTrajectory_Response * ros_message = (cartographer_ros_msgs__srv__FinishTrajectory_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("cartographer_ros_msgs.srv._finish_trajectory__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FinishTrajectory_Response");

  /* NOTE(esteve): Call constructor of FinishTrajectory_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  assert(_pymessage != NULL);
  return _pymessage;
}
