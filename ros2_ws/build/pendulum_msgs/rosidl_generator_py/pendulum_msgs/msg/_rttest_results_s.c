// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <pendulum_msgs/msg/rttest_results__struct.h>
#include <pendulum_msgs/msg/rttest_results__functions.h>


void * pendulum_msgs_rttest_results__convert_from_py(PyObject * _pymsg)
{
  pendulum_msgs__msg__RttestResults * ros_message = pendulum_msgs__msg__RttestResults__create();
  (void)ros_message;
  char full_classname_dest[48];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "pendulum_msgs.msg._rttest_results.RttestResults",
      full_classname_dest, 47) == 0);

  PyObject * pystamp = PyObject_GetAttrString(_pymsg, "stamp");
  PyObject * pystamp_msg_module = PyImport_ImportModule("builtin_interfaces.msg._time");
  PyObject * pystamp_msg_class = PyObject_GetAttrString(pystamp_msg_module, "Time");
  PyObject * pystamp_msg_metaclass = PyObject_GetAttrString(pystamp_msg_class, "__class__");
  PyObject * pystamp_convert_from_py = PyObject_GetAttrString(pystamp_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_stamp = (convert_from_py_signature)PyCapsule_GetPointer(pystamp_convert_from_py, NULL);
  builtin_interfaces__msg__Time * tmpstamp = (builtin_interfaces__msg__Time *) convert_from_py_stamp(pystamp);
  if (!tmpstamp) {
    return NULL;
  }
  ros_message->stamp = *tmpstamp;
  PyObject * pycommand = PyObject_GetAttrString(_pymsg, "command");
  PyObject * pycommand_msg_module = PyImport_ImportModule("pendulum_msgs.msg._joint_command");
  PyObject * pycommand_msg_class = PyObject_GetAttrString(pycommand_msg_module, "JointCommand");
  PyObject * pycommand_msg_metaclass = PyObject_GetAttrString(pycommand_msg_class, "__class__");
  PyObject * pycommand_convert_from_py = PyObject_GetAttrString(pycommand_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_command = (convert_from_py_signature)PyCapsule_GetPointer(pycommand_convert_from_py, NULL);
  pendulum_msgs__msg__JointCommand * tmpcommand = (pendulum_msgs__msg__JointCommand *) convert_from_py_command(pycommand);
  if (!tmpcommand) {
    return NULL;
  }
  ros_message->command = *tmpcommand;
  PyObject * pystate = PyObject_GetAttrString(_pymsg, "state");
  PyObject * pystate_msg_module = PyImport_ImportModule("pendulum_msgs.msg._joint_state");
  PyObject * pystate_msg_class = PyObject_GetAttrString(pystate_msg_module, "JointState");
  PyObject * pystate_msg_metaclass = PyObject_GetAttrString(pystate_msg_class, "__class__");
  PyObject * pystate_convert_from_py = PyObject_GetAttrString(pystate_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_state = (convert_from_py_signature)PyCapsule_GetPointer(pystate_convert_from_py, NULL);
  pendulum_msgs__msg__JointState * tmpstate = (pendulum_msgs__msg__JointState *) convert_from_py_state(pystate);
  if (!tmpstate) {
    return NULL;
  }
  ros_message->state = *tmpstate;
  PyObject * pycur_latency = PyObject_GetAttrString(_pymsg, "cur_latency");
  assert(PyLong_Check(pycur_latency));
  ros_message->cur_latency = PyLong_AsUnsignedLongLong(pycur_latency);
  PyObject * pymean_latency = PyObject_GetAttrString(_pymsg, "mean_latency");
  assert(PyFloat_Check(pymean_latency));
  ros_message->mean_latency = PyFloat_AS_DOUBLE(pymean_latency);
  PyObject * pymin_latency = PyObject_GetAttrString(_pymsg, "min_latency");
  assert(PyLong_Check(pymin_latency));
  ros_message->min_latency = PyLong_AsUnsignedLongLong(pymin_latency);
  PyObject * pymax_latency = PyObject_GetAttrString(_pymsg, "max_latency");
  assert(PyLong_Check(pymax_latency));
  ros_message->max_latency = PyLong_AsUnsignedLongLong(pymax_latency);
  PyObject * pyminor_pagefaults = PyObject_GetAttrString(_pymsg, "minor_pagefaults");
  assert(PyLong_Check(pyminor_pagefaults));
  ros_message->minor_pagefaults = PyLong_AsUnsignedLongLong(pyminor_pagefaults);
  PyObject * pymajor_pagefaults = PyObject_GetAttrString(_pymsg, "major_pagefaults");
  assert(PyLong_Check(pymajor_pagefaults));
  ros_message->major_pagefaults = PyLong_AsUnsignedLongLong(pymajor_pagefaults);

  assert(ros_message != NULL);
  return ros_message;
}

void pendulum_msgs_rttest_results__destroy_ros_message(void * raw_ros_message)
{
  pendulum_msgs__msg__RttestResults * ros_message = (pendulum_msgs__msg__RttestResults *)raw_ros_message;
  (void)ros_message;

  pendulum_msgs__msg__RttestResults__destroy(ros_message);
}

PyObject * pendulum_msgs_rttest_results__convert_to_py(void * raw_ros_message)
{
  pendulum_msgs__msg__RttestResults * ros_message = (pendulum_msgs__msg__RttestResults *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("pendulum_msgs.msg._rttest_results");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RttestResults");

  /* NOTE(esteve): Call constructor of RttestResults */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pystamp = NULL;
  PyObject * pystamp_msg_module = PyImport_ImportModule("builtin_interfaces.msg._time");
  PyObject * pystamp_msg_class = PyObject_GetAttrString(pystamp_msg_module, "Time");
  PyObject * pystamp_msg_metaclass = PyObject_GetAttrString(pystamp_msg_class, "__class__");
  PyObject * pystamp_convert_to_py = PyObject_GetAttrString(pystamp_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_stamp = (convert_to_py_signature)PyCapsule_GetPointer(pystamp_convert_to_py, NULL);
  builtin_interfaces__msg__Time pytmpstamp = ros_message->stamp;
  pystamp = convert_to_py_stamp(&pytmpstamp);
  if (!pystamp) {
    return NULL;
  }
  assert(pystamp != NULL);
  Py_INCREF(pystamp);
  PyObject_SetAttrString(_pymessage, "stamp", pystamp);
  PyObject * pycommand = NULL;
  PyObject * pycommand_msg_module = PyImport_ImportModule("pendulum_msgs.msg._joint_command");
  PyObject * pycommand_msg_class = PyObject_GetAttrString(pycommand_msg_module, "JointCommand");
  PyObject * pycommand_msg_metaclass = PyObject_GetAttrString(pycommand_msg_class, "__class__");
  PyObject * pycommand_convert_to_py = PyObject_GetAttrString(pycommand_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_command = (convert_to_py_signature)PyCapsule_GetPointer(pycommand_convert_to_py, NULL);
  pendulum_msgs__msg__JointCommand pytmpcommand = ros_message->command;
  pycommand = convert_to_py_command(&pytmpcommand);
  if (!pycommand) {
    return NULL;
  }
  assert(pycommand != NULL);
  Py_INCREF(pycommand);
  PyObject_SetAttrString(_pymessage, "command", pycommand);
  PyObject * pystate = NULL;
  PyObject * pystate_msg_module = PyImport_ImportModule("pendulum_msgs.msg._joint_state");
  PyObject * pystate_msg_class = PyObject_GetAttrString(pystate_msg_module, "JointState");
  PyObject * pystate_msg_metaclass = PyObject_GetAttrString(pystate_msg_class, "__class__");
  PyObject * pystate_convert_to_py = PyObject_GetAttrString(pystate_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_state = (convert_to_py_signature)PyCapsule_GetPointer(pystate_convert_to_py, NULL);
  pendulum_msgs__msg__JointState pytmpstate = ros_message->state;
  pystate = convert_to_py_state(&pytmpstate);
  if (!pystate) {
    return NULL;
  }
  assert(pystate != NULL);
  Py_INCREF(pystate);
  PyObject_SetAttrString(_pymessage, "state", pystate);
  PyObject * pycur_latency = NULL;
  pycur_latency = PyLong_FromUnsignedLongLong(ros_message->cur_latency);
  assert(pycur_latency != NULL);
  Py_INCREF(pycur_latency);
  PyObject_SetAttrString(_pymessage, "cur_latency", pycur_latency);
  PyObject * pymean_latency = NULL;
  pymean_latency = PyFloat_FromDouble(ros_message->mean_latency);
  assert(pymean_latency != NULL);
  Py_INCREF(pymean_latency);
  PyObject_SetAttrString(_pymessage, "mean_latency", pymean_latency);
  PyObject * pymin_latency = NULL;
  pymin_latency = PyLong_FromUnsignedLongLong(ros_message->min_latency);
  assert(pymin_latency != NULL);
  Py_INCREF(pymin_latency);
  PyObject_SetAttrString(_pymessage, "min_latency", pymin_latency);
  PyObject * pymax_latency = NULL;
  pymax_latency = PyLong_FromUnsignedLongLong(ros_message->max_latency);
  assert(pymax_latency != NULL);
  Py_INCREF(pymax_latency);
  PyObject_SetAttrString(_pymessage, "max_latency", pymax_latency);
  PyObject * pyminor_pagefaults = NULL;
  pyminor_pagefaults = PyLong_FromUnsignedLongLong(ros_message->minor_pagefaults);
  assert(pyminor_pagefaults != NULL);
  Py_INCREF(pyminor_pagefaults);
  PyObject_SetAttrString(_pymessage, "minor_pagefaults", pyminor_pagefaults);
  PyObject * pymajor_pagefaults = NULL;
  pymajor_pagefaults = PyLong_FromUnsignedLongLong(ros_message->major_pagefaults);
  assert(pymajor_pagefaults != NULL);
  Py_INCREF(pymajor_pagefaults);
  PyObject_SetAttrString(_pymessage, "major_pagefaults", pymajor_pagefaults);
  assert(_pymessage != NULL);
  return _pymessage;
}
