// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <geometry_msgs/msg/pose__struct.h>
#include <geometry_msgs/msg/pose__functions.h>


void * geometry_msgs_pose__convert_from_py(PyObject * _pymsg)
{
  geometry_msgs__msg__Pose * ros_message = geometry_msgs__msg__Pose__create();
  (void)ros_message;
  char full_classname_dest[29];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "geometry_msgs.msg._pose.Pose",
      full_classname_dest, 28) == 0);

  PyObject * pyposition = PyObject_GetAttrString(_pymsg, "position");
  PyObject * pyposition_msg_module = PyImport_ImportModule("geometry_msgs.msg._point");
  PyObject * pyposition_msg_class = PyObject_GetAttrString(pyposition_msg_module, "Point");
  PyObject * pyposition_msg_metaclass = PyObject_GetAttrString(pyposition_msg_class, "__class__");
  PyObject * pyposition_convert_from_py = PyObject_GetAttrString(pyposition_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_position = (convert_from_py_signature)PyCapsule_GetPointer(pyposition_convert_from_py, NULL);
  geometry_msgs__msg__Point * tmpposition = (geometry_msgs__msg__Point *) convert_from_py_position(pyposition);
  if (!tmpposition) {
    return NULL;
  }
  ros_message->position = *tmpposition;
  PyObject * pyorientation = PyObject_GetAttrString(_pymsg, "orientation");
  PyObject * pyorientation_msg_module = PyImport_ImportModule("geometry_msgs.msg._quaternion");
  PyObject * pyorientation_msg_class = PyObject_GetAttrString(pyorientation_msg_module, "Quaternion");
  PyObject * pyorientation_msg_metaclass = PyObject_GetAttrString(pyorientation_msg_class, "__class__");
  PyObject * pyorientation_convert_from_py = PyObject_GetAttrString(pyorientation_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_orientation = (convert_from_py_signature)PyCapsule_GetPointer(pyorientation_convert_from_py, NULL);
  geometry_msgs__msg__Quaternion * tmporientation = (geometry_msgs__msg__Quaternion *) convert_from_py_orientation(pyorientation);
  if (!tmporientation) {
    return NULL;
  }
  ros_message->orientation = *tmporientation;

  assert(ros_message != NULL);
  return ros_message;
}

void geometry_msgs_pose__destroy_ros_message(void * raw_ros_message)
{
  geometry_msgs__msg__Pose * ros_message = (geometry_msgs__msg__Pose *)raw_ros_message;
  (void)ros_message;

  geometry_msgs__msg__Pose__destroy(ros_message);
}

PyObject * geometry_msgs_pose__convert_to_py(void * raw_ros_message)
{
  geometry_msgs__msg__Pose * ros_message = (geometry_msgs__msg__Pose *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("geometry_msgs.msg._pose");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Pose");

  /* NOTE(esteve): Call constructor of Pose */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyposition = NULL;
  PyObject * pyposition_msg_module = PyImport_ImportModule("geometry_msgs.msg._point");
  PyObject * pyposition_msg_class = PyObject_GetAttrString(pyposition_msg_module, "Point");
  PyObject * pyposition_msg_metaclass = PyObject_GetAttrString(pyposition_msg_class, "__class__");
  PyObject * pyposition_convert_to_py = PyObject_GetAttrString(pyposition_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_position = (convert_to_py_signature)PyCapsule_GetPointer(pyposition_convert_to_py, NULL);
  geometry_msgs__msg__Point pytmpposition = ros_message->position;
  pyposition = convert_to_py_position(&pytmpposition);
  if (!pyposition) {
    return NULL;
  }
  assert(pyposition != NULL);
  Py_INCREF(pyposition);
  PyObject_SetAttrString(_pymessage, "position", pyposition);
  PyObject * pyorientation = NULL;
  PyObject * pyorientation_msg_module = PyImport_ImportModule("geometry_msgs.msg._quaternion");
  PyObject * pyorientation_msg_class = PyObject_GetAttrString(pyorientation_msg_module, "Quaternion");
  PyObject * pyorientation_msg_metaclass = PyObject_GetAttrString(pyorientation_msg_class, "__class__");
  PyObject * pyorientation_convert_to_py = PyObject_GetAttrString(pyorientation_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_orientation = (convert_to_py_signature)PyCapsule_GetPointer(pyorientation_convert_to_py, NULL);
  geometry_msgs__msg__Quaternion pytmporientation = ros_message->orientation;
  pyorientation = convert_to_py_orientation(&pytmporientation);
  if (!pyorientation) {
    return NULL;
  }
  assert(pyorientation != NULL);
  Py_INCREF(pyorientation);
  PyObject_SetAttrString(_pymessage, "orientation", pyorientation);
  assert(_pymessage != NULL);
  return _pymessage;
}
