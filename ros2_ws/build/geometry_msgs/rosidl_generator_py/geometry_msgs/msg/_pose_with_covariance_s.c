// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <geometry_msgs/msg/pose_with_covariance__struct.h>
#include <geometry_msgs/msg/pose_with_covariance__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>


void * geometry_msgs_pose_with_covariance__convert_from_py(PyObject * _pymsg)
{
  geometry_msgs__msg__PoseWithCovariance * ros_message = geometry_msgs__msg__PoseWithCovariance__create();
  (void)ros_message;
  char full_classname_dest[59];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "geometry_msgs.msg._pose_with_covariance.PoseWithCovariance",
      full_classname_dest, 58) == 0);

  PyObject * pypose = PyObject_GetAttrString(_pymsg, "pose");
  PyObject * pypose_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose");
  PyObject * pypose_msg_class = PyObject_GetAttrString(pypose_msg_module, "Pose");
  PyObject * pypose_msg_metaclass = PyObject_GetAttrString(pypose_msg_class, "__class__");
  PyObject * pypose_convert_from_py = PyObject_GetAttrString(pypose_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_pose = (convert_from_py_signature)PyCapsule_GetPointer(pypose_convert_from_py, NULL);
  geometry_msgs__msg__Pose * tmppose = (geometry_msgs__msg__Pose *) convert_from_py_pose(pypose);
  if (!tmppose) {
    return NULL;
  }
  ros_message->pose = *tmppose;
  PyObject * pycovariance = PyObject_GetAttrString(_pymsg, "covariance");
  assert(PySequence_Check(pycovariance));
  PyObject * seqcovariance = PySequence_Fast(pycovariance, "expected a sequence");
  PyObject * itemcovariance;
  size_t sizecovariance = 36;
  double * destcovariance = ros_message->covariance;
  double tmpcovariance;
  size_t idxcovariance;
  for (idxcovariance = 0; idxcovariance < sizecovariance; idxcovariance++) {
    itemcovariance = PySequence_Fast_GET_ITEM(seqcovariance, idxcovariance);
    assert(PyFloat_Check(itemcovariance));
    tmpcovariance = PyFloat_AS_DOUBLE(itemcovariance);
    memcpy(&destcovariance[idxcovariance], &tmpcovariance, sizeof(double));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void geometry_msgs_pose_with_covariance__destroy_ros_message(void * raw_ros_message)
{
  geometry_msgs__msg__PoseWithCovariance * ros_message = (geometry_msgs__msg__PoseWithCovariance *)raw_ros_message;
  (void)ros_message;

  geometry_msgs__msg__PoseWithCovariance__destroy(ros_message);
}

PyObject * geometry_msgs_pose_with_covariance__convert_to_py(void * raw_ros_message)
{
  geometry_msgs__msg__PoseWithCovariance * ros_message = (geometry_msgs__msg__PoseWithCovariance *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("geometry_msgs.msg._pose_with_covariance");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PoseWithCovariance");

  /* NOTE(esteve): Call constructor of PoseWithCovariance */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pypose = NULL;
  PyObject * pypose_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose");
  PyObject * pypose_msg_class = PyObject_GetAttrString(pypose_msg_module, "Pose");
  PyObject * pypose_msg_metaclass = PyObject_GetAttrString(pypose_msg_class, "__class__");
  PyObject * pypose_convert_to_py = PyObject_GetAttrString(pypose_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_pose = (convert_to_py_signature)PyCapsule_GetPointer(pypose_convert_to_py, NULL);
  geometry_msgs__msg__Pose pytmppose = ros_message->pose;
  pypose = convert_to_py_pose(&pytmppose);
  if (!pypose) {
    return NULL;
  }
  assert(pypose != NULL);
  Py_INCREF(pypose);
  PyObject_SetAttrString(_pymessage, "pose", pypose);
  PyObject * pycovariance = NULL;
  size_t sizecovariance = 36;
  double * tmpmessagedatacovariance = ros_message->covariance;
  pycovariance = PyList_New(sizecovariance);
  size_t idxcovariance;
  for (idxcovariance = 0; idxcovariance < sizecovariance; idxcovariance++) {
    PyList_SetItem(pycovariance, idxcovariance, PyFloat_FromDouble(tmpmessagedatacovariance[idxcovariance]));
  }
  assert(PySequence_Check(pycovariance));
  assert(pycovariance != NULL);
  Py_INCREF(pycovariance);
  PyObject_SetAttrString(_pymessage, "covariance", pycovariance);
  assert(_pymessage != NULL);
  return _pymessage;
}
