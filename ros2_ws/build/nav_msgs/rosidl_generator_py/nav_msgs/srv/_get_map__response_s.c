// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <nav_msgs/srv/get_map__response__struct.h>
#include <nav_msgs/srv/get_map__response__functions.h>


void * nav_msgs_get_map__response__convert_from_py(PyObject * _pymsg)
{
  nav_msgs__srv__GetMap_Response * ros_message = nav_msgs__srv__GetMap_Response__create();
  (void)ros_message;
  char full_classname_dest[48];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "nav_msgs.srv._get_map__response.GetMap_Response",
      full_classname_dest, 47) == 0);

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

  assert(ros_message != NULL);
  return ros_message;
}

void nav_msgs_get_map__response__destroy_ros_message(void * raw_ros_message)
{
  nav_msgs__srv__GetMap_Response * ros_message = (nav_msgs__srv__GetMap_Response *)raw_ros_message;
  (void)ros_message;

  nav_msgs__srv__GetMap_Response__destroy(ros_message);
}

PyObject * nav_msgs_get_map__response__convert_to_py(void * raw_ros_message)
{
  nav_msgs__srv__GetMap_Response * ros_message = (nav_msgs__srv__GetMap_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("nav_msgs.srv._get_map__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetMap_Response");

  /* NOTE(esteve): Call constructor of GetMap_Response */
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
  assert(_pymessage != NULL);
  return _pymessage;
}
