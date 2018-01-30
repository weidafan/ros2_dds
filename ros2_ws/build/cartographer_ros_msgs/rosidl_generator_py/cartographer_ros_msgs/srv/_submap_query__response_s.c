// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <cartographer_ros_msgs/srv/submap_query__response__struct.h>
#include <cartographer_ros_msgs/srv/submap_query__response__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * cartographer_ros_msgs_submap_query__response__convert_from_py(PyObject * _pymsg)
{
  cartographer_ros_msgs__srv__SubmapQuery_Response * ros_message = cartographer_ros_msgs__srv__SubmapQuery_Response__create();
  (void)ros_message;
  char full_classname_dest[71];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "cartographer_ros_msgs.srv._submap_query__response.SubmapQuery_Response",
      full_classname_dest, 70) == 0);

  PyObject * pysubmap_version = PyObject_GetAttrString(_pymsg, "submap_version");
  assert(PyLong_Check(pysubmap_version));
  ros_message->submap_version = (int32_t)PyLong_AsLong(pysubmap_version);
  PyObject * pycells = PyObject_GetAttrString(_pymsg, "cells");
  assert(PySequence_Check(pycells));
  PyObject * seqcells = PySequence_Fast(pycells, "expected a sequence");
  PyObject * itemcells;
  size_t sizecells = PySequence_Size(pycells);
  if (!rosidl_generator_c__uint8__Array__init(&(ros_message->cells), sizecells)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Array ros_message");
    return NULL;
  }
  uint8_t * destcells = ros_message->cells.data;
  uint8_t tmpcells;
  size_t idxcells;
  for (idxcells = 0; idxcells < sizecells; idxcells++) {
    itemcells = PySequence_Fast_GET_ITEM(seqcells, idxcells);
    assert(PyLong_Check(itemcells));
    tmpcells = (uint8_t)PyLong_AsUnsignedLong(itemcells);

    memcpy(&destcells[idxcells], &tmpcells, sizeof(uint8_t));
  }
  PyObject * pywidth = PyObject_GetAttrString(_pymsg, "width");
  assert(PyLong_Check(pywidth));
  ros_message->width = (int32_t)PyLong_AsLong(pywidth);
  PyObject * pyheight = PyObject_GetAttrString(_pymsg, "height");
  assert(PyLong_Check(pyheight));
  ros_message->height = (int32_t)PyLong_AsLong(pyheight);
  PyObject * pyresolution = PyObject_GetAttrString(_pymsg, "resolution");
  assert(PyFloat_Check(pyresolution));
  ros_message->resolution = PyFloat_AS_DOUBLE(pyresolution);
  PyObject * pyslice_pose = PyObject_GetAttrString(_pymsg, "slice_pose");
  PyObject * pyslice_pose_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose");
  PyObject * pyslice_pose_msg_class = PyObject_GetAttrString(pyslice_pose_msg_module, "Pose");
  PyObject * pyslice_pose_msg_metaclass = PyObject_GetAttrString(pyslice_pose_msg_class, "__class__");
  PyObject * pyslice_pose_convert_from_py = PyObject_GetAttrString(pyslice_pose_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_slice_pose = (convert_from_py_signature)PyCapsule_GetPointer(pyslice_pose_convert_from_py, NULL);
  geometry_msgs__msg__Pose * tmpslice_pose = (geometry_msgs__msg__Pose *) convert_from_py_slice_pose(pyslice_pose);
  if (!tmpslice_pose) {
    return NULL;
  }
  ros_message->slice_pose = *tmpslice_pose;
  PyObject * pyerror_message = PyObject_GetAttrString(_pymsg, "error_message");
  assert(PyUnicode_Check(pyerror_message));
  rosidl_generator_c__String__assign(
    &ros_message->error_message, (char *)PyUnicode_1BYTE_DATA(pyerror_message));

  assert(ros_message != NULL);
  return ros_message;
}

