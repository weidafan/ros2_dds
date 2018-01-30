// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/magnetic_field__struct.h>
#include <sensor_msgs/msg/magnetic_field__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>


void * sensor_msgs_magnetic_field__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__MagneticField * ros_message = sensor_msgs__msg__MagneticField__create();
  (void)ros_message;
  char full_classname_dest[46];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._magnetic_field.MagneticField",
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
  PyObject * pymagnetic_field = PyObject_GetAttrString(_pymsg, "magnetic_field");
  PyObject * pymagnetic_field_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pymagnetic_field_msg_class = PyObject_GetAttrString(pymagnetic_field_msg_module, "Vector3");
  PyObject * pymagnetic_field_msg_metaclass = PyObject_GetAttrString(pymagnetic_field_msg_class, "__class__");
  PyObject * pymagnetic_field_convert_from_py = PyObject_GetAttrString(pymagnetic_field_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_magnetic_field = (convert_from_py_signature)PyCapsule_GetPointer(pymagnetic_field_convert_from_py, NULL);
  geometry_msgs__msg__Vector3 * tmpmagnetic_field = (geometry_msgs__msg__Vector3 *) convert_from_py_magnetic_field(pymagnetic_field);
  if (!tmpmagnetic_field) {
    return NULL;
  }
  ros_message->magnetic_field = *tmpmagnetic_field;
  PyObject * pymagnetic_field_covariance = PyObject_GetAttrString(_pymsg, "magnetic_field_covariance");
  assert(PySequence_Check(pymagnetic_field_covariance));
  PyObject * seqmagnetic_field_covariance = PySequence_Fast(pymagnetic_field_covariance, "expected a sequence");
  PyObject * itemmagnetic_field_covariance;
  size_t sizemagnetic_field_covariance = 9;
  double * destmagnetic_field_covariance = ros_message->magnetic_field_covariance;
  double tmpmagnetic_field_covariance;
  size_t idxmagnetic_field_covariance;
  for (idxmagnetic_field_covariance = 0; idxmagnetic_field_covariance < sizemagnetic_field_covariance; idxmagnetic_field_covariance++) {
    itemmagnetic_field_covariance = PySequence_Fast_GET_ITEM(seqmagnetic_field_covariance, idxmagnetic_field_covariance);
    assert(PyFloat_Check(itemmagnetic_field_covariance));
    tmpmagnetic_field_covariance = PyFloat_AS_DOUBLE(itemmagnetic_field_covariance);
    memcpy(&destmagnetic_field_covariance[idxmagnetic_field_covariance], &tmpmagnetic_field_covariance, sizeof(double));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_magnetic_field__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__MagneticField * ros_message = (sensor_msgs__msg__MagneticField *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__MagneticField__destroy(ros_message);
}

PyObject * sensor_msgs_magnetic_field__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__MagneticField * ros_message = (sensor_msgs__msg__MagneticField *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._magnetic_field");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MagneticField");

  /* NOTE(esteve): Call constructor of MagneticField */
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
  PyObject * pymagnetic_field = NULL;
  PyObject * pymagnetic_field_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pymagnetic_field_msg_class = PyObject_GetAttrString(pymagnetic_field_msg_module, "Vector3");
  PyObject * pymagnetic_field_msg_metaclass = PyObject_GetAttrString(pymagnetic_field_msg_class, "__class__");
  PyObject * pymagnetic_field_convert_to_py = PyObject_GetAttrString(pymagnetic_field_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_magnetic_field = (convert_to_py_signature)PyCapsule_GetPointer(pymagnetic_field_convert_to_py, NULL);
  geometry_msgs__msg__Vector3 pytmpmagnetic_field = ros_message->magnetic_field;
  pymagnetic_field = convert_to_py_magnetic_field(&pytmpmagnetic_field);
  if (!pymagnetic_field) {
    return NULL;
  }
  assert(pymagnetic_field != NULL);
  Py_INCREF(pymagnetic_field);
  PyObject_SetAttrString(_pymessage, "magnetic_field", pymagnetic_field);
  PyObject * pymagnetic_field_covariance = NULL;
  size_t sizemagnetic_field_covariance = 9;
  double * tmpmessagedatamagnetic_field_covariance = ros_message->magnetic_field_covariance;
  pymagnetic_field_covariance = PyList_New(sizemagnetic_field_covariance);
  size_t idxmagnetic_field_covariance;
  for (idxmagnetic_field_covariance = 0; idxmagnetic_field_covariance < sizemagnetic_field_covariance; idxmagnetic_field_covariance++) {
    PyList_SetItem(pymagnetic_field_covariance, idxmagnetic_field_covariance, PyFloat_FromDouble(tmpmessagedatamagnetic_field_covariance[idxmagnetic_field_covariance]));
  }
  assert(PySequence_Check(pymagnetic_field_covariance));
  assert(pymagnetic_field_covariance != NULL);
  Py_INCREF(pymagnetic_field_covariance);
  PyObject_SetAttrString(_pymessage, "magnetic_field_covariance", pymagnetic_field_covariance);
  assert(_pymessage != NULL);
  return _pymessage;
}
