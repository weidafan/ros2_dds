// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/nav_sat_fix__struct.h>
#include <sensor_msgs/msg/nav_sat_fix__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>


void * sensor_msgs_nav_sat_fix__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__NavSatFix * ros_message = sensor_msgs__msg__NavSatFix__create();
  (void)ros_message;
  char full_classname_dest[39];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._nav_sat_fix.NavSatFix",
      full_classname_dest, 38) == 0);

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
  PyObject * pystatus = PyObject_GetAttrString(_pymsg, "status");
  PyObject * pystatus_msg_module = PyImport_ImportModule("sensor_msgs.msg._nav_sat_status");
  PyObject * pystatus_msg_class = PyObject_GetAttrString(pystatus_msg_module, "NavSatStatus");
  PyObject * pystatus_msg_metaclass = PyObject_GetAttrString(pystatus_msg_class, "__class__");
  PyObject * pystatus_convert_from_py = PyObject_GetAttrString(pystatus_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_status = (convert_from_py_signature)PyCapsule_GetPointer(pystatus_convert_from_py, NULL);
  sensor_msgs__msg__NavSatStatus * tmpstatus = (sensor_msgs__msg__NavSatStatus *) convert_from_py_status(pystatus);
  if (!tmpstatus) {
    return NULL;
  }
  ros_message->status = *tmpstatus;
  PyObject * pylatitude = PyObject_GetAttrString(_pymsg, "latitude");
  assert(PyFloat_Check(pylatitude));
  ros_message->latitude = PyFloat_AS_DOUBLE(pylatitude);
  PyObject * pylongitude = PyObject_GetAttrString(_pymsg, "longitude");
  assert(PyFloat_Check(pylongitude));
  ros_message->longitude = PyFloat_AS_DOUBLE(pylongitude);
  PyObject * pyaltitude = PyObject_GetAttrString(_pymsg, "altitude");
  assert(PyFloat_Check(pyaltitude));
  ros_message->altitude = PyFloat_AS_DOUBLE(pyaltitude);
  PyObject * pyposition_covariance = PyObject_GetAttrString(_pymsg, "position_covariance");
  assert(PySequence_Check(pyposition_covariance));
  PyObject * seqposition_covariance = PySequence_Fast(pyposition_covariance, "expected a sequence");
  PyObject * itemposition_covariance;
  size_t sizeposition_covariance = 9;
  double * destposition_covariance = ros_message->position_covariance;
  double tmpposition_covariance;
  size_t idxposition_covariance;
  for (idxposition_covariance = 0; idxposition_covariance < sizeposition_covariance; idxposition_covariance++) {
    itemposition_covariance = PySequence_Fast_GET_ITEM(seqposition_covariance, idxposition_covariance);
    assert(PyFloat_Check(itemposition_covariance));
    tmpposition_covariance = PyFloat_AS_DOUBLE(itemposition_covariance);
    memcpy(&destposition_covariance[idxposition_covariance], &tmpposition_covariance, sizeof(double));
  }
  PyObject * pyposition_covariance_type = PyObject_GetAttrString(_pymsg, "position_covariance_type");
  assert(PyLong_Check(pyposition_covariance_type));
  ros_message->position_covariance_type = (uint8_t)PyLong_AsUnsignedLong(pyposition_covariance_type);

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_nav_sat_fix__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__NavSatFix * ros_message = (sensor_msgs__msg__NavSatFix *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__NavSatFix__destroy(ros_message);
}

PyObject * sensor_msgs_nav_sat_fix__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__NavSatFix * ros_message = (sensor_msgs__msg__NavSatFix *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._nav_sat_fix");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NavSatFix");

  /* NOTE(esteve): Call constructor of NavSatFix */
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
  PyObject * pystatus = NULL;
  PyObject * pystatus_msg_module = PyImport_ImportModule("sensor_msgs.msg._nav_sat_status");
  PyObject * pystatus_msg_class = PyObject_GetAttrString(pystatus_msg_module, "NavSatStatus");
  PyObject * pystatus_msg_metaclass = PyObject_GetAttrString(pystatus_msg_class, "__class__");
  PyObject * pystatus_convert_to_py = PyObject_GetAttrString(pystatus_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_status = (convert_to_py_signature)PyCapsule_GetPointer(pystatus_convert_to_py, NULL);
  sensor_msgs__msg__NavSatStatus pytmpstatus = ros_message->status;
  pystatus = convert_to_py_status(&pytmpstatus);
  if (!pystatus) {
    return NULL;
  }
  assert(pystatus != NULL);
  Py_INCREF(pystatus);
  PyObject_SetAttrString(_pymessage, "status", pystatus);
  PyObject * pylatitude = NULL;
  pylatitude = PyFloat_FromDouble(ros_message->latitude);
  assert(pylatitude != NULL);
  Py_INCREF(pylatitude);
  PyObject_SetAttrString(_pymessage, "latitude", pylatitude);
  PyObject * pylongitude = NULL;
  pylongitude = PyFloat_FromDouble(ros_message->longitude);
  assert(pylongitude != NULL);
  Py_INCREF(pylongitude);
  PyObject_SetAttrString(_pymessage, "longitude", pylongitude);
  PyObject * pyaltitude = NULL;
  pyaltitude = PyFloat_FromDouble(ros_message->altitude);
  assert(pyaltitude != NULL);
  Py_INCREF(pyaltitude);
  PyObject_SetAttrString(_pymessage, "altitude", pyaltitude);
  PyObject * pyposition_covariance = NULL;
  size_t sizeposition_covariance = 9;
  double * tmpmessagedataposition_covariance = ros_message->position_covariance;
  pyposition_covariance = PyList_New(sizeposition_covariance);
  size_t idxposition_covariance;
  for (idxposition_covariance = 0; idxposition_covariance < sizeposition_covariance; idxposition_covariance++) {
    PyList_SetItem(pyposition_covariance, idxposition_covariance, PyFloat_FromDouble(tmpmessagedataposition_covariance[idxposition_covariance]));
  }
  assert(PySequence_Check(pyposition_covariance));
  assert(pyposition_covariance != NULL);
  Py_INCREF(pyposition_covariance);
  PyObject_SetAttrString(_pymessage, "position_covariance", pyposition_covariance);
  PyObject * pyposition_covariance_type = NULL;
  pyposition_covariance_type = PyLong_FromUnsignedLong(ros_message->position_covariance_type);
  assert(pyposition_covariance_type != NULL);
  Py_INCREF(pyposition_covariance_type);
  PyObject_SetAttrString(_pymessage, "position_covariance_type", pyposition_covariance_type);
  assert(_pymessage != NULL);
  return _pymessage;
}