void cartographer_ros_msgs_submap_query__response__destroy_ros_message(void * raw_ros_message)
{
  cartographer_ros_msgs__srv__SubmapQuery_Response * ros_message = (cartographer_ros_msgs__srv__SubmapQuery_Response *)raw_ros_message;
  (void)ros_message;

  cartographer_ros_msgs__srv__SubmapQuery_Response__destroy(ros_message);
}

PyObject * cartographer_ros_msgs_submap_query__response__convert_to_py(void * raw_ros_message)
{
  cartographer_ros_msgs__srv__SubmapQuery_Response * ros_message = (cartographer_ros_msgs__srv__SubmapQuery_Response *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("cartographer_ros_msgs.srv._submap_query__response");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SubmapQuery_Response");

  /* NOTE(esteve): Call constructor of SubmapQuery_Response */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pysubmap_version = NULL;
  pysubmap_version = PyLong_FromLong(ros_message->submap_version);
  assert(pysubmap_version != NULL);
  Py_INCREF(pysubmap_version);
  PyObject_SetAttrString(_pymessage, "submap_version", pysubmap_version);
  PyObject * pycells = NULL;
  size_t sizecells = ros_message->cells.size;
  uint8_t * tmpmessagedatacells = ros_message->cells.data;
  pycells = PyList_New(sizecells);
  size_t idxcells;
  for (idxcells = 0; idxcells < sizecells; idxcells++) {
    PyList_SetItem(pycells, idxcells, PyLong_FromUnsignedLong(tmpmessagedatacells[idxcells]));
  }
  assert(PySequence_Check(pycells));
  assert(pycells != NULL);
  Py_INCREF(pycells);
  PyObject_SetAttrString(_pymessage, "cells", pycells);
  PyObject * pywidth = NULL;
  pywidth = PyLong_FromLong(ros_message->width);
  assert(pywidth != NULL);
  Py_INCREF(pywidth);
  PyObject_SetAttrString(_pymessage, "width", pywidth);
  PyObject * pyheight = NULL;
  pyheight = PyLong_FromLong(ros_message->height);
  assert(pyheight != NULL);
  Py_INCREF(pyheight);
  PyObject_SetAttrString(_pymessage, "height", pyheight);
  PyObject * pyresolution = NULL;
  pyresolution = PyFloat_FromDouble(ros_message->resolution);
  assert(pyresolution != NULL);
  Py_INCREF(pyresolution);
  PyObject_SetAttrString(_pymessage, "resolution", pyresolution);
  PyObject * pyslice_pose = NULL;
  PyObject * pyslice_pose_msg_module = PyImport_ImportModule("geometry_msgs.msg._pose");
  PyObject * pyslice_pose_msg_class = PyObject_GetAttrString(pyslice_pose_msg_module, "Pose");
  PyObject * pyslice_pose_msg_metaclass = PyObject_GetAttrString(pyslice_pose_msg_class, "__class__");
  PyObject * pyslice_pose_convert_to_py = PyObject_GetAttrString(pyslice_pose_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_slice_pose = (convert_to_py_signature)PyCapsule_GetPointer(pyslice_pose_convert_to_py, NULL);
  geometry_msgs__msg__Pose pytmpslice_pose = ros_message->slice_pose;
  pyslice_pose = convert_to_py_slice_pose(&pytmpslice_pose);
  if (!pyslice_pose) {
    return NULL;
  }
  assert(pyslice_pose != NULL);
  Py_INCREF(pyslice_pose);
  PyObject_SetAttrString(_pymessage, "slice_pose", pyslice_pose);
  PyObject * pyerror_message = NULL;
  pyerror_message = PyUnicode_FromString(ros_message->error_message.data);
  assert(pyerror_message != NULL);
  Py_INCREF(pyerror_message);
  PyObject_SetAttrString(_pymessage, "error_message", pyerror_message);
  assert(_pymessage != NULL);
  return _pymessage;
}
