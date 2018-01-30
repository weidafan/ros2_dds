// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <nav_msgs/msg/path__struct.h>
#include <nav_msgs/msg/path__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <geometry_msgs/msg/pose_stamped__functions.h>
// end nested array functions include

void * nav_msgs_path__convert_from_py(PyObject * _pymsg)
{
  nav_msgs__msg__Path * ros_message = nav_msgs__msg__Path__create();
  (void)ros_message;
  char full_classname_dest[24];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "nav_msgs.msg._path.Path",
      full_classname_dest, 23) == 0);

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
  PyObject * pyposes = PyObject_GetAttrString(_pymsg, "poses");
  PyObject * pyposes_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose_stamped");
  PyObject * pyposes_msg_class = PyObject_GetAttrString(pyposes_msg_module, "PoseStamped");
  PyObject * pyposes_msg_metaclass = PyObject_GetAttrString(pyposes_msg_class, "__class__");
  PyObject * pyposes_convert_from_py = PyObject_GetAttrString(pyposes_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_poses = (convert_from_py_signature)PyCapsule_GetPointer(pyposes_convert_from_py, NULL);
  assert(PySequence_Check(pyposes));
  PyObject * seqposes = PySequence_Fast(pyposes, "expected a sequence");
  geometry_msgs__msg__PoseStamped * itemposes;
  size_t sizeposes = PySequence_Size(pyposes);
  if (!geometry_msgs__msg__PoseStamped__Array__init(&(ros_message->poses), sizeposes)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__PoseStamped__Array ros_message");
    return NULL;
  }
  geometry_msgs__msg__PoseStamped * destposes = ros_message->poses.data;
  size_t idxposes;
  for (idxposes = 0; idxposes < sizeposes; idxposes++) {
    itemposes = (geometry_msgs__msg__PoseStamped *) convert_from_py_poses(
      PySequence_Fast_GET_ITEM(seqposes, idxposes));
    if (!itemposes) {
      return NULL;
    }
    memcpy(&destposes[idxposes], itemposes, sizeof(geometry_msgs__msg__PoseStamped));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void nav_msgs_path__destroy_ros_message(void * raw_ros_message)
{
  nav_msgs__msg__Path * ros_message = (nav_msgs__msg__Path *)raw_ros_message;
  (void)ros_message;

  nav_msgs__msg__Path__destroy(ros_message);
}

PyObject * nav_msgs_path__convert_to_py(void * raw_ros_message)
{
  nav_msgs__msg__Path * ros_message = (nav_msgs__msg__Path *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("nav_msgs.msg._path");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Path");

  /* NOTE(esteve): Call constructor of Path */
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
  PyObject * pyposes = NULL;
  PyObject * pyposes_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose_stamped");
  PyObject * pyposes_msg_class = PyObject_GetAttrString(pyposes_msg_module, "PoseStamped");
  PyObject * pyposes_msg_metaclass = PyObject_GetAttrString(pyposes_msg_class, "__class__");
  PyObject * pyposes_convert_to_py = PyObject_GetAttrString(pyposes_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_poses = (convert_to_py_signature)PyCapsule_GetPointer(pyposes_convert_to_py, NULL);
  size_t sizeposes = ros_message->poses.size;
  pyposes = PyList_New(sizeposes);
  geometry_msgs__msg__PoseStamped itemposes;
  size_t idxposes;
  for (idxposes = 0; idxposes < sizeposes; idxposes++) {
    itemposes = ros_message->poses.data[idxposes];
    PyObject * pyitemposes = convert_to_py_poses(&itemposes);
    if (!pyitemposes) {
      return NULL;
    }
    PyList_SetItem(pyposes, idxposes, pyitemposes);
  }
  assert(PySequence_Check(pyposes));
  assert(pyposes != NULL);
  Py_INCREF(pyposes);
  PyObject_SetAttrString(_pymessage, "poses", pyposes);
  assert(_pymessage != NULL);
  return _pymessage;
}
