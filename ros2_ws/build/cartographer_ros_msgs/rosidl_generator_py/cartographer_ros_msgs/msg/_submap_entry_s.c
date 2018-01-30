// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <cartographer_ros_msgs/msg/submap_entry__struct.h>
#include <cartographer_ros_msgs/msg/submap_entry__functions.h>


void * cartographer_ros_msgs_submap_entry__convert_from_py(PyObject * _pymsg)
{
  cartographer_ros_msgs__msg__SubmapEntry * ros_message = cartographer_ros_msgs__msg__SubmapEntry__create();
  (void)ros_message;
  char full_classname_dest[52];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "cartographer_ros_msgs.msg._submap_entry.SubmapEntry",
      full_classname_dest, 51) == 0);

  PyObject * pysubmap_version = PyObject_GetAttrString(_pymsg, "submap_version");
  assert(PyLong_Check(pysubmap_version));
  ros_message->submap_version = (int32_t)PyLong_AsLong(pysubmap_version);
  PyObject * pypose = PyObject_GetAttrString(_pymsg, "pose");
  PyObject * pypose_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose");
  PyObject * pypose_msg_class = PyObject_GetAttrString(pypose_msg_module, "Pose");
  PyObject * pypose_msg_metaclass = PyObject_GetAttrString(pypose_msg_class, "__class__");
  PyObject * pypose_convert_from_py = PyObject_GetAttrString(pypose_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_pose = (convert_from_py_signature)PyCapsule_GetPointer(pypose_convert_from_py, NULL);
  geometry_msgs__msg__Pose * tmppose = (geometry_msgs__msg__Pose *) convert_from_py_pose(pypose);
  if (!tmppose) {
    return NULL;
  }
  ros_message->pose = *tmppose;

  assert(ros_message != NULL);
  return ros_message;
}

void cartographer_ros_msgs_submap_entry__destroy_ros_message(void * raw_ros_message)
{
  cartographer_ros_msgs__msg__SubmapEntry * ros_message = (cartographer_ros_msgs__msg__SubmapEntry *)raw_ros_message;
  (void)ros_message;

  cartographer_ros_msgs__msg__SubmapEntry__destroy(ros_message);
}

PyObject * cartographer_ros_msgs_submap_entry__convert_to_py(void * raw_ros_message)
{
  cartographer_ros_msgs__msg__SubmapEntry * ros_message = (cartographer_ros_msgs__msg__SubmapEntry *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("cartographer_ros_msgs.msg._submap_entry");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SubmapEntry");

  /* NOTE(esteve): Call constructor of SubmapEntry */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pysubmap_version = NULL;
  pysubmap_version = PyLong_FromLong(ros_message->submap_version);
  assert(pysubmap_version != NULL);
  Py_INCREF(pysubmap_version);
  PyObject_SetAttrString(_pymessage, "submap_version", pysubmap_version);
  PyObject * pypose = NULL;
  PyObject * pypose_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose");
  PyObject * pypose_msg_class = PyObject_GetAttrString(pypose_msg_module, "Pose");
  PyObject * pypose_msg_metaclass = PyObject_GetAttrString(pypose_msg_class, "__class__");
  PyObject * pypose_convert_to_py = PyObject_GetAttrString(pypose_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_pose = (convert_to_py_signature)PyCapsule_GetPointer(pypose_convert_to_py, NULL);
  geometry_msgs__msg__Pose pytmppose = ros_message->pose;
  pypose = convert_to_py_pose(&pytmppose);
  if (!pypose) {
    return NULL;
  }
  assert(pypose != NULL);
  Py_INCREF(pypose);
  PyObject_SetAttrString(_pymessage, "pose", pypose);
  assert(_pymessage != NULL);
  return _pymessage;
}
