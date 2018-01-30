// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <cartographer_ros_msgs/srv/finish_trajectory__request__struct.h>
#include <cartographer_ros_msgs/srv/finish_trajectory__request__functions.h>


void * cartographer_ros_msgs_finish_trajectory__request__convert_from_py(PyObject * _pymsg)
{
  cartographer_ros_msgs__srv__FinishTrajectory_Request * ros_message = cartographer_ros_msgs__srv__FinishTrajectory_Request__create();
  (void)ros_message;
  char full_classname_dest[79];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "cartographer_ros_msgs.srv._finish_trajectory__request.FinishTrajectory_Request",
      full_classname_dest, 78) == 0);

  PyObject * pytrajectory_id = PyObject_GetAttrString(_pymsg, "trajectory_id");
  assert(PyLong_Check(pytrajectory_id));
  ros_message->trajectory_id = (int32_t)PyLong_AsLong(pytrajectory_id);

  assert(ros_message != NULL);
  return ros_message;
}

void cartographer_ros_msgs_finish_trajectory__request__destroy_ros_message(void * raw_ros_message)
{
  cartographer_ros_msgs__srv__FinishTrajectory_Request * ros_message = (cartographer_ros_msgs__srv__FinishTrajectory_Request *)raw_ros_message;
  (void)ros_message;

  cartographer_ros_msgs__srv__FinishTrajectory_Request__destroy(ros_message);
}

PyObject * cartographer_ros_msgs_finish_trajectory__request__convert_to_py(void * raw_ros_message)
{
  cartographer_ros_msgs__srv__FinishTrajectory_Request * ros_message = (cartographer_ros_msgs__srv__FinishTrajectory_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("cartographer_ros_msgs.srv._finish_trajectory__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FinishTrajectory_Request");

  /* NOTE(esteve): Call constructor of FinishTrajectory_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pytrajectory_id = NULL;
  pytrajectory_id = PyLong_FromLong(ros_message->trajectory_id);
  assert(pytrajectory_id != NULL);
  Py_INCREF(pytrajectory_id);
  PyObject_SetAttrString(_pymessage, "trajectory_id", pytrajectory_id);
  assert(_pymessage != NULL);
  return _pymessage;
}