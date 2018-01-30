// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/fluid_pressure__struct.h>
#include <sensor_msgs/msg/fluid_pressure__functions.h>


void * sensor_msgs_fluid_pressure__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__FluidPressure * ros_message = sensor_msgs__msg__FluidPressure__create();
  (void)ros_message;
  char full_classname_dest[46];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._fluid_pressure.FluidPressure",
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
  PyObject * pyfluid_pressure = PyObject_GetAttrString(_pymsg, "fluid_pressure");
  assert(PyFloat_Check(pyfluid_pressure));
  ros_message->fluid_pressure = PyFloat_AS_DOUBLE(pyfluid_pressure);
  PyObject * pyvariance = PyObject_GetAttrString(_pymsg, "variance");
  assert(PyFloat_Check(pyvariance));
  ros_message->variance = PyFloat_AS_DOUBLE(pyvariance);

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_fluid_pressure__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__FluidPressure * ros_message = (sensor_msgs__msg__FluidPressure *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__FluidPressure__destroy(ros_message);
}

PyObject * sensor_msgs_fluid_pressure__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__FluidPressure * ros_message = (sensor_msgs__msg__FluidPressure *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._fluid_pressure");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FluidPressure");

  /* NOTE(esteve): Call constructor of FluidPressure */
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
  PyObject * pyfluid_pressure = NULL;
  pyfluid_pressure = PyFloat_FromDouble(ros_message->fluid_pressure);
  assert(pyfluid_pressure != NULL);
  Py_INCREF(pyfluid_pressure);
  PyObject_SetAttrString(_pymessage, "fluid_pressure", pyfluid_pressure);
  PyObject * pyvariance = NULL;
  pyvariance = PyFloat_FromDouble(ros_message->variance);
  assert(pyvariance != NULL);
  Py_INCREF(pyvariance);
  PyObject_SetAttrString(_pymessage, "variance", pyvariance);
  assert(_pymessage != NULL);
  return _pymessage;
}
