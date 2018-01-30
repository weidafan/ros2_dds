// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <nav_msgs/msg/map_meta_data__struct.h>
#include <nav_msgs/msg/map_meta_data__functions.h>


void * nav_msgs_map_meta_data__convert_from_py(PyObject * _pymsg)
{
  nav_msgs__msg__MapMetaData * ros_message = nav_msgs__msg__MapMetaData__create();
  (void)ros_message;
  char full_classname_dest[40];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "nav_msgs.msg._map_meta_data.MapMetaData",
      full_classname_dest, 39) == 0);

  PyObject * pymap_load_time = PyObject_GetAttrString(_pymsg, "map_load_time");
  PyObject * pymap_load_time_msg_module = PyImport_ImportModule("builtin_interfaces.msg._time");
  PyObject * pymap_load_time_msg_class = PyObject_GetAttrString(pymap_load_time_msg_module, "Time");
  PyObject * pymap_load_time_msg_metaclass = PyObject_GetAttrString(pymap_load_time_msg_class, "__class__");
  PyObject * pymap_load_time_convert_from_py = PyObject_GetAttrString(pymap_load_time_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_map_load_time = (convert_from_py_signature)PyCapsule_GetPointer(pymap_load_time_convert_from_py, NULL);
  builtin_interfaces__msg__Time * tmpmap_load_time = (builtin_interfaces__msg__Time *) convert_from_py_map_load_time(pymap_load_time);
  if (!tmpmap_load_time) {
    return NULL;
  }
  ros_message->map_load_time = *tmpmap_load_time;
  PyObject * pyresolution = PyObject_GetAttrString(_pymsg, "resolution");
  assert(PyFloat_Check(pyresolution));
  ros_message->resolution = (float)PyFloat_AS_DOUBLE(pyresolution);
  PyObject * pywidth = PyObject_GetAttrString(_pymsg, "width");
  assert(PyLong_Check(pywidth));
  ros_message->width = PyLong_AsUnsignedLong(pywidth);
  PyObject * pyheight = PyObject_GetAttrString(_pymsg, "height");
  assert(PyLong_Check(pyheight));
  ros_message->height = PyLong_AsUnsignedLong(pyheight);
  PyObject * pyorigin = PyObject_GetAttrString(_pymsg, "origin");
  PyObject * pyorigin_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose");
  PyObject * pyorigin_msg_class = PyObject_GetAttrString(pyorigin_msg_module, "Pose");
  PyObject * pyorigin_msg_metaclass = PyObject_GetAttrString(pyorigin_msg_class, "__class__");
  PyObject * pyorigin_convert_from_py = PyObject_GetAttrString(pyorigin_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_origin = (convert_from_py_signature)PyCapsule_GetPointer(pyorigin_convert_from_py, NULL);
  geometry_msgs__msg__Pose * tmporigin = (geometry_msgs__msg__Pose *) convert_from_py_origin(pyorigin);
  if (!tmporigin) {
    return NULL;
  }
  ros_message->origin = *tmporigin;

  assert(ros_message != NULL);
  return ros_message;
}

void nav_msgs_map_meta_data__destroy_ros_message(void * raw_ros_message)
{
  nav_msgs__msg__MapMetaData * ros_message = (nav_msgs__msg__MapMetaData *)raw_ros_message;
  (void)ros_message;

  nav_msgs__msg__MapMetaData__destroy(ros_message);
}

PyObject * nav_msgs_map_meta_data__convert_to_py(void * raw_ros_message)
{
  nav_msgs__msg__MapMetaData * ros_message = (nav_msgs__msg__MapMetaData *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("nav_msgs.msg._map_meta_data");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MapMetaData");

  /* NOTE(esteve): Call constructor of MapMetaData */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pymap_load_time = NULL;
  PyObject * pymap_load_time_msg_module = PyImport_ImportModule("builtin_interfaces.msg._time");
  PyObject * pymap_load_time_msg_class = PyObject_GetAttrString(pymap_load_time_msg_module, "Time");
  PyObject * pymap_load_time_msg_metaclass = PyObject_GetAttrString(pymap_load_time_msg_class, "__class__");
  PyObject * pymap_load_time_convert_to_py = PyObject_GetAttrString(pymap_load_time_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_map_load_time = (convert_to_py_signature)PyCapsule_GetPointer(pymap_load_time_convert_to_py, NULL);
  builtin_interfaces__msg__Time pytmpmap_load_time = ros_message->map_load_time;
  pymap_load_time = convert_to_py_map_load_time(&pytmpmap_load_time);
  if (!pymap_load_time) {
    return NULL;
  }
  assert(pymap_load_time != NULL);
  Py_INCREF(pymap_load_time);
  PyObject_SetAttrString(_pymessage, "map_load_time", pymap_load_time);
  PyObject * pyresolution = NULL;
  pyresolution = PyFloat_FromDouble(ros_message->resolution);
  assert(pyresolution != NULL);
  Py_INCREF(pyresolution);
  PyObject_SetAttrString(_pymessage, "resolution", pyresolution);
  PyObject * pywidth = NULL;
  pywidth = PyLong_FromUnsignedLong(ros_message->width);
  assert(pywidth != NULL);
  Py_INCREF(pywidth);
  PyObject_SetAttrString(_pymessage, "width", pywidth);
  PyObject * pyheight = NULL;
  pyheight = PyLong_FromUnsignedLong(ros_message->height);
  assert(pyheight != NULL);
  Py_INCREF(pyheight);
  PyObject_SetAttrString(_pymessage, "height", pyheight);
  PyObject * pyorigin = NULL;
  PyObject * pyorigin_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose");
  PyObject * pyorigin_msg_class = PyObject_GetAttrString(pyorigin_msg_module, "Pose");
  PyObject * pyorigin_msg_metaclass = PyObject_GetAttrString(pyorigin_msg_class, "__class__");
  PyObject * pyorigin_convert_to_py = PyObject_GetAttrString(pyorigin_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_origin = (convert_to_py_signature)PyCapsule_GetPointer(pyorigin_convert_to_py, NULL);
  geometry_msgs__msg__Pose pytmporigin = ros_message->origin;
  pyorigin = convert_to_py_origin(&pytmporigin);
  if (!pyorigin) {
    return NULL;
  }
  assert(pyorigin != NULL);
  Py_INCREF(pyorigin);
  PyObject_SetAttrString(_pymessage, "origin", pyorigin);
  assert(_pymessage != NULL);
  return _pymessage;
}
