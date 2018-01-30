// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <cartographer_ros_msgs/msg/trajectory_submap_list__struct.h>
#include <cartographer_ros_msgs/msg/trajectory_submap_list__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <cartographer_ros_msgs/msg/submap_entry__functions.h>
// end nested array functions include

void * cartographer_ros_msgs_trajectory_submap_list__convert_from_py(PyObject * _pymsg)
{
  cartographer_ros_msgs__msg__TrajectorySubmapList * ros_message = cartographer_ros_msgs__msg__TrajectorySubmapList__create();
  (void)ros_message;
  char full_classname_dest[71];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "cartographer_ros_msgs.msg._trajectory_submap_list.TrajectorySubmapList",
      full_classname_dest, 70) == 0);

  PyObject * pysubmap = PyObject_GetAttrString(_pymsg, "submap");
  PyObject * pysubmap_msg_module = PyImport_ImportModule("cartographer_ros_msgs.msg._submap_entry");
  PyObject * pysubmap_msg_class = PyObject_GetAttrString(pysubmap_msg_module, "SubmapEntry");
  PyObject * pysubmap_msg_metaclass = PyObject_GetAttrString(pysubmap_msg_class, "__class__");
  PyObject * pysubmap_convert_from_py = PyObject_GetAttrString(pysubmap_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_submap = (convert_from_py_signature)PyCapsule_GetPointer(pysubmap_convert_from_py, NULL);
  assert(PySequence_Check(pysubmap));
  PyObject * seqsubmap = PySequence_Fast(pysubmap, "expected a sequence");
  cartographer_ros_msgs__msg__SubmapEntry * itemsubmap;
  size_t sizesubmap = PySequence_Size(pysubmap);
  if (!cartographer_ros_msgs__msg__SubmapEntry__Array__init(&(ros_message->submap), sizesubmap)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create cartographer_ros_msgs__msg__SubmapEntry__Array ros_message");
    return NULL;
  }
  cartographer_ros_msgs__msg__SubmapEntry * destsubmap = ros_message->submap.data;
  size_t idxsubmap;
  for (idxsubmap = 0; idxsubmap < sizesubmap; idxsubmap++) {
    itemsubmap = (cartographer_ros_msgs__msg__SubmapEntry *) convert_from_py_submap(
      PySequence_Fast_GET_ITEM(seqsubmap, idxsubmap));
    if (!itemsubmap) {
      return NULL;
    }
    memcpy(&destsubmap[idxsubmap], itemsubmap, sizeof(cartographer_ros_msgs__msg__SubmapEntry));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void cartographer_ros_msgs_trajectory_submap_list__destroy_ros_message(void * raw_ros_message)
{
  cartographer_ros_msgs__msg__TrajectorySubmapList * ros_message = (cartographer_ros_msgs__msg__TrajectorySubmapList *)raw_ros_message;
  (void)ros_message;

  cartographer_ros_msgs__msg__TrajectorySubmapList__destroy(ros_message);
}

PyObject * cartographer_ros_msgs_trajectory_submap_list__convert_to_py(void * raw_ros_message)
{
  cartographer_ros_msgs__msg__TrajectorySubmapList * ros_message = (cartographer_ros_msgs__msg__TrajectorySubmapList *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("cartographer_ros_msgs.msg._trajectory_submap_list");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrajectorySubmapList");

  /* NOTE(esteve): Call constructor of TrajectorySubmapList */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pysubmap = NULL;
  PyObject * pysubmap_msg_module = PyImport_ImportModule("cartographer_ros_msgs.msg._submap_entry");
  PyObject * pysubmap_msg_class = PyObject_GetAttrString(pysubmap_msg_module, "SubmapEntry");
  PyObject * pysubmap_msg_metaclass = PyObject_GetAttrString(pysubmap_msg_class, "__class__");
  PyObject * pysubmap_convert_to_py = PyObject_GetAttrString(pysubmap_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_submap = (convert_to_py_signature)PyCapsule_GetPointer(pysubmap_convert_to_py, NULL);
  size_t sizesubmap = ros_message->submap.size;
  pysubmap = PyList_New(sizesubmap);
  cartographer_ros_msgs__msg__SubmapEntry itemsubmap;
  size_t idxsubmap;
  for (idxsubmap = 0; idxsubmap < sizesubmap; idxsubmap++) {
    itemsubmap = ros_message->submap.data[idxsubmap];
    PyObject * pyitemsubmap = convert_to_py_submap(&itemsubmap);
    if (!pyitemsubmap) {
      return NULL;
    }
    PyList_SetItem(pysubmap, idxsubmap, pyitemsubmap);
  }
  assert(PySequence_Check(pysubmap));
  assert(pysubmap != NULL);
  Py_INCREF(pysubmap);
  PyObject_SetAttrString(_pymessage, "submap", pysubmap);
  assert(_pymessage != NULL);
  return _pymessage;
}
