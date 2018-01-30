// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/point_cloud2__struct.h>
#include <sensor_msgs/msg/point_cloud2__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <sensor_msgs/msg/point_field__functions.h>
// end nested array functions include

void * sensor_msgs_point_cloud2__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__PointCloud2 * ros_message = sensor_msgs__msg__PointCloud2__create();
  (void)ros_message;
  char full_classname_dest[42];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._point_cloud2.PointCloud2",
      full_classname_dest, 41) == 0);

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
  PyObject * pyfields = PyObject_GetAttrString(_pymsg, "fields");
  PyObject * pyfields_msg_module = PyImport_ImportModule("sensor_msgs.msg._point_field");
  PyObject * pyfields_msg_class = PyObject_GetAttrString(pyfields_msg_module, "PointField");
  PyObject * pyfields_msg_metaclass = PyObject_GetAttrString(pyfields_msg_class, "__class__");
  PyObject * pyfields_convert_from_py = PyObject_GetAttrString(pyfields_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_fields = (convert_from_py_signature)PyCapsule_GetPointer(pyfields_convert_from_py, NULL);
  assert(PySequence_Check(pyfields));
  PyObject * seqfields = PySequence_Fast(pyfields, "expected a sequence");
  sensor_msgs__msg__PointField * itemfields;
  size_t sizefields = PySequence_Size(pyfields);
  if (!sensor_msgs__msg__PointField__Array__init(&(ros_message->fields), sizefields)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create sensor_msgs__msg__PointField__Array ros_message");
    return NULL;
  }
  sensor_msgs__msg__PointField * destfields = ros_message->fields.data;
  size_t idxfields;
  for (idxfields = 0; idxfields < sizefields; idxfields++) {
    itemfields = (sensor_msgs__msg__PointField *) convert_from_py_fields(
      PySequence_Fast_GET_ITEM(seqfields, idxfields));
    if (!itemfields) {
      return NULL;
    }
    memcpy(&destfields[idxfields], itemfields, sizeof(sensor_msgs__msg__PointField));
  }
  PyObject * pyis_bigendian = PyObject_GetAttrString(_pymsg, "is_bigendian");
  assert(PyBool_Check(pyis_bigendian));
  ros_message->is_bigendian = (Py_True == pyis_bigendian);
  PyObject * pypoint_step = PyObject_GetAttrString(_pymsg, "point_step");
  assert(PyLong_Check(pypoint_step));
  ros_message->point_step = PyLong_AsUnsignedLong(pypoint_step);
  PyObject * pyrow_step = PyObject_GetAttrString(_pymsg, "row_step");
  assert(PyLong_Check(pyrow_step));
  ros_message->row_step = PyLong_AsUnsignedLong(pyrow_step);
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
  PyObject * pyis_dense = PyObject_GetAttrString(_pymsg, "is_dense");
  assert(PyBool_Check(pyis_dense));
  ros_message->is_dense = (Py_True == pyis_dense);

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_point_cloud2__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__PointCloud2 * ros_message = (sensor_msgs__msg__PointCloud2 *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__PointCloud2__destroy(ros_message);
}

PyObject * sensor_msgs_point_cloud2__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__PointCloud2 * ros_message = (sensor_msgs__msg__PointCloud2 *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._point_cloud2");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PointCloud2");

  /* NOTE(esteve): Call constructor of PointCloud2 */
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
  PyObject * pyfields = NULL;
  PyObject * pyfields_msg_module = PyImport_ImportModule("sensor_msgs.msg._point_field");
  PyObject * pyfields_msg_class = PyObject_GetAttrString(pyfields_msg_module, "PointField");
  PyObject * pyfields_msg_metaclass = PyObject_GetAttrString(pyfields_msg_class, "__class__");
  PyObject * pyfields_convert_to_py = PyObject_GetAttrString(pyfields_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_fields = (convert_to_py_signature)PyCapsule_GetPointer(pyfields_convert_to_py, NULL);
  size_t sizefields = ros_message->fields.size;
  pyfields = PyList_New(sizefields);
  sensor_msgs__msg__PointField itemfields;
  size_t idxfields;
  for (idxfields = 0; idxfields < sizefields; idxfields++) {
    itemfields = ros_message->fields.data[idxfields];
    PyObject * pyitemfields = convert_to_py_fields(&itemfields);
    if (!pyitemfields) {
      return NULL;
    }
    PyList_SetItem(pyfields, idxfields, pyitemfields);
  }
  assert(PySequence_Check(pyfields));
  assert(pyfields != NULL);
  Py_INCREF(pyfields);
  PyObject_SetAttrString(_pymessage, "fields", pyfields);
  PyObject * pyis_bigendian = NULL;
  pyis_bigendian = ros_message->is_bigendian ? Py_True : Py_False;
  assert(pyis_bigendian != NULL);
  Py_INCREF(pyis_bigendian);
  PyObject_SetAttrString(_pymessage, "is_bigendian", pyis_bigendian);
  PyObject * pypoint_step = NULL;
  pypoint_step = PyLong_FromUnsignedLong(ros_message->point_step);
  assert(pypoint_step != NULL);
  Py_INCREF(pypoint_step);
  PyObject_SetAttrString(_pymessage, "point_step", pypoint_step);
  PyObject * pyrow_step = NULL;
  pyrow_step = PyLong_FromUnsignedLong(ros_message->row_step);
  assert(pyrow_step != NULL);
  Py_INCREF(pyrow_step);
  PyObject_SetAttrString(_pymessage, "row_step", pyrow_step);
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
  PyObject * pyis_dense = NULL;
  pyis_dense = ros_message->is_dense ? Py_True : Py_False;
  assert(pyis_dense != NULL);
  Py_INCREF(pyis_dense);
  PyObject_SetAttrString(_pymessage, "is_dense", pyis_dense);
  assert(_pymessage != NULL);
  return _pymessage;
}
