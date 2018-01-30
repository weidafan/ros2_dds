// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <geometry_msgs/msg/accel_with_covariance_stamped__struct.h>
#include <geometry_msgs/msg/accel_with_covariance_stamped__functions.h>


void * geometry_msgs_accel_with_covariance_stamped__convert_from_py(PyObject * _pymsg)
{
  geometry_msgs__msg__AccelWithCovarianceStamped * ros_message = geometry_msgs__msg__AccelWithCovarianceStamped__create();
  (void)ros_message;
  char full_classname_dest[76];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "geometry_msgs.msg._accel_with_covariance_stamped.AccelWithCovarianceStamped",
      full_classname_dest, 75) == 0);

  PyObject * pyheader = PyObject_GetAttrString(_pymsg, "header");
  PyObject * pyheader_msg_module = PyImport_ImportModule("std_msgs.msg._header");
  PyObject * pyheader_msg_class = PyObject_GetAttrString(pyheader_msg_module, "Header");
  PyObject * pyheader_msg_metaclass = PyObject_GetAttrString(pyheader_msg_class, "__class__");
  PyObject * pyheader_convert_from_py = PyObject_GetAttrString(pyheader_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_header = (convert_from_py_signature)PyCapsule_GetPointer(pyheader_convert_from_py, NULL);
  std_msgs__msg__Header * tmpheader = (std_msgs__msg__Header *) convert_from_py_header(pyheader);
  if (!tmpheader) {
    return NULL;
  }
  ros_message->header = *tmpheader;
  PyObject * pyaccel = PyObject_GetAttrString(_pymsg, "accel");
  PyObject * pyaccel_msg_module = PyImport_ImportModule("geometry_msgs.msg._accel_with_covariance");
  PyObject * pyaccel_msg_class = PyObject_GetAttrString(pyaccel_msg_module, "AccelWithCovariance");
  PyObject * pyaccel_msg_metaclass = PyObject_GetAttrString(pyaccel_msg_class, "__class__");
  PyObject * pyaccel_convert_from_py = PyObject_GetAttrString(pyaccel_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_accel = (convert_from_py_signature)PyCapsule_GetPointer(pyaccel_convert_from_py, NULL);
  geometry_msgs__msg__AccelWithCovariance * tmpaccel = (geometry_msgs__msg__AccelWithCovariance *) convert_from_py_accel(pyaccel);
  if (!tmpaccel) {
    return NULL;
  }
  ros_message->accel = *tmpaccel;

  assert(ros_message != NULL);
  return ros_message;
}

void geometry_msgs_accel_with_covariance_stamped__destroy_ros_message(void * raw_ros_message)
{
  geometry_msgs__msg__AccelWithCovarianceStamped * ros_message = (geometry_msgs__msg__AccelWithCovarianceStamped *)raw_ros_message;
  (void)ros_message;

  geometry_msgs__msg__AccelWithCovarianceStamped__destroy(ros_message);
}

PyObject * geometry_msgs_accel_with_covariance_stamped__convert_to_py(void * raw_ros_message)
{
  geometry_msgs__msg__AccelWithCovarianceStamped * ros_message = (geometry_msgs__msg__AccelWithCovarianceStamped *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("geometry_msgs.msg._accel_with_covariance_stamped");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AccelWithCovarianceStamped");

  /* NOTE(esteve): Call constructor of AccelWithCovarianceStamped */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyheader = NULL;
  PyObject * pyheader_msg_module = PyImport_ImportModule("std_msgs.msg._header");
  PyObject * pyheader_msg_class = PyObject_GetAttrString(pyheader_msg_module, "Header");
  PyObject * pyheader_msg_metaclass = PyObject_GetAttrString(pyheader_msg_class, "__class__");
  PyObject * pyheader_convert_to_py = PyObject_GetAttrString(pyheader_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_header = (convert_to_py_signature)PyCapsule_GetPointer(pyheader_convert_to_py, NULL);
  std_msgs__msg__Header pytmpheader = ros_message->header;
  pyheader = convert_to_py_header(&pytmpheader);
  if (!pyheader) {
    return NULL;
  }
  assert(pyheader != NULL);
  Py_INCREF(pyheader);
  PyObject_SetAttrString(_pymessage, "header", pyheader);
  PyObject * pyaccel = NULL;
  PyObject * pyaccel_msg_module = PyImport_ImportModule("geometry_msgs.msg._accel_with_covariance");
  PyObject * pyaccel_msg_class = PyObject_GetAttrString(pyaccel_msg_module, "AccelWithCovariance");
  PyObject * pyaccel_msg_metaclass = PyObject_GetAttrString(pyaccel_msg_class, "__class__");
  PyObject * pyaccel_convert_to_py = PyObject_GetAttrString(pyaccel_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_accel = (convert_to_py_signature)PyCapsule_GetPointer(pyaccel_convert_to_py, NULL);
  geometry_msgs__msg__AccelWithCovariance pytmpaccel = ros_message->accel;
  pyaccel = convert_to_py_accel(&pytmpaccel);
  if (!pyaccel) {
    return NULL;
  }
  assert(pyaccel != NULL);
  Py_INCREF(pyaccel);
  PyObject_SetAttrString(_pymessage, "accel", pyaccel);
  assert(_pymessage != NULL);
  return _pymessage;
}
