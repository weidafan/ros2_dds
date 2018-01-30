// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/multi_dof_joint_state__struct.h>
#include <sensor_msgs/msg/multi_dof_joint_state__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>

// Nested array functions includes
#include <geometry_msgs/msg/transform__functions.h>
#include <geometry_msgs/msg/wrench__functions.h>
#include <geometry_msgs/msg/twist__functions.h>
// end nested array functions include

void * sensor_msgs_multi_dof_joint_state__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__MultiDOFJointState * ros_message = sensor_msgs__msg__MultiDOFJointState__create();
  (void)ros_message;
  char full_classname_dest[58];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._multi_dof_joint_state.MultiDOFJointState",
      full_classname_dest, 57) == 0);

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
  PyObject * pyjoint_names = PyObject_GetAttrString(_pymsg, "joint_names");
  assert(PySequence_Check(pyjoint_names));
  PyObject * seqjoint_names = PySequence_Fast(pyjoint_names, "expected a sequence");
  PyObject * itemjoint_names;
  size_t sizejoint_names = PySequence_Size(pyjoint_names);
  if (!rosidl_generator_c__String__Array__init(&(ros_message->joint_names), sizejoint_names)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create String__Array ros_message");
    return NULL;
  }
  rosidl_generator_c__String * destjoint_names = ros_message->joint_names.data;
  size_t idxjoint_names;
  for (idxjoint_names = 0; idxjoint_names < sizejoint_names; idxjoint_names++) {
    itemjoint_names = PySequence_Fast_GET_ITEM(seqjoint_names, idxjoint_names);
    assert(PyUnicode_Check(itemjoint_names));
    rosidl_generator_c__String__assign(
      &destjoint_names[idxjoint_names], (char *)PyUnicode_1BYTE_DATA(itemjoint_names));
  }
  PyObject * pytransforms = PyObject_GetAttrString(_pymsg, "transforms");
  PyObject * pytransforms_msg_module = PyImport_ImportModule("geometry_msgs.msg._transform");
  PyObject * pytransforms_msg_class = PyObject_GetAttrString(pytransforms_msg_module, "Transform");
  PyObject * pytransforms_msg_metaclass = PyObject_GetAttrString(pytransforms_msg_class, "__class__");
  PyObject * pytransforms_convert_from_py = PyObject_GetAttrString(pytransforms_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_transforms = (convert_from_py_signature)PyCapsule_GetPointer(pytransforms_convert_from_py, NULL);
  assert(PySequence_Check(pytransforms));
  PyObject * seqtransforms = PySequence_Fast(pytransforms, "expected a sequence");
  geometry_msgs__msg__Transform * itemtransforms;
  size_t sizetransforms = PySequence_Size(pytransforms);
  if (!geometry_msgs__msg__Transform__Array__init(&(ros_message->transforms), sizetransforms)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Transform__Array ros_message");
    return NULL;
  }
  geometry_msgs__msg__Transform * desttransforms = ros_message->transforms.data;
  size_t idxtransforms;
  for (idxtransforms = 0; idxtransforms < sizetransforms; idxtransforms++) {
    itemtransforms = (geometry_msgs__msg__Transform *) convert_from_py_transforms(
      PySequence_Fast_GET_ITEM(seqtransforms, idxtransforms));
    if (!itemtransforms) {
      return NULL;
    }
    memcpy(&desttransforms[idxtransforms], itemtransforms, sizeof(geometry_msgs__msg__Transform));
  }
  PyObject * pytwist = PyObject_GetAttrString(_pymsg, "twist");
  PyObject * pytwist_msg_module = PyImport_ImportModule("geometry_msgs.msg._twist");
  PyObject * pytwist_msg_class = PyObject_GetAttrString(pytwist_msg_module, "Twist");
  PyObject * pytwist_msg_metaclass = PyObject_GetAttrString(pytwist_msg_class, "__class__");
  PyObject * pytwist_convert_from_py = PyObject_GetAttrString(pytwist_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_twist = (convert_from_py_signature)PyCapsule_GetPointer(pytwist_convert_from_py, NULL);
  assert(PySequence_Check(pytwist));
  PyObject * seqtwist = PySequence_Fast(pytwist, "expected a sequence");
  geometry_msgs__msg__Twist * itemtwist;
  size_t sizetwist = PySequence_Size(pytwist);
  if (!geometry_msgs__msg__Twist__Array__init(&(ros_message->twist), sizetwist)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Twist__Array ros_message");
    return NULL;
  }
  geometry_msgs__msg__Twist * desttwist = ros_message->twist.data;
  size_t idxtwist;
  for (idxtwist = 0; idxtwist < sizetwist; idxtwist++) {
    itemtwist = (geometry_msgs__msg__Twist *) convert_from_py_twist(
      PySequence_Fast_GET_ITEM(seqtwist, idxtwist));
    if (!itemtwist) {
      return NULL;
    }
    memcpy(&desttwist[idxtwist], itemtwist, sizeof(geometry_msgs__msg__Twist));
  }
  PyObject * pywrench = PyObject_GetAttrString(_pymsg, "wrench");
  PyObject * pywrench_msg_module = PyImport_ImportModule("geometry_msgs.msg._wrench");
  PyObject * pywrench_msg_class = PyObject_GetAttrString(pywrench_msg_module, "Wrench");
  PyObject * pywrench_msg_metaclass = PyObject_GetAttrString(pywrench_msg_class, "__class__");
  PyObject * pywrench_convert_from_py = PyObject_GetAttrString(pywrench_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_wrench = (convert_from_py_signature)PyCapsule_GetPointer(pywrench_convert_from_py, NULL);
  assert(PySequence_Check(pywrench));
  PyObject * seqwrench = PySequence_Fast(pywrench, "expected a sequence");
  geometry_msgs__msg__Wrench * itemwrench;
  size_t sizewrench = PySequence_Size(pywrench);
  if (!geometry_msgs__msg__Wrench__Array__init(&(ros_message->wrench), sizewrench)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Wrench__Array ros_message");
    return NULL;
  }
  geometry_msgs__msg__Wrench * destwrench = ros_message->wrench.data;
  size_t idxwrench;
  for (idxwrench = 0; idxwrench < sizewrench; idxwrench++) {
    itemwrench = (geometry_msgs__msg__Wrench *) convert_from_py_wrench(
      PySequence_Fast_GET_ITEM(seqwrench, idxwrench));
    if (!itemwrench) {
      return NULL;
    }
    memcpy(&destwrench[idxwrench], itemwrench, sizeof(geometry_msgs__msg__Wrench));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_multi_dof_joint_state__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__MultiDOFJointState * ros_message = (sensor_msgs__msg__MultiDOFJointState *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__MultiDOFJointState__destroy(ros_message);
}

PyObject * sensor_msgs_multi_dof_joint_state__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__MultiDOFJointState * ros_message = (sensor_msgs__msg__MultiDOFJointState *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._multi_dof_joint_state");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MultiDOFJointState");

  /* NOTE(esteve): Call constructor of MultiDOFJointState */
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
  PyObject * pyjoint_names = NULL;
  size_t sizejoint_names = ros_message->joint_names.size;
  rosidl_generator_c__String * tmpmessagedatajoint_names = ros_message->joint_names.data;
  pyjoint_names = PyList_New(sizejoint_names);
  size_t idxjoint_names;
  for (idxjoint_names = 0; idxjoint_names < sizejoint_names; idxjoint_names++) {
    PyList_SetItem(pyjoint_names, idxjoint_names, PyUnicode_FromString(tmpmessagedatajoint_names[idxjoint_names].data));
  }
  assert(PySequence_Check(pyjoint_names));
  assert(pyjoint_names != NULL);
  Py_INCREF(pyjoint_names);
  PyObject_SetAttrString(_pymessage, "joint_names", pyjoint_names);
  PyObject * pytransforms = NULL;
  PyObject * pytransforms_msg_module = PyImport_ImportModule("geometry_msgs.msg._transform");
  PyObject * pytransforms_msg_class = PyObject_GetAttrString(pytransforms_msg_module, "Transform");
  PyObject * pytransforms_msg_metaclass = PyObject_GetAttrString(pytransforms_msg_class, "__class__");
  PyObject * pytransforms_convert_to_py = PyObject_GetAttrString(pytransforms_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_transforms = (convert_to_py_signature)PyCapsule_GetPointer(pytransforms_convert_to_py, NULL);
  size_t sizetransforms = ros_message->transforms.size;
  pytransforms = PyList_New(sizetransforms);
  geometry_msgs__msg__Transform itemtransforms;
  size_t idxtransforms;
  for (idxtransforms = 0; idxtransforms < sizetransforms; idxtransforms++) {
    itemtransforms = ros_message->transforms.data[idxtransforms];
    PyObject * pyitemtransforms = convert_to_py_transforms(&itemtransforms);
    if (!pyitemtransforms) {
      return NULL;
    }
    PyList_SetItem(pytransforms, idxtransforms, pyitemtransforms);
  }
  assert(PySequence_Check(pytransforms));
  assert(pytransforms != NULL);
  Py_INCREF(pytransforms);
  PyObject_SetAttrString(_pymessage, "transforms", pytransforms);
  PyObject * pytwist = NULL;
  PyObject * pytwist_msg_module = PyImport_ImportModule("geometry_msgs.msg._twist");
  PyObject * pytwist_msg_class = PyObject_GetAttrString(pytwist_msg_module, "Twist");
  PyObject * pytwist_msg_metaclass = PyObject_GetAttrString(pytwist_msg_class, "__class__");
  PyObject * pytwist_convert_to_py = PyObject_GetAttrString(pytwist_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_twist = (convert_to_py_signature)PyCapsule_GetPointer(pytwist_convert_to_py, NULL);
  size_t sizetwist = ros_message->twist.size;
  pytwist = PyList_New(sizetwist);
  geometry_msgs__msg__Twist itemtwist;
  size_t idxtwist;
  for (idxtwist = 0; idxtwist < sizetwist; idxtwist++) {
    itemtwist = ros_message->twist.data[idxtwist];
    PyObject * pyitemtwist = convert_to_py_twist(&itemtwist);
    if (!pyitemtwist) {
      return NULL;
    }
    PyList_SetItem(pytwist, idxtwist, pyitemtwist);
  }
  assert(PySequence_Check(pytwist));
  assert(pytwist != NULL);
  Py_INCREF(pytwist);
  PyObject_SetAttrString(_pymessage, "twist", pytwist);
  PyObject * pywrench = NULL;
  PyObject * pywrench_msg_module = PyImport_ImportModule("geometry_msgs.msg._wrench");
  PyObject * pywrench_msg_class = PyObject_GetAttrString(pywrench_msg_module, "Wrench");
  PyObject * pywrench_msg_metaclass = PyObject_GetAttrString(pywrench_msg_class, "__class__");
  PyObject * pywrench_convert_to_py = PyObject_GetAttrString(pywrench_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_wrench = (convert_to_py_signature)PyCapsule_GetPointer(pywrench_convert_to_py, NULL);
  size_t sizewrench = ros_message->wrench.size;
  pywrench = PyList_New(sizewrench);
  geometry_msgs__msg__Wrench itemwrench;
  size_t idxwrench;
  for (idxwrench = 0; idxwrench < sizewrench; idxwrench++) {
    itemwrench = ros_message->wrench.data[idxwrench];
    PyObject * pyitemwrench = convert_to_py_wrench(&itemwrench);
    if (!pyitemwrench) {
      return NULL;
    }
    PyList_SetItem(pywrench, idxwrench, pyitemwrench);
  }
  assert(PySequence_Check(pywrench));
  assert(pywrench != NULL);
  Py_INCREF(pywrench);
  PyObject_SetAttrString(_pymessage, "wrench", pywrench);
  assert(_pymessage != NULL);
  return _pymessage;
}
