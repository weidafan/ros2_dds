// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/joint_state__struct.h>
#include <sensor_msgs/msg/joint_state__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * sensor_msgs_joint_state__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__JointState * ros_message = sensor_msgs__msg__JointState__create();
  (void)ros_message;
  char full_classname_dest[40];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._joint_state.JointState",
      full_classname_dest, 39) == 0);

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
  PyObject * pyname = PyObject_GetAttrString(_pymsg, "name");
  assert(PySequence_Check(pyname));
  PyObject * seqname = PySequence_Fast(pyname, "expected a sequence");
  PyObject * itemname;
  size_t sizename = PySequence_Size(pyname);
  if (!rosidl_generator_c__String__Array__init(&(ros_message->name), sizename)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create String__Array ros_message");
    return NULL;
  }
  rosidl_generator_c__String * destname = ros_message->name.data;
  size_t idxname;
  for (idxname = 0; idxname < sizename; idxname++) {
    itemname = PySequence_Fast_GET_ITEM(seqname, idxname);
    assert(PyUnicode_Check(itemname));
    rosidl_generator_c__String__assign(
      &destname[idxname], (char *)PyUnicode_1BYTE_DATA(itemname));
  }
  PyObject * pyposition = PyObject_GetAttrString(_pymsg, "position");
  assert(PySequence_Check(pyposition));
  PyObject * seqposition = PySequence_Fast(pyposition, "expected a sequence");
  PyObject * itemposition;
  size_t sizeposition = PySequence_Size(pyposition);
  if (!rosidl_generator_c__float64__Array__init(&(ros_message->position), sizeposition)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create float64__Array ros_message");
    return NULL;
  }
  double * destposition = ros_message->position.data;
  double tmpposition;
  size_t idxposition;
  for (idxposition = 0; idxposition < sizeposition; idxposition++) {
    itemposition = PySequence_Fast_GET_ITEM(seqposition, idxposition);
    assert(PyFloat_Check(itemposition));
    tmpposition = PyFloat_AS_DOUBLE(itemposition);
    memcpy(&destposition[idxposition], &tmpposition, sizeof(double));
  }
  PyObject * pyvelocity = PyObject_GetAttrString(_pymsg, "velocity");
  assert(PySequence_Check(pyvelocity));
  PyObject * seqvelocity = PySequence_Fast(pyvelocity, "expected a sequence");
  PyObject * itemvelocity;
  size_t sizevelocity = PySequence_Size(pyvelocity);
  if (!rosidl_generator_c__float64__Array__init(&(ros_message->velocity), sizevelocity)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create float64__Array ros_message");
    return NULL;
  }
  double * destvelocity = ros_message->velocity.data;
  double tmpvelocity;
  size_t idxvelocity;
  for (idxvelocity = 0; idxvelocity < sizevelocity; idxvelocity++) {
    itemvelocity = PySequence_Fast_GET_ITEM(seqvelocity, idxvelocity);
    assert(PyFloat_Check(itemvelocity));
    tmpvelocity = PyFloat_AS_DOUBLE(itemvelocity);
    memcpy(&destvelocity[idxvelocity], &tmpvelocity, sizeof(double));
  }
  PyObject * pyeffort = PyObject_GetAttrString(_pymsg, "effort");
  assert(PySequence_Check(pyeffort));
  PyObject * seqeffort = PySequence_Fast(pyeffort, "expected a sequence");
  PyObject * itemeffort;
  size_t sizeeffort = PySequence_Size(pyeffort);
  if (!rosidl_generator_c__float64__Array__init(&(ros_message->effort), sizeeffort)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create float64__Array ros_message");
    return NULL;
  }
  double * desteffort = ros_message->effort.data;
  double tmpeffort;
  size_t idxeffort;
  for (idxeffort = 0; idxeffort < sizeeffort; idxeffort++) {
    itemeffort = PySequence_Fast_GET_ITEM(seqeffort, idxeffort);
    assert(PyFloat_Check(itemeffort));
    tmpeffort = PyFloat_AS_DOUBLE(itemeffort);
    memcpy(&desteffort[idxeffort], &tmpeffort, sizeof(double));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_joint_state__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__JointState * ros_message = (sensor_msgs__msg__JointState *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__JointState__destroy(ros_message);
}

PyObject * sensor_msgs_joint_state__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__JointState * ros_message = (sensor_msgs__msg__JointState *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._joint_state");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JointState");

  /* NOTE(esteve): Call constructor of JointState */
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
  PyObject * pyname = NULL;
  size_t sizename = ros_message->name.size;
  rosidl_generator_c__String * tmpmessagedataname = ros_message->name.data;
  pyname = PyList_New(sizename);
  size_t idxname;
  for (idxname = 0; idxname < sizename; idxname++) {
    PyList_SetItem(pyname, idxname, PyUnicode_FromString(tmpmessagedataname[idxname].data));
  }
  assert(PySequence_Check(pyname));
  assert(pyname != NULL);
  Py_INCREF(pyname);
  PyObject_SetAttrString(_pymessage, "name", pyname);
  PyObject * pyposition = NULL;
  size_t sizeposition = ros_message->position.size;
  double * tmpmessagedataposition = ros_message->position.data;
  pyposition = PyList_New(sizeposition);
  size_t idxposition;
  for (idxposition = 0; idxposition < sizeposition; idxposition++) {
    PyList_SetItem(pyposition, idxposition, PyFloat_FromDouble(tmpmessagedataposition[idxposition]));
  }
  assert(PySequence_Check(pyposition));
  assert(pyposition != NULL);
  Py_INCREF(pyposition);
  PyObject_SetAttrString(_pymessage, "position", pyposition);
  PyObject * pyvelocity = NULL;
  size_t sizevelocity = ros_message->velocity.size;
  double * tmpmessagedatavelocity = ros_message->velocity.data;
  pyvelocity = PyList_New(sizevelocity);
  size_t idxvelocity;
  for (idxvelocity = 0; idxvelocity < sizevelocity; idxvelocity++) {
    PyList_SetItem(pyvelocity, idxvelocity, PyFloat_FromDouble(tmpmessagedatavelocity[idxvelocity]));
  }
  assert(PySequence_Check(pyvelocity));
  assert(pyvelocity != NULL);
  Py_INCREF(pyvelocity);
  PyObject_SetAttrString(_pymessage, "velocity", pyvelocity);
  PyObject * pyeffort = NULL;
  size_t sizeeffort = ros_message->effort.size;
  double * tmpmessagedataeffort = ros_message->effort.data;
  pyeffort = PyList_New(sizeeffort);
  size_t idxeffort;
  for (idxeffort = 0; idxeffort < sizeeffort; idxeffort++) {
    PyList_SetItem(pyeffort, idxeffort, PyFloat_FromDouble(tmpmessagedataeffort[idxeffort]));
  }
  assert(PySequence_Check(pyeffort));
  assert(pyeffort != NULL);
  Py_INCREF(pyeffort);
  PyObject_SetAttrString(_pymessage, "effort", pyeffort);
  assert(_pymessage != NULL);
  return _pymessage;
}
