// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/imu__struct.h>
#include <sensor_msgs/msg/imu__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>


void * sensor_msgs_imu__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__Imu * ros_message = sensor_msgs__msg__Imu__create();
  (void)ros_message;
  char full_classname_dest[25];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._imu.Imu",
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
  PyObject * pyorientation = PyObject_GetAttrString(_pymsg, "orientation");
  PyObject * pyorientation_msg_module = PyImport_ImportModule("geometry_msgs.msg._quaternion");
  PyObject * pyorientation_msg_class = PyObject_GetAttrString(pyorientation_msg_module, "Quaternion");
  PyObject * pyorientation_msg_metaclass = PyObject_GetAttrString(pyorientation_msg_class, "__class__");
  PyObject * pyorientation_convert_from_py = PyObject_GetAttrString(pyorientation_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_orientation = (convert_from_py_signature)PyCapsule_GetPointer(pyorientation_convert_from_py, NULL);
  geometry_msgs__msg__Quaternion * tmporientation = (geometry_msgs__msg__Quaternion *) convert_from_py_orientation(pyorientation);
  if (!tmporientation) {
    return NULL;
  }
  ros_message->orientation = *tmporientation;
  PyObject * pyorientation_covariance = PyObject_GetAttrString(_pymsg, "orientation_covariance");
  assert(PySequence_Check(pyorientation_covariance));
  PyObject * seqorientation_covariance = PySequence_Fast(pyorientation_covariance, "expected a sequence");
  PyObject * itemorientation_covariance;
  size_t sizeorientation_covariance = 9;
  double * destorientation_covariance = ros_message->orientation_covariance;
  double tmporientation_covariance;
  size_t idxorientation_covariance;
  for (idxorientation_covariance = 0; idxorientation_covariance < sizeorientation_covariance; idxorientation_covariance++) {
    itemorientation_covariance = PySequence_Fast_GET_ITEM(seqorientation_covariance, idxorientation_covariance);
    assert(PyFloat_Check(itemorientation_covariance));
    tmporientation_covariance = PyFloat_AS_DOUBLE(itemorientation_covariance);
    memcpy(&destorientation_covariance[idxorientation_covariance], &tmporientation_covariance, sizeof(double));
  }
  PyObject * pyangular_velocity = PyObject_GetAttrString(_pymsg, "angular_velocity");
  PyObject * pyangular_velocity_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pyangular_velocity_msg_class = PyObject_GetAttrString(pyangular_velocity_msg_module, "Vector3");
  PyObject * pyangular_velocity_msg_metaclass = PyObject_GetAttrString(pyangular_velocity_msg_class, "__class__");
  PyObject * pyangular_velocity_convert_from_py = PyObject_GetAttrString(pyangular_velocity_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_angular_velocity = (convert_from_py_signature)PyCapsule_GetPointer(pyangular_velocity_convert_from_py, NULL);
  geometry_msgs__msg__Vector3 * tmpangular_velocity = (geometry_msgs__msg__Vector3 *) convert_from_py_angular_velocity(pyangular_velocity);
  if (!tmpangular_velocity) {
    return NULL;
  }
  ros_message->angular_velocity = *tmpangular_velocity;
  PyObject * pyangular_velocity_covariance = PyObject_GetAttrString(_pymsg, "angular_velocity_covariance");
  assert(PySequence_Check(pyangular_velocity_covariance));
  PyObject * seqangular_velocity_covariance = PySequence_Fast(pyangular_velocity_covariance, "expected a sequence");
  PyObject * itemangular_velocity_covariance;
  size_t sizeangular_velocity_covariance = 9;
  double * destangular_velocity_covariance = ros_message->angular_velocity_covariance;
  double tmpangular_velocity_covariance;
  size_t idxangular_velocity_covariance;
  for (idxangular_velocity_covariance = 0; idxangular_velocity_covariance < sizeangular_velocity_covariance; idxangular_velocity_covariance++) {
    itemangular_velocity_covariance = PySequence_Fast_GET_ITEM(seqangular_velocity_covariance, idxangular_velocity_covariance);
    assert(PyFloat_Check(itemangular_velocity_covariance));
    tmpangular_velocity_covariance = PyFloat_AS_DOUBLE(itemangular_velocity_covariance);
    memcpy(&destangular_velocity_covariance[idxangular_velocity_covariance], &tmpangular_velocity_covariance, sizeof(double));
  }
  PyObject * pylinear_acceleration = PyObject_GetAttrString(_pymsg, "linear_acceleration");
  PyObject * pylinear_acceleration_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pylinear_acceleration_msg_class = PyObject_GetAttrString(pylinear_acceleration_msg_module, "Vector3");
  PyObject * pylinear_acceleration_msg_metaclass = PyObject_GetAttrString(pylinear_acceleration_msg_class, "__class__");
  PyObject * pylinear_acceleration_convert_from_py = PyObject_GetAttrString(pylinear_acceleration_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_linear_acceleration = (convert_from_py_signature)PyCapsule_GetPointer(pylinear_acceleration_convert_from_py, NULL);
  geometry_msgs__msg__Vector3 * tmplinear_acceleration = (geometry_msgs__msg__Vector3 *) convert_from_py_linear_acceleration(pylinear_acceleration);
  if (!tmplinear_acceleration) {
    return NULL;
  }
  ros_message->linear_acceleration = *tmplinear_acceleration;
  PyObject * pylinear_acceleration_covariance = PyObject_GetAttrString(_pymsg, "linear_acceleration_covariance");
  assert(PySequence_Check(pylinear_acceleration_covariance));
  PyObject * seqlinear_acceleration_covariance = PySequence_Fast(pylinear_acceleration_covariance, "expected a sequence");
  PyObject * itemlinear_acceleration_covariance;
  size_t sizelinear_acceleration_covariance = 9;
  double * destlinear_acceleration_covariance = ros_message->linear_acceleration_covariance;
  double tmplinear_acceleration_covariance;
  size_t idxlinear_acceleration_covariance;
  for (idxlinear_acceleration_covariance = 0; idxlinear_acceleration_covariance < sizelinear_acceleration_covariance; idxlinear_acceleration_covariance++) {
    itemlinear_acceleration_covariance = PySequence_Fast_GET_ITEM(seqlinear_acceleration_covariance, idxlinear_acceleration_covariance);
    assert(PyFloat_Check(itemlinear_acceleration_covariance));
    tmplinear_acceleration_covariance = PyFloat_AS_DOUBLE(itemlinear_acceleration_covariance);
    memcpy(&destlinear_acceleration_covariance[idxlinear_acceleration_covariance], &tmplinear_acceleration_covariance, sizeof(double));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_imu__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__Imu * ros_message = (sensor_msgs__msg__Imu *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__Imu__destroy(ros_message);
}

PyObject * sensor_msgs_imu__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__Imu * ros_message = (sensor_msgs__msg__Imu *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._imu");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Imu");

  /* NOTE(esteve): Call constructor of Imu */
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
  PyObject * pyorientation = NULL;
  PyObject * pyorientation_msg_module = PyImport_ImportModule("geometry_msgs.msg._quaternion");
  PyObject * pyorientation_msg_class = PyObject_GetAttrString(pyorientation_msg_module, "Quaternion");
  PyObject * pyorientation_msg_metaclass = PyObject_GetAttrString(pyorientation_msg_class, "__class__");
  PyObject * pyorientation_convert_to_py = PyObject_GetAttrString(pyorientation_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_orientation = (convert_to_py_signature)PyCapsule_GetPointer(pyorientation_convert_to_py, NULL);
  geometry_msgs__msg__Quaternion pytmporientation = ros_message->orientation;
  pyorientation = convert_to_py_orientation(&pytmporientation);
  if (!pyorientation) {
    return NULL;
  }
  assert(pyorientation != NULL);
  Py_INCREF(pyorientation);
  PyObject_SetAttrString(_pymessage, "orientation", pyorientation);
  PyObject * pyorientation_covariance = NULL;
  size_t sizeorientation_covariance = 9;
  double * tmpmessagedataorientation_covariance = ros_message->orientation_covariance;
  pyorientation_covariance = PyList_New(sizeorientation_covariance);
  size_t idxorientation_covariance;
  for (idxorientation_covariance = 0; idxorientation_covariance < sizeorientation_covariance; idxorientation_covariance++) {
    PyList_SetItem(pyorientation_covariance, idxorientation_covariance, PyFloat_FromDouble(tmpmessagedataorientation_covariance[idxorientation_covariance]));
  }
  assert(PySequence_Check(pyorientation_covariance));
  assert(pyorientation_covariance != NULL);
  Py_INCREF(pyorientation_covariance);
  PyObject_SetAttrString(_pymessage, "orientation_covariance", pyorientation_covariance);
  PyObject * pyangular_velocity = NULL;
  PyObject * pyangular_velocity_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pyangular_velocity_msg_class = PyObject_GetAttrString(pyangular_velocity_msg_module, "Vector3");
  PyObject * pyangular_velocity_msg_metaclass = PyObject_GetAttrString(pyangular_velocity_msg_class, "__class__");
  PyObject * pyangular_velocity_convert_to_py = PyObject_GetAttrString(pyangular_velocity_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_angular_velocity = (convert_to_py_signature)PyCapsule_GetPointer(pyangular_velocity_convert_to_py, NULL);
  geometry_msgs__msg__Vector3 pytmpangular_velocity = ros_message->angular_velocity;
  pyangular_velocity = convert_to_py_angular_velocity(&pytmpangular_velocity);
  if (!pyangular_velocity) {
    return NULL;
  }
  assert(pyangular_velocity != NULL);
  Py_INCREF(pyangular_velocity);
  PyObject_SetAttrString(_pymessage, "angular_velocity", pyangular_velocity);
  PyObject * pyangular_velocity_covariance = NULL;
  size_t sizeangular_velocity_covariance = 9;
  double * tmpmessagedataangular_velocity_covariance = ros_message->angular_velocity_covariance;
  pyangular_velocity_covariance = PyList_New(sizeangular_velocity_covariance);
  size_t idxangular_velocity_covariance;
  for (idxangular_velocity_covariance = 0; idxangular_velocity_covariance < sizeangular_velocity_covariance; idxangular_velocity_covariance++) {
    PyList_SetItem(pyangular_velocity_covariance, idxangular_velocity_covariance, PyFloat_FromDouble(tmpmessagedataangular_velocity_covariance[idxangular_velocity_covariance]));
  }
  assert(PySequence_Check(pyangular_velocity_covariance));
  assert(pyangular_velocity_covariance != NULL);
  Py_INCREF(pyangular_velocity_covariance);
  PyObject_SetAttrString(_pymessage, "angular_velocity_covariance", pyangular_velocity_covariance);
  PyObject * pylinear_acceleration = NULL;
  PyObject * pylinear_acceleration_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pylinear_acceleration_msg_class = PyObject_GetAttrString(pylinear_acceleration_msg_module, "Vector3");
  PyObject * pylinear_acceleration_msg_metaclass = PyObject_GetAttrString(pylinear_acceleration_msg_class, "__class__");
  PyObject * pylinear_acceleration_convert_to_py = PyObject_GetAttrString(pylinear_acceleration_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_linear_acceleration = (convert_to_py_signature)PyCapsule_GetPointer(pylinear_acceleration_convert_to_py, NULL);
  geometry_msgs__msg__Vector3 pytmplinear_acceleration = ros_message->linear_acceleration;
  pylinear_acceleration = convert_to_py_linear_acceleration(&pytmplinear_acceleration);
  if (!pylinear_acceleration) {
    return NULL;
  }
  assert(pylinear_acceleration != NULL);
  Py_INCREF(pylinear_acceleration);
  PyObject_SetAttrString(_pymessage, "linear_acceleration", pylinear_acceleration);
  PyObject * pylinear_acceleration_covariance = NULL;
  size_t sizelinear_acceleration_covariance = 9;
  double * tmpmessagedatalinear_acceleration_covariance = ros_message->linear_acceleration_covariance;
  pylinear_acceleration_covariance = PyList_New(sizelinear_acceleration_covariance);
  size_t idxlinear_acceleration_covariance;
  for (idxlinear_acceleration_covariance = 0; idxlinear_acceleration_covariance < sizelinear_acceleration_covariance; idxlinear_acceleration_covariance++) {
    PyList_SetItem(pylinear_acceleration_covariance, idxlinear_acceleration_covariance, PyFloat_FromDouble(tmpmessagedatalinear_acceleration_covariance[idxlinear_acceleration_covariance]));
  }
  assert(PySequence_Check(pylinear_acceleration_covariance));
  assert(pylinear_acceleration_covariance != NULL);
  Py_INCREF(pylinear_acceleration_covariance);
  PyObject_SetAttrString(_pymessage, "linear_acceleration_covariance", pylinear_acceleration_covariance);
  assert(_pymessage != NULL);
  return _pymessage;
}
