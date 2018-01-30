// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <nav_msgs/srv/set_map__request__struct.h>
#include <nav_msgs/srv/set_map__request__functions.h>


void * nav_msgs_set_map__request__convert_from_py(PyObject * _pymsg)
{
  nav_msgs__srv__SetMap_Request * ros_message = nav_msgs__srv__SetMap_Request__create();
  (void)ros_message;
  char full_classname_dest[46];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "nav_msgs.srv._set_map__request.SetMap_Request",
      full_classname_dest, 45) == 0);

  PyObject * pymap = PyObject_GetAttrString(_pymsg, "map");
  PyObject * pymap_msg_module = PyImport_ImportModule("nav_msgs.msg._occupancy_grid");
  PyObject * pymap_msg_class = PyObject_GetAttrString(pymap_msg_module, "OccupancyGrid");
  PyObject * pymap_msg_metaclass = PyObject_GetAttrString(pymap_msg_class, "__class__");
  PyObject * pymap_convert_from_py = PyObject_GetAttrString(pymap_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_map = (convert_from_py_signature)PyCapsule_GetPointer(pymap_convert_from_py, NULL);
  nav_msgs__msg__OccupancyGrid * tmpmap = (nav_msgs__msg__OccupancyGrid *) convert_from_py_map(pymap);
  if (!tmpmap) {
    return NULL;
  }
  ros_message->map = *tmpmap;
  PyObject * pyinitial_pose = PyObject_GetAttrString(_pymsg, "initial_pose");
  PyObject * pyinitial_pose_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose_with_covariance_stamped");
  PyObject * pyinitial_pose_msg_class = PyObject_GetAttrString(pyinitial_pose_msg_module, "PoseWithCovarianceStamped");
  PyObject * pyinitial_pose_msg_metaclass = PyObject_GetAttrString(pyinitial_pose_msg_class, "__class__");
  PyObject * pyinitial_pose_convert_from_py = PyObject_GetAttrString(pyinitial_pose_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_initial_pose = (convert_from_py_signature)PyCapsule_GetPointer(pyinitial_pose_convert_from_py, NULL);
  geometry_msgs__msg__PoseWithCovarianceStamped * tmpinitial_pose = (geometry_msgs__msg__PoseWithCovarianceStamped *) convert_from_py_initial_pose(pyinitial_pose);
  if (!tmpinitial_pose) {
    return NULL;
  }
  ros_message->initial_pose = *tmpinitial_pose;

  assert(ros_message != NULL);
  return ros_message;
}

void nav_msgs_set_map__request__destroy_ros_message(void * raw_ros_message)
{
  nav_msgs__srv__SetMap_Request * ros_message = (nav_msgs__srv__SetMap_Request *)raw_ros_message;
  (void)ros_message;

  nav_msgs__srv__SetMap_Request__destroy(ros_message);
}

PyObject * nav_msgs_set_map__request__convert_to_py(void * raw_ros_message)
{
  nav_msgs__srv__SetMap_Request * ros_message = (nav_msgs__srv__SetMap_Request *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("nav_msgs.srv._set_map__request");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetMap_Request");

  /* NOTE(esteve): Call constructor of SetMap_Request */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pymap = NULL;
  PyObject * pymap_msg_module = PyImport_ImportModule("nav_msgs.msg._occupancy_grid");
  PyObject * pymap_msg_class = PyObject_GetAttrString(pymap_msg_module, "OccupancyGrid");
  PyObject * pymap_msg_metaclass = PyObject_GetAttrString(pymap_msg_class, "__class__");
  PyObject * pymap_convert_to_py = PyObject_GetAttrString(pymap_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_map = (convert_to_py_signature)PyCapsule_GetPointer(pymap_convert_to_py, NULL);
  nav_msgs__msg__OccupancyGrid pytmpmap = ros_message->map;
  pymap = convert_to_py_map(&pytmpmap);
  if (!pymap) {
    return NULL;
  }
  assert(pymap != NULL);
  Py_INCREF(pymap);
  PyObject_SetAttrString(_pymessage, "map", pymap);
  PyObject * pyinitial_pose = NULL;
  PyObject * pyinitial_pose_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose_with_covariance_stamped");
  PyObject * pyinitial_pose_msg_class = PyObject_GetAttrString(pyinitial_pose_msg_module, "PoseWithCovarianceStamped");
  PyObject * pyinitial_pose_msg_metaclass = PyObject_GetAttrString(pyinitial_pose_msg_class, "__class__");
  PyObject * pyinitial_pose_convert_to_py = PyObject_GetAttrString(pyinitial_pose_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_initial_pose = (convert_to_py_signature)PyCapsule_GetPointer(pyinitial_pose_convert_to_py, NULL);
  geometry_msgs__msg__PoseWithCovarianceStamped pytmpinitial_pose = ros_message->initial_pose;
  pyinitial_pose = convert_to_py_initial_pose(&pytmpinitial_pose);
  if (!pyinitial_pose) {
    return NULL;
  }
  assert(pyinitial_pose != NULL);
  Py_INCREF(pyinitial_pose);
  PyObject_SetAttrString(_pymessage, "initial_pose", pyinitial_pose);
  assert(_pymessage != NULL);
  return _pymessage;
}
