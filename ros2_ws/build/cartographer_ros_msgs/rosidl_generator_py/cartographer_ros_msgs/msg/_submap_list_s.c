// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <cartographer_ros_msgs/msg/submap_list__struct.h>
#include <cartographer_ros_msgs/msg/submap_list__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <cartographer_ros_msgs/msg/trajectory_submap_list__functions.h>
// end nested array functions include

void * cartographer_ros_msgs_submap_list__convert_from_py(PyObject * _pymsg)
{
  cartographer_ros_msgs__msg__SubmapList * ros_message = cartographer_ros_msgs__msg__SubmapList__create();
  (void)ros_message;
  char full_classname_dest[50];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "cartographer_ros_msgs.msg._submap_list.SubmapList",
      full_classname_dest, 49) == 0);

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
  PyObject * pytrajectory = PyObject_GetAttrString(_pymsg, "trajectory");
  PyObject * pytrajectory_msg_module = PyImport_ImportModule("cartographer_ros_msgs.msg._trajectory_submap_list");
  PyObject * pytrajectory_msg_class = PyObject_GetAttrString(pytrajectory_msg_module, "TrajectorySubmapList");
  PyObject * pytrajectory_msg_metaclass = PyObject_GetAttrString(pytrajectory_msg_class, "__class__");
  PyObject * pytrajectory_convert_from_py = PyObject_GetAttrString(pytrajectory_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_trajectory = (convert_from_py_signature)PyCapsule_GetPointer(pytrajectory_convert_from_py, NULL);
  assert(PySequence_Check(pytrajectory));
  PyObject * seqtrajectory = PySequence_Fast(pytrajectory, "expected a sequence");
  cartographer_ros_msgs__msg__TrajectorySubmapList * itemtrajectory;
  size_t sizetrajectory = PySequence_Size(pytrajectory);
  if (!cartographer_ros_msgs__msg__TrajectorySubmapList__Array__init(&(ros_message->trajectory), sizetrajectory)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create cartographer_ros_msgs__msg__TrajectorySubmapList__Array ros_message");
    return NULL;
  }
  cartographer_ros_msgs__msg__TrajectorySubmapList * desttrajectory = ros_message->trajectory.data;
  size_t idxtrajectory;
  for (idxtrajectory = 0; idxtrajectory < sizetrajectory; idxtrajectory++) {
    itemtrajectory = (cartographer_ros_msgs__msg__TrajectorySubmapList *) convert_from_py_trajectory(
      PySequence_Fast_GET_ITEM(seqtrajectory, idxtrajectory));
    if (!itemtrajectory) {
      return NULL;
    }
    memcpy(&desttrajectory[idxtrajectory], itemtrajectory, sizeof(cartographer_ros_msgs__msg__TrajectorySubmapList));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void cartographer_ros_msgs_submap_list__destroy_ros_message(void * raw_ros_message)
{
  cartographer_ros_msgs__msg__SubmapList * ros_message = (cartographer_ros_msgs__msg__SubmapList *)raw_ros_message;
  (void)ros_message;

  cartographer_ros_msgs__msg__SubmapList__destroy(ros_message);
}

PyObject * cartographer_ros_msgs_submap_list__convert_to_py(void * raw_ros_message)
{
  cartographer_ros_msgs__msg__SubmapList * ros_message = (cartographer_ros_msgs__msg__SubmapList *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("cartographer_ros_msgs.msg._submap_list");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SubmapList");

  /* NOTE(esteve): Call constructor of SubmapList */
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
  PyObject * pytrajectory = NULL;
  PyObject * pytrajectory_msg_module = PyImport_ImportModule("cartographer_ros_msgs.msg._trajectory_submap_list");
  PyObject * pytrajectory_msg_class = PyObject_GetAttrString(pytrajectory_msg_module, "TrajectorySubmapList");
  PyObject * pytrajectory_msg_metaclass = PyObject_GetAttrString(pytrajectory_msg_class, "__class__");
  PyObject * pytrajectory_convert_to_py = PyObject_GetAttrString(pytrajectory_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_trajectory = (convert_to_py_signature)PyCapsule_GetPointer(pytrajectory_convert_to_py, NULL);
  size_t sizetrajectory = ros_message->trajectory.size;
  pytrajectory = PyList_New(sizetrajectory);
  cartographer_ros_msgs__msg__TrajectorySubmapList itemtrajectory;
  size_t idxtrajectory;
  for (idxtrajectory = 0; idxtrajectory < sizetrajectory; idxtrajectory++) {
    itemtrajectory = ros_message->trajectory.data[idxtrajectory];
    PyObject * pyitemtrajectory = convert_to_py_trajectory(&itemtrajectory);
    if (!pyitemtrajectory) {
      return NULL;
    }
    PyList_SetItem(pytrajectory, idxtrajectory, pyitemtrajectory);
  }
  assert(PySequence_Check(pytrajectory));
  assert(pytrajectory != NULL);
  Py_INCREF(pytrajectory);
  PyObject_SetAttrString(_pymessage, "trajectory", pytrajectory);
  assert(_pymessage != NULL);
  return _pymessage;
}
