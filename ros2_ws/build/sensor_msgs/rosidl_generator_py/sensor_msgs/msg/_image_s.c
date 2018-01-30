// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/image__struct.h>
#include <sensor_msgs/msg/image__functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>


void * sensor_msgs_image__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__Image * ros_message = sensor_msgs__msg__Image__create();
  (void)ros_message;
  char full_classname_dest[29];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._image.Image",
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
  PyObject * pyheight = PyObject_GetAttrString(_pymsg, "height");
  assert(PyLong_Check(pyheight));
  ros_message->height = PyLong_AsUnsignedLong(pyheight);
  PyObject * pywidth = PyObject_GetAttrString(_pymsg, "width");
  assert(PyLong_Check(pywidth));
  ros_message->width = PyLong_AsUnsignedLong(pywidth);
  PyObject * pyencoding = PyObject_GetAttrString(_pymsg, "encoding");
  assert(PyUnicode_Check(pyencoding));
  rosidl_generator_c__String__assign(
    &ros_message->encoding, (char *)PyUnicode_1BYTE_DATA(pyencoding));
  PyObject * pyis_bigendian = PyObject_GetAttrString(_pymsg, "is_bigendian");
  assert(PyLong_Check(pyis_bigendian));
  ros_message->is_bigendian = (uint8_t)PyLong_AsUnsignedLong(pyis_bigendian);
  PyObject * pystep = PyObject_GetAttrString(_pymsg, "step");
  assert(PyLong_Check(pystep));
  ros_message->step = PyLong_AsUnsignedLong(pystep);
  PyObject * pydata = PyObject_GetAttrString(_pymsg, "data");
  assert(PySequence_Check(pydata));
  PyObject * seqdata = PySequence_Fast(pydata, "expected a sequence");
  PyObject * itemdata;
  size_t sizedata = PySequence_Size(pydata);
  if (!rosidl_generator_c__uint8__Array__init(&(ros_message->data), sizedata)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Array ros_message");
    return NULL;
  }
  uint8_t * destdata = ros_message->data.data;
  uint8_t tmpdata;
  size_t idxdata;
  for (idxdata = 0; idxdata < sizedata; idxdata++) {
    itemdata = PySequence_Fast_GET_ITEM(seqdata, idxdata);
    assert(PyLong_Check(itemdata));
    tmpdata = (uint8_t)PyLong_AsUnsignedLong(itemdata);

    memcpy(&destdata[idxdata], &tmpdata, sizeof(uint8_t));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_image__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__Image * ros_message = (sensor_msgs__msg__Image *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__Image__destroy(ros_message);
}

PyObject * sensor_msgs_image__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__Image * ros_message = (sensor_msgs__msg__Image *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._image");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Image");

  /* NOTE(esteve): Call constructor of Image */
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
  PyObject * pyheight = NULL;
  pyheight = PyLong_FromUnsignedLong(ros_message->height);
  assert(pyheight != NULL);
  Py_INCREF(pyheight);
  PyObject_SetAttrString(_pymessage, "height", pyheight);
  PyObject * pywidth = NULL;
  pywidth = PyLong_FromUnsignedLong(ros_message->width);
  assert(pywidth != NULL);
  Py_INCREF(pywidth);
  PyObject_SetAttrString(_pymessage, "width", pywidth);
  PyObject * pyencoding = NULL;
  pyencoding = PyUnicode_FromString(ros_message->encoding.data);
  assert(pyencoding != NULL);
  Py_INCREF(pyencoding);
  PyObject_SetAttrString(_pymessage, "encoding", pyencoding);
  PyObject * pyis_bigendian = NULL;
  pyis_bigendian = PyLong_FromUnsignedLong(ros_message->is_bigendian);
  assert(pyis_bigendian != NULL);
  Py_INCREF(pyis_bigendian);
  PyObject_SetAttrString(_pymessage, "is_bigendian", pyis_bigendian);
  PyObject * pystep = NULL;
  pystep = PyLong_FromUnsignedLong(ros_message->step);
  assert(pystep != NULL);
  Py_INCREF(pystep);
  PyObject_SetAttrString(_pymessage, "step", pystep);
  PyObject * pydata = NULL;
  size_t sizedata = ros_message->data.size;
  uint8_t * tmpmessagedatadata = ros_message->data.data;
  pydata = PyList_New(sizedata);
  size_t idxdata;
  for (idxdata = 0; idxdata < sizedata; idxdata++) {
    PyList_SetItem(pydata, idxdata, PyLong_FromUnsignedLong(tmpmessagedatadata[idxdata]));
  }
  assert(PySequence_Check(pydata));
  assert(pydata != NULL);
  Py_INCREF(pydata);
  PyObject_SetAttrString(_pymessage, "data", pydata);
  assert(_pymessage != NULL);
  return _pymessage;
}
