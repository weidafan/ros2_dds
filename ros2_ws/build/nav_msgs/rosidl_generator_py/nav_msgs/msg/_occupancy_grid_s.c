// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <nav_msgs/msg/occupancy_grid__struct.h>
#include <nav_msgs/msg/occupancy_grid__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>


void * nav_msgs_occupancy_grid__convert_from_py(PyObject * _pymsg)
{
  nav_msgs__msg__OccupancyGrid * ros_message = nav_msgs__msg__OccupancyGrid__create();
  (void)ros_message;
  char full_classname_dest[43];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "nav_msgs.msg._occupancy_grid.OccupancyGrid",
      full_classname_dest, 42) == 0);

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
  PyObject * pyinfo = PyObject_GetAttrString(_pymsg, "info");
  PyObject * pyinfo_msg_module = PyImport_ImportModule("nav_msgs.msg._map_meta_data");
  PyObject * pyinfo_msg_class = PyObject_GetAttrString(pyinfo_msg_module, "MapMetaData");
  PyObject * pyinfo_msg_metaclass = PyObject_GetAttrString(pyinfo_msg_class, "__class__");
  PyObject * pyinfo_convert_from_py = PyObject_GetAttrString(pyinfo_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_info = (convert_from_py_signature)PyCapsule_GetPointer(pyinfo_convert_from_py, NULL);
  nav_msgs__msg__MapMetaData * tmpinfo = (nav_msgs__msg__MapMetaData *) convert_from_py_info(pyinfo);
  if (!tmpinfo) {
    return NULL;
  }
  ros_message->info = *tmpinfo;
  PyObject * pydata = PyObject_GetAttrString(_pymsg, "data");
  assert(PySequence_Check(pydata));
  PyObject * seqdata = PySequence_Fast(pydata, "expected a sequence");
  PyObject * itemdata;
  size_t sizedata = PySequence_Size(pydata);
  if (!rosidl_generator_c__int8__Array__init(&(ros_message->data), sizedata)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create int8__Array ros_message");
    return NULL;
  }
  int8_t * destdata = ros_message->data.data;
  int8_t tmpdata;
  size_t idxdata;
  for (idxdata = 0; idxdata < sizedata; idxdata++) {
    itemdata = PySequence_Fast_GET_ITEM(seqdata, idxdata);
    assert(PyLong_Check(itemdata));
    tmpdata = (int8_t)PyLong_AsLong(itemdata);
    memcpy(&destdata[idxdata], &tmpdata, sizeof(int8_t));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void nav_msgs_occupancy_grid__destroy_ros_message(void * raw_ros_message)
{
  nav_msgs__msg__OccupancyGrid * ros_message = (nav_msgs__msg__OccupancyGrid *)raw_ros_message;
  (void)ros_message;

  nav_msgs__msg__OccupancyGrid__destroy(ros_message);
}

PyObject * nav_msgs_occupancy_grid__convert_to_py(void * raw_ros_message)
{
  nav_msgs__msg__OccupancyGrid * ros_message = (nav_msgs__msg__OccupancyGrid *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("nav_msgs.msg._occupancy_grid");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OccupancyGrid");

  /* NOTE(esteve): Call constructor of OccupancyGrid */
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
  PyObject * pyinfo = NULL;
  PyObject * pyinfo_msg_module = PyImport_ImportModule("nav_msgs.msg._map_meta_data");
  PyObject * pyinfo_msg_class = PyObject_GetAttrString(pyinfo_msg_module, "MapMetaData");
  PyObject * pyinfo_msg_metaclass = PyObject_GetAttrString(pyinfo_msg_class, "__class__");
  PyObject * pyinfo_convert_to_py = PyObject_GetAttrString(pyinfo_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_info = (convert_to_py_signature)PyCapsule_GetPointer(pyinfo_convert_to_py, NULL);
  nav_msgs__msg__MapMetaData pytmpinfo = ros_message->info;
  pyinfo = convert_to_py_info(&pytmpinfo);
  if (!pyinfo) {
    return NULL;
  }
  assert(pyinfo != NULL);
  Py_INCREF(pyinfo);
  PyObject_SetAttrString(_pymessage, "info", pyinfo);
  PyObject * pydata = NULL;
  size_t sizedata = ros_message->data.size;
  int8_t * tmpmessagedatadata = ros_message->data.data;
  pydata = PyList_New(sizedata);
  size_t idxdata;
  for (idxdata = 0; idxdata < sizedata; idxdata++) {
    PyList_SetItem(pydata, idxdata, PyLong_FromLong(tmpmessagedatadata[idxdata]));
  }
  assert(PySequence_Check(pydata));
  assert(pydata != NULL);
  Py_INCREF(pydata);
  PyObject_SetAttrString(_pymessage, "data", pydata);
  assert(_pymessage != NULL);
  return _pymessage;
}
