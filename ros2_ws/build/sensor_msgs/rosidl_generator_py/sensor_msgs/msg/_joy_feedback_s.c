// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/joy_feedback__struct.h>
#include <sensor_msgs/msg/joy_feedback__functions.h>


void * sensor_msgs_joy_feedback__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__JoyFeedback * ros_message = sensor_msgs__msg__JoyFeedback__create();
  (void)ros_message;
  char full_classname_dest[42];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._joy_feedback.JoyFeedback",
      full_classname_dest, 41) == 0);

  PyObject * pytype = PyObject_GetAttrString(_pymsg, "type");
  assert(PyLong_Check(pytype));
  ros_message->type = (uint8_t)PyLong_AsUnsignedLong(pytype);
  PyObject * pyid = PyObject_GetAttrString(_pymsg, "id");
  assert(PyLong_Check(pyid));
  ros_message->id = (uint8_t)PyLong_AsUnsignedLong(pyid);
  PyObject * pyintensity = PyObject_GetAttrString(_pymsg, "intensity");
  assert(PyFloat_Check(pyintensity));
  ros_message->intensity = (float)PyFloat_AS_DOUBLE(pyintensity);

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_joy_feedback__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__JoyFeedback * ros_message = (sensor_msgs__msg__JoyFeedback *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__JoyFeedback__destroy(ros_message);
}

PyObject * sensor_msgs_joy_feedback__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__JoyFeedback * ros_message = (sensor_msgs__msg__JoyFeedback *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._joy_feedback");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JoyFeedback");

  /* NOTE(esteve): Call constructor of JoyFeedback */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pytype = NULL;
  pytype = PyLong_FromUnsignedLong(ros_message->type);
  assert(pytype != NULL);
  Py_INCREF(pytype);
  PyObject_SetAttrString(_pymessage, "type", pytype);
  PyObject * pyid = NULL;
  pyid = PyLong_FromUnsignedLong(ros_message->id);
  assert(pyid != NULL);
  Py_INCREF(pyid);
  PyObject_SetAttrString(_pymessage, "id", pyid);
  PyObject * pyintensity = NULL;
  pyintensity = PyFloat_FromDouble(ros_message->intensity);
  assert(pyintensity != NULL);
  Py_INCREF(pyintensity);
  PyObject_SetAttrString(_pymessage, "intensity", pyintensity);
  assert(_pymessage != NULL);
  return _pymessage;
}
