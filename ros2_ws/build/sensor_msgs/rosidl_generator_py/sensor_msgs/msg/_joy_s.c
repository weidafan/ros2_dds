// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/joy__struct.h>
#include <sensor_msgs/msg/joy__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>


void * sensor_msgs_joy__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__Joy * ros_message = sensor_msgs__msg__Joy__create();
  (void)ros_message;
  char full_classname_dest[25];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._joy.Joy",
      full_classname_dest, 24) == 0);

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
  PyObject * pyaxes = PyObject_GetAttrString(_pymsg, "axes");
  assert(PySequence_Check(pyaxes));
  PyObject * seqaxes = PySequence_Fast(pyaxes, "expected a sequence");
  PyObject * itemaxes;
  size_t sizeaxes = PySequence_Size(pyaxes);
  if (!rosidl_generator_c__float32__Array__init(&(ros_message->axes), sizeaxes)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create float32__Array ros_message");
    return NULL;
  }
  float * destaxes = ros_message->axes.data;
  float tmpaxes;
  size_t idxaxes;
  for (idxaxes = 0; idxaxes < sizeaxes; idxaxes++) {
    itemaxes = PySequence_Fast_GET_ITEM(seqaxes, idxaxes);
    assert(PyFloat_Check(itemaxes));
    tmpaxes = (float)PyFloat_AS_DOUBLE(itemaxes);
    memcpy(&destaxes[idxaxes], &tmpaxes, sizeof(float));
  }
  PyObject * pybuttons = PyObject_GetAttrString(_pymsg, "buttons");
  assert(PySequence_Check(pybuttons));
  PyObject * seqbuttons = PySequence_Fast(pybuttons, "expected a sequence");
  PyObject * itembuttons;
  size_t sizebuttons = PySequence_Size(pybuttons);
  if (!rosidl_generator_c__int32__Array__init(&(ros_message->buttons), sizebuttons)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Array ros_message");
    return NULL;
  }
  int32_t * destbuttons = ros_message->buttons.data;
  int32_t tmpbuttons;
  size_t idxbuttons;
  for (idxbuttons = 0; idxbuttons < sizebuttons; idxbuttons++) {
    itembuttons = PySequence_Fast_GET_ITEM(seqbuttons, idxbuttons);
    assert(PyLong_Check(itembuttons));
    tmpbuttons = (int32_t)PyLong_AsLong(itembuttons);
    memcpy(&destbuttons[idxbuttons], &tmpbuttons, sizeof(int32_t));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_joy__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__Joy * ros_message = (sensor_msgs__msg__Joy *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__Joy__destroy(ros_message);
}

PyObject * sensor_msgs_joy__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__Joy * ros_message = (sensor_msgs__msg__Joy *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._joy");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Joy");

  /* NOTE(esteve): Call constructor of Joy */
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
  PyObject * pyaxes = NULL;
  size_t sizeaxes = ros_message->axes.size;
  float * tmpmessagedataaxes = ros_message->axes.data;
  pyaxes = PyList_New(sizeaxes);
  size_t idxaxes;
  for (idxaxes = 0; idxaxes < sizeaxes; idxaxes++) {
    PyList_SetItem(pyaxes, idxaxes, PyFloat_FromDouble(tmpmessagedataaxes[idxaxes]));
  }
  assert(PySequence_Check(pyaxes));
  assert(pyaxes != NULL);
  Py_INCREF(pyaxes);
  PyObject_SetAttrString(_pymessage, "axes", pyaxes);
  PyObject * pybuttons = NULL;
  size_t sizebuttons = ros_message->buttons.size;
  int32_t * tmpmessagedatabuttons = ros_message->buttons.data;
  pybuttons = PyList_New(sizebuttons);
  size_t idxbuttons;
  for (idxbuttons = 0; idxbuttons < sizebuttons; idxbuttons++) {
    PyList_SetItem(pybuttons, idxbuttons, PyLong_FromLong(tmpmessagedatabuttons[idxbuttons]));
  }
  assert(PySequence_Check(pybuttons));
  assert(pybuttons != NULL);
  Py_INCREF(pybuttons);
  PyObject_SetAttrString(_pymessage, "buttons", pybuttons);
  assert(_pymessage != NULL);
  return _pymessage;
}
