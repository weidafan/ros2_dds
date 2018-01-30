// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/point_cloud__struct.h>
#include <sensor_msgs/msg/point_cloud__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <sensor_msgs/msg/channel_float32__functions.h>
#include <geometry_msgs/msg/point32__functions.h>
// end nested array functions include

void * sensor_msgs_point_cloud__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__PointCloud * ros_message = sensor_msgs__msg__PointCloud__create();
  (void)ros_message;
  char full_classname_dest[40];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._point_cloud.PointCloud",
      full_classname_dest, 39) == 0);

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
  PyObject * pypoints = PyObject_GetAttrString(_pymsg, "points");
  PyObject * pypoints_msg_module = PyImport_ImportModule("geometry_msgs.msg._point32");
  PyObject * pypoints_msg_class = PyObject_GetAttrString(pypoints_msg_module, "Point32");
  PyObject * pypoints_msg_metaclass = PyObject_GetAttrString(pypoints_msg_class, "__class__");
  PyObject * pypoints_convert_from_py = PyObject_GetAttrString(pypoints_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_points = (convert_from_py_signature)PyCapsule_GetPointer(pypoints_convert_from_py, NULL);
  assert(PySequence_Check(pypoints));
  PyObject * seqpoints = PySequence_Fast(pypoints, "expected a sequence");
  geometry_msgs__msg__Point32 * itempoints;
  size_t sizepoints = PySequence_Size(pypoints);
  if (!geometry_msgs__msg__Point32__Array__init(&(ros_message->points), sizepoints)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Point32__Array ros_message");
    return NULL;
  }
  geometry_msgs__msg__Point32 * destpoints = ros_message->points.data;
  size_t idxpoints;
  for (idxpoints = 0; idxpoints < sizepoints; idxpoints++) {
    itempoints = (geometry_msgs__msg__Point32 *) convert_from_py_points(
      PySequence_Fast_GET_ITEM(seqpoints, idxpoints));
    if (!itempoints) {
      return NULL;
    }
    memcpy(&destpoints[idxpoints], itempoints, sizeof(geometry_msgs__msg__Point32));
  }
  PyObject * pychannels = PyObject_GetAttrString(_pymsg, "channels");
  PyObject * pychannels_msg_module = PyImport_ImportModule("sensor_msgs.msg._channel_float32");
  PyObject * pychannels_msg_class = PyObject_GetAttrString(pychannels_msg_module, "ChannelFloat32");
  PyObject * pychannels_msg_metaclass = PyObject_GetAttrString(pychannels_msg_class, "__class__");
  PyObject * pychannels_convert_from_py = PyObject_GetAttrString(pychannels_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_channels = (convert_from_py_signature)PyCapsule_GetPointer(pychannels_convert_from_py, NULL);
  assert(PySequence_Check(pychannels));
  PyObject * seqchannels = PySequence_Fast(pychannels, "expected a sequence");
  sensor_msgs__msg__ChannelFloat32 * itemchannels;
  size_t sizechannels = PySequence_Size(pychannels);
  if (!sensor_msgs__msg__ChannelFloat32__Array__init(&(ros_message->channels), sizechannels)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create sensor_msgs__msg__ChannelFloat32__Array ros_message");
    return NULL;
  }
  sensor_msgs__msg__ChannelFloat32 * destchannels = ros_message->channels.data;
  size_t idxchannels;
  for (idxchannels = 0; idxchannels < sizechannels; idxchannels++) {
    itemchannels = (sensor_msgs__msg__ChannelFloat32 *) convert_from_py_channels(
      PySequence_Fast_GET_ITEM(seqchannels, idxchannels));
    if (!itemchannels) {
      return NULL;
    }
    memcpy(&destchannels[idxchannels], itemchannels, sizeof(sensor_msgs__msg__ChannelFloat32));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_point_cloud__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__PointCloud * ros_message = (sensor_msgs__msg__PointCloud *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__PointCloud__destroy(ros_message);
}

PyObject * sensor_msgs_point_cloud__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__PointCloud * ros_message = (sensor_msgs__msg__PointCloud *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._point_cloud");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PointCloud");

  /* NOTE(esteve): Call constructor of PointCloud */
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
  PyObject * pypoints = NULL;
  PyObject * pypoints_msg_module = PyImport_ImportModule("geometry_msgs.msg._point32");
  PyObject * pypoints_msg_class = PyObject_GetAttrString(pypoints_msg_module, "Point32");
  PyObject * pypoints_msg_metaclass = PyObject_GetAttrString(pypoints_msg_class, "__class__");
  PyObject * pypoints_convert_to_py = PyObject_GetAttrString(pypoints_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_points = (convert_to_py_signature)PyCapsule_GetPointer(pypoints_convert_to_py, NULL);
  size_t sizepoints = ros_message->points.size;
  pypoints = PyList_New(sizepoints);
  geometry_msgs__msg__Point32 itempoints;
  size_t idxpoints;
  for (idxpoints = 0; idxpoints < sizepoints; idxpoints++) {
    itempoints = ros_message->points.data[idxpoints];
    PyObject * pyitempoints = convert_to_py_points(&itempoints);
    if (!pyitempoints) {
      return NULL;
    }
    PyList_SetItem(pypoints, idxpoints, pyitempoints);
  }
  assert(PySequence_Check(pypoints));
  assert(pypoints != NULL);
  Py_INCREF(pypoints);
  PyObject_SetAttrString(_pymessage, "points", pypoints);
  PyObject * pychannels = NULL;
  PyObject * pychannels_msg_module = PyImport_ImportModule("sensor_msgs.msg._channel_float32");
  PyObject * pychannels_msg_class = PyObject_GetAttrString(pychannels_msg_module, "ChannelFloat32");
  PyObject * pychannels_msg_metaclass = PyObject_GetAttrString(pychannels_msg_class, "__class__");
  PyObject * pychannels_convert_to_py = PyObject_GetAttrString(pychannels_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_channels = (convert_to_py_signature)PyCapsule_GetPointer(pychannels_convert_to_py, NULL);
  size_t sizechannels = ros_message->channels.size;
  pychannels = PyList_New(sizechannels);
  sensor_msgs__msg__ChannelFloat32 itemchannels;
  size_t idxchannels;
  for (idxchannels = 0; idxchannels < sizechannels; idxchannels++) {
    itemchannels = ros_message->channels.data[idxchannels];
    PyObject * pyitemchannels = convert_to_py_channels(&itemchannels);
    if (!pyitemchannels) {
      return NULL;
    }
    PyList_SetItem(pychannels, idxchannels, pyitemchannels);
  }
  assert(PySequence_Check(pychannels));
  assert(pychannels != NULL);
  Py_INCREF(pychannels);
  PyObject_SetAttrString(_pymessage, "channels", pychannels);
  assert(_pymessage != NULL);
  return _pymessage;
}
