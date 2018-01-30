// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <geometry_msgs/msg/twist_stamped__struct.h>
#include <geometry_msgs/msg/twist_stamped__functions.h>


void * geometry_msgs_twist_stamped__convert_from_py(PyObject * _pymsg)
{
  geometry_msgs__msg__TwistStamped * ros_message = geometry_msgs__msg__TwistStamped__create();
  (void)ros_message;
  char full_classname_dest[46];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "geometry_msgs.msg._twist_stamped.TwistStamped",
      full_classname_dest, 45) == 0);

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
  PyObject * pytwist = PyObject_GetAttrString(_pymsg, "twist");
  PyObject * pytwist_msg_module = PyImport_ImportModule("geometry_msgs.msg._twist");
  PyObject * pytwist_msg_class = PyObject_GetAttrString(pytwist_msg_module, "Twist");
  PyObject * pytwist_msg_metaclass = PyObject_GetAttrString(pytwist_msg_class, "__class__");
  PyObject * pytwist_convert_from_py = PyObject_GetAttrString(pytwist_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_twist = (convert_from_py_signature)PyCapsule_GetPointer(pytwist_convert_from_py, NULL);
  geometry_msgs__msg__Twist * tmptwist = (geometry_msgs__msg__Twist *) convert_from_py_twist(pytwist);
  if (!tmptwist) {
    return NULL;
  }
  ros_message->twist = *tmptwist;

  assert(ros_message != NULL);
  return ros_message;
}

void geometry_msgs_twist_stamped__destroy_ros_message(void * raw_ros_message)
{
  geometry_msgs__msg__TwistStamped * ros_message = (geometry_msgs__msg__TwistStamped *)raw_ros_message;
  (void)ros_message;

  geometry_msgs__msg__TwistStamped__destroy(ros_message);
}

PyObject * geometry_msgs_twist_stamped__convert_to_py(void * raw_ros_message)
{
  geometry_msgs__msg__TwistStamped * ros_message = (geometry_msgs__msg__TwistStamped *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("geometry_msgs.msg._twist_stamped");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TwistStamped");

  /* NOTE(esteve): Call constructor of TwistStamped */
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
  PyObject * pytwist = NULL;
  PyObject * pytwist_msg_module = PyImport_ImportModule("geometry_msgs.msg._twist");
  PyObject * pytwist_msg_class = PyObject_GetAttrString(pytwist_msg_module, "Twist");
  PyObject * pytwist_msg_metaclass = PyObject_GetAttrString(pytwist_msg_class, "__class__");
  PyObject * pytwist_convert_to_py = PyObject_GetAttrString(pytwist_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_twist = (convert_to_py_signature)PyCapsule_GetPointer(pytwist_convert_to_py, NULL);
  geometry_msgs__msg__Twist pytmptwist = ros_message->twist;
  pytwist = convert_to_py_twist(&pytmptwist);
  if (!pytwist) {
    return NULL;
  }
  assert(pytwist != NULL);
  Py_INCREF(pytwist);
  PyObject_SetAttrString(_pymessage, "twist", pytwist);
  assert(_pymessage != NULL);
  return _pymessage;
}
