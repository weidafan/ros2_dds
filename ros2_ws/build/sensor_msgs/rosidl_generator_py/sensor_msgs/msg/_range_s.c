// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/range__struct.h>
#include <sensor_msgs/msg/range__functions.h>


void * sensor_msgs_range__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__Range * ros_message = sensor_msgs__msg__Range__create();
  (void)ros_message;
  char full_classname_dest[29];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._range.Range",
      full_classname_dest, 28) == 0);

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
  PyObject * pyradiation_type = PyObject_GetAttrString(_pymsg, "radiation_type");
  assert(PyLong_Check(pyradiation_type));
  ros_message->radiation_type = (uint8_t)PyLong_AsUnsignedLong(pyradiation_type);
  PyObject * pyfield_of_view = PyObject_GetAttrString(_pymsg, "field_of_view");
  assert(PyFloat_Check(pyfield_of_view));
  ros_message->field_of_view = (float)PyFloat_AS_DOUBLE(pyfield_of_view);
  PyObject * pymin_range = PyObject_GetAttrString(_pymsg, "min_range");
  assert(PyFloat_Check(pymin_range));
  ros_message->min_range = (float)PyFloat_AS_DOUBLE(pymin_range);
  PyObject * pymax_range = PyObject_GetAttrString(_pymsg, "max_range");
  assert(PyFloat_Check(pymax_range));
  ros_message->max_range = (float)PyFloat_AS_DOUBLE(pymax_range);
  PyObject * pyrange = PyObject_GetAttrString(_pymsg, "range");
  assert(PyFloat_Check(pyrange));
  ros_message->range = (float)PyFloat_AS_DOUBLE(pyrange);

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_range__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__Range * ros_message = (sensor_msgs__msg__Range *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__Range__destroy(ros_message);
}

PyObject * sensor_msgs_range__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__Range * ros_message = (sensor_msgs__msg__Range *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._range");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Range");

  /* NOTE(esteve): Call constructor of Range */
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
  PyObject * pyradiation_type = NULL;
  pyradiation_type = PyLong_FromUnsignedLong(ros_message->radiation_type);
  assert(pyradiation_type != NULL);
  Py_INCREF(pyradiation_type);
  PyObject_SetAttrString(_pymessage, "radiation_type", pyradiation_type);
  PyObject * pyfield_of_view = NULL;
  pyfield_of_view = PyFloat_FromDouble(ros_message->field_of_view);
  assert(pyfield_of_view != NULL);
  Py_INCREF(pyfield_of_view);
  PyObject_SetAttrString(_pymessage, "field_of_view", pyfield_of_view);
  PyObject * pymin_range = NULL;
  pymin_range = PyFloat_FromDouble(ros_message->min_range);
  assert(pymin_range != NULL);
  Py_INCREF(pymin_range);
  PyObject_SetAttrString(_pymessage, "min_range", pymin_range);
  PyObject * pymax_range = NULL;
  pymax_range = PyFloat_FromDouble(ros_message->max_range);
  assert(pymax_range != NULL);
  Py_INCREF(pymax_range);
  PyObject_SetAttrString(_pymessage, "max_range", pymax_range);
  PyObject * pyrange = NULL;
  pyrange = PyFloat_FromDouble(ros_message->range);
  assert(pyrange != NULL);
  Py_INCREF(pyrange);
  PyObject_SetAttrString(_pymessage, "range", pyrange);
  assert(_pymessage != NULL);
  return _pymessage;
}
