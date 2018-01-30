// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/channel_float32__struct.h>
#include <sensor_msgs/msg/channel_float32__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>


void * sensor_msgs_channel_float32__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__ChannelFloat32 * ros_message = sensor_msgs__msg__ChannelFloat32__create();
  (void)ros_message;
  char full_classname_dest[48];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._channel_float32.ChannelFloat32",
      full_classname_dest, 47) == 0);

  PyObject * pyname = PyObject_GetAttrString(_pymsg, "name");
  assert(PyUnicode_Check(pyname));
  rosidl_generator_c__String__assign(
    &ros_message->name, (char *)PyUnicode_1BYTE_DATA(pyname));
  PyObject * pyvalues = PyObject_GetAttrString(_pymsg, "values");
  assert(PySequence_Check(pyvalues));
  PyObject * seqvalues = PySequence_Fast(pyvalues, "expected a sequence");
  PyObject * itemvalues;
  size_t sizevalues = PySequence_Size(pyvalues);
  if (!rosidl_generator_c__float32__Array__init(&(ros_message->values), sizevalues)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create float32__Array ros_message");
    return NULL;
  }
  float * destvalues = ros_message->values.data;
  float tmpvalues;
  size_t idxvalues;
  for (idxvalues = 0; idxvalues < sizevalues; idxvalues++) {
    itemvalues = PySequence_Fast_GET_ITEM(seqvalues, idxvalues);
    assert(PyFloat_Check(itemvalues));
    tmpvalues = (float)PyFloat_AS_DOUBLE(itemvalues);
    memcpy(&destvalues[idxvalues], &tmpvalues, sizeof(float));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_channel_float32__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__ChannelFloat32 * ros_message = (sensor_msgs__msg__ChannelFloat32 *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__ChannelFloat32__destroy(ros_message);
}

PyObject * sensor_msgs_channel_float32__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__ChannelFloat32 * ros_message = (sensor_msgs__msg__ChannelFloat32 *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._channel_float32");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChannelFloat32");

  /* NOTE(esteve): Call constructor of ChannelFloat32 */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyname = NULL;
  pyname = PyUnicode_FromString(ros_message->name.data);
  assert(pyname != NULL);
  Py_INCREF(pyname);
  PyObject_SetAttrString(_pymessage, "name", pyname);
  PyObject * pyvalues = NULL;
  size_t sizevalues = ros_message->values.size;
  float * tmpmessagedatavalues = ros_message->values.data;
  pyvalues = PyList_New(sizevalues);
  size_t idxvalues;
  for (idxvalues = 0; idxvalues < sizevalues; idxvalues++) {
    PyList_SetItem(pyvalues, idxvalues, PyFloat_FromDouble(tmpmessagedatavalues[idxvalues]));
  }
  assert(PySequence_Check(pyvalues));
  assert(pyvalues != NULL);
  Py_INCREF(pyvalues);
  PyObject_SetAttrString(_pymessage, "values", pyvalues);
  assert(_pymessage != NULL);
  return _pymessage;
}
