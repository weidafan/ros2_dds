// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/multi_echo_laser_scan__struct.h>
#include <sensor_msgs/msg/multi_echo_laser_scan__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <sensor_msgs/msg/laser_echo__functions.h>
// end nested array functions include

void * sensor_msgs_multi_echo_laser_scan__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__MultiEchoLaserScan * ros_message = sensor_msgs__msg__MultiEchoLaserScan__create();
  (void)ros_message;
  char full_classname_dest[58];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._multi_echo_laser_scan.MultiEchoLaserScan",
      full_classname_dest, 57) == 0);

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
  PyObject * pyangle_min = PyObject_GetAttrString(_pymsg, "angle_min");
  assert(PyFloat_Check(pyangle_min));
  ros_message->angle_min = (float)PyFloat_AS_DOUBLE(pyangle_min);
  PyObject * pyangle_max = PyObject_GetAttrString(_pymsg, "angle_max");
  assert(PyFloat_Check(pyangle_max));
  ros_message->angle_max = (float)PyFloat_AS_DOUBLE(pyangle_max);
  PyObject * pyangle_increment = PyObject_GetAttrString(_pymsg, "angle_increment");
  assert(PyFloat_Check(pyangle_increment));
  ros_message->angle_increment = (float)PyFloat_AS_DOUBLE(pyangle_increment);
  PyObject * pytime_increment = PyObject_GetAttrString(_pymsg, "time_increment");
  assert(PyFloat_Check(pytime_increment));
  ros_message->time_increment = (float)PyFloat_AS_DOUBLE(pytime_increment);
  PyObject * pyscan_time = PyObject_GetAttrString(_pymsg, "scan_time");
  assert(PyFloat_Check(pyscan_time));
  ros_message->scan_time = (float)PyFloat_AS_DOUBLE(pyscan_time);
  PyObject * pyrange_min = PyObject_GetAttrString(_pymsg, "range_min");
  assert(PyFloat_Check(pyrange_min));
  ros_message->range_min = (float)PyFloat_AS_DOUBLE(pyrange_min);
  PyObject * pyrange_max = PyObject_GetAttrString(_pymsg, "range_max");
  assert(PyFloat_Check(pyrange_max));
  ros_message->range_max = (float)PyFloat_AS_DOUBLE(pyrange_max);
  PyObject * pyranges = PyObject_GetAttrString(_pymsg, "ranges");
  PyObject * pyranges_msg_module = PyImport_ImportModule("sensor_msgs.msg._laser_echo");
  PyObject * pyranges_msg_class = PyObject_GetAttrString(pyranges_msg_module, "LaserEcho");
  PyObject * pyranges_msg_metaclass = PyObject_GetAttrString(pyranges_msg_class, "__class__");
  PyObject * pyranges_convert_from_py = PyObject_GetAttrString(pyranges_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_ranges = (convert_from_py_signature)PyCapsule_GetPointer(pyranges_convert_from_py, NULL);
  assert(PySequence_Check(pyranges));
  PyObject * seqranges = PySequence_Fast(pyranges, "expected a sequence");
  sensor_msgs__msg__LaserEcho * itemranges;
  size_t sizeranges = PySequence_Size(pyranges);
  if (!sensor_msgs__msg__LaserEcho__Array__init(&(ros_message->ranges), sizeranges)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create sensor_msgs__msg__LaserEcho__Array ros_message");
    return NULL;
  }
  sensor_msgs__msg__LaserEcho * destranges = ros_message->ranges.data;
  size_t idxranges;
  for (idxranges = 0; idxranges < sizeranges; idxranges++) {
    itemranges = (sensor_msgs__msg__LaserEcho *) convert_from_py_ranges(
      PySequence_Fast_GET_ITEM(seqranges, idxranges));
    if (!itemranges) {
      return NULL;
    }
    memcpy(&destranges[idxranges], itemranges, sizeof(sensor_msgs__msg__LaserEcho));
  }
  PyObject * pyintensities = PyObject_GetAttrString(_pymsg, "intensities");
  PyObject * pyintensities_msg_module = PyImport_ImportModule("sensor_msgs.msg._laser_echo");
  PyObject * pyintensities_msg_class = PyObject_GetAttrString(pyintensities_msg_module, "LaserEcho");
  PyObject * pyintensities_msg_metaclass = PyObject_GetAttrString(pyintensities_msg_class, "__class__");
  PyObject * pyintensities_convert_from_py = PyObject_GetAttrString(pyintensities_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_intensities = (convert_from_py_signature)PyCapsule_GetPointer(pyintensities_convert_from_py, NULL);
  assert(PySequence_Check(pyintensities));
  PyObject * seqintensities = PySequence_Fast(pyintensities, "expected a sequence");
  sensor_msgs__msg__LaserEcho * itemintensities;
  size_t sizeintensities = PySequence_Size(pyintensities);
  if (!sensor_msgs__msg__LaserEcho__Array__init(&(ros_message->intensities), sizeintensities)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create sensor_msgs__msg__LaserEcho__Array ros_message");
    return NULL;
  }
  sensor_msgs__msg__LaserEcho * destintensities = ros_message->intensities.data;
  size_t idxintensities;
  for (idxintensities = 0; idxintensities < sizeintensities; idxintensities++) {
    itemintensities = (sensor_msgs__msg__LaserEcho *) convert_from_py_intensities(
      PySequence_Fast_GET_ITEM(seqintensities, idxintensities));
    if (!itemintensities) {
      return NULL;
    }
    memcpy(&destintensities[idxintensities], itemintensities, sizeof(sensor_msgs__msg__LaserEcho));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_multi_echo_laser_scan__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__MultiEchoLaserScan * ros_message = (sensor_msgs__msg__MultiEchoLaserScan *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__MultiEchoLaserScan__destroy(ros_message);
}

PyObject * sensor_msgs_multi_echo_laser_scan__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__MultiEchoLaserScan * ros_message = (sensor_msgs__msg__MultiEchoLaserScan *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._multi_echo_laser_scan");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MultiEchoLaserScan");

  /* NOTE(esteve): Call constructor of MultiEchoLaserScan */
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
  PyObject * pyangle_min = NULL;
  pyangle_min = PyFloat_FromDouble(ros_message->angle_min);
  assert(pyangle_min != NULL);
  Py_INCREF(pyangle_min);
  PyObject_SetAttrString(_pymessage, "angle_min", pyangle_min);
  PyObject * pyangle_max = NULL;
  pyangle_max = PyFloat_FromDouble(ros_message->angle_max);
  assert(pyangle_max != NULL);
  Py_INCREF(pyangle_max);
  PyObject_SetAttrString(_pymessage, "angle_max", pyangle_max);
  PyObject * pyangle_increment = NULL;
  pyangle_increment = PyFloat_FromDouble(ros_message->angle_increment);
  assert(pyangle_increment != NULL);
  Py_INCREF(pyangle_increment);
  PyObject_SetAttrString(_pymessage, "angle_increment", pyangle_increment);
  PyObject * pytime_increment = NULL;
  pytime_increment = PyFloat_FromDouble(ros_message->time_increment);
  assert(pytime_increment != NULL);
  Py_INCREF(pytime_increment);
  PyObject_SetAttrString(_pymessage, "time_increment", pytime_increment);
  PyObject * pyscan_time = NULL;
  pyscan_time = PyFloat_FromDouble(ros_message->scan_time);
  assert(pyscan_time != NULL);
  Py_INCREF(pyscan_time);
  PyObject_SetAttrString(_pymessage, "scan_time", pyscan_time);
  PyObject * pyrange_min = NULL;
  pyrange_min = PyFloat_FromDouble(ros_message->range_min);
  assert(pyrange_min != NULL);
  Py_INCREF(pyrange_min);
  PyObject_SetAttrString(_pymessage, "range_min", pyrange_min);
  PyObject * pyrange_max = NULL;
  pyrange_max = PyFloat_FromDouble(ros_message->range_max);
  assert(pyrange_max != NULL);
  Py_INCREF(pyrange_max);
  PyObject_SetAttrString(_pymessage, "range_max", pyrange_max);
  PyObject * pyranges = NULL;
  PyObject * pyranges_msg_module = PyImport_ImportModule("sensor_msgs.msg._laser_echo");
  PyObject * pyranges_msg_class = PyObject_GetAttrString(pyranges_msg_module, "LaserEcho");
  PyObject * pyranges_msg_metaclass = PyObject_GetAttrString(pyranges_msg_class, "__class__");
  PyObject * pyranges_convert_to_py = PyObject_GetAttrString(pyranges_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_ranges = (convert_to_py_signature)PyCapsule_GetPointer(pyranges_convert_to_py, NULL);
  size_t sizeranges = ros_message->ranges.size;
  pyranges = PyList_New(sizeranges);
  sensor_msgs__msg__LaserEcho itemranges;
  size_t idxranges;
  for (idxranges = 0; idxranges < sizeranges; idxranges++) {
    itemranges = ros_message->ranges.data[idxranges];
    PyObject * pyitemranges = convert_to_py_ranges(&itemranges);
    if (!pyitemranges) {
      return NULL;
    }
    PyList_SetItem(pyranges, idxranges, pyitemranges);
  }
  assert(PySequence_Check(pyranges));
  assert(pyranges != NULL);
  Py_INCREF(pyranges);
  PyObject_SetAttrString(_pymessage, "ranges", pyranges);
  PyObject * pyintensities = NULL;
  PyObject * pyintensities_msg_module = PyImport_ImportModule("sensor_msgs.msg._laser_echo");
  PyObject * pyintensities_msg_class = PyObject_GetAttrString(pyintensities_msg_module, "LaserEcho");
  PyObject * pyintensities_msg_metaclass = PyObject_GetAttrString(pyintensities_msg_class, "__class__");
  PyObject * pyintensities_convert_to_py = PyObject_GetAttrString(pyintensities_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_intensities = (convert_to_py_signature)PyCapsule_GetPointer(pyintensities_convert_to_py, NULL);
  size_t sizeintensities = ros_message->intensities.size;
  pyintensities = PyList_New(sizeintensities);
  sensor_msgs__msg__LaserEcho itemintensities;
  size_t idxintensities;
  for (idxintensities = 0; idxintensities < sizeintensities; idxintensities++) {
    itemintensities = ros_message->intensities.data[idxintensities];
    PyObject * pyitemintensities = convert_to_py_intensities(&itemintensities);
    if (!pyitemintensities) {
      return NULL;
    }
    PyList_SetItem(pyintensities, idxintensities, pyitemintensities);
  }
  assert(PySequence_Check(pyintensities));
  assert(pyintensities != NULL);
  Py_INCREF(pyintensities);
  PyObject_SetAttrString(_pymessage, "intensities", pyintensities);
  assert(_pymessage != NULL);
  return _pymessage;
}
