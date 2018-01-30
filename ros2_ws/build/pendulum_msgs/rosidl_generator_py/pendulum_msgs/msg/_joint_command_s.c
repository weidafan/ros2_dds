// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <pendulum_msgs/msg/joint_command__struct.h>
#include <pendulum_msgs/msg/joint_command__functions.h>


void * pendulum_msgs_joint_command__convert_from_py(PyObject * _pymsg)
{
  pendulum_msgs__msg__JointCommand * ros_message = pendulum_msgs__msg__JointCommand__create();
  (void)ros_message;
  char full_classname_dest[46];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "pendulum_msgs.msg._joint_command.JointCommand",
      full_classname_dest, 45) == 0);

  PyObject * pyposition = PyObject_GetAttrString(_pymsg, "position");
  assert(PyFloat_Check(pyposition));
  ros_message->position = PyFloat_AS_DOUBLE(pyposition);

  assert(ros_message != NULL);
  return ros_message;
}

void pendulum_msgs_joint_command__destroy_ros_message(void * raw_ros_message)
{
  pendulum_msgs__msg__JointCommand * ros_message = (pendulum_msgs__msg__JointCommand *)raw_ros_message;
  (void)ros_message;

  pendulum_msgs__msg__JointCommand__destroy(ros_message);
}

PyObject * pendulum_msgs_joint_command__convert_to_py(void * raw_ros_message)
{
  pendulum_msgs__msg__JointCommand * ros_message = (pendulum_msgs__msg__JointCommand *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("pendulum_msgs.msg._joint_command");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JointCommand");

  /* NOTE(esteve): Call constructor of JointCommand */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyposition = NULL;
  pyposition = PyFloat_FromDouble(ros_message->position);
  assert(pyposition != NULL);
  Py_INCREF(pyposition);
  PyObject_SetAttrString(_pymessage, "position", pyposition);
  assert(_pymessage != NULL);
  return _pymessage;
}
