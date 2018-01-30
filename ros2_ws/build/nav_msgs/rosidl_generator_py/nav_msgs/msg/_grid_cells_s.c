// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <nav_msgs/msg/grid_cells__struct.h>
#include <nav_msgs/msg/grid_cells__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <geometry_msgs/msg/point__functions.h>
// end nested array functions include

void * nav_msgs_grid_cells__convert_from_py(PyObject * _pymsg)
{
  nav_msgs__msg__GridCells * ros_message = nav_msgs__msg__GridCells__create();
  (void)ros_message;
  char full_classname_dest[35];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "nav_msgs.msg._grid_cells.GridCells",
      full_classname_dest, 34) == 0);

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
  PyObject * pycell_width = PyObject_GetAttrString(_pymsg, "cell_width");
  assert(PyFloat_Check(pycell_width));
  ros_message->cell_width = (float)PyFloat_AS_DOUBLE(pycell_width);
  PyObject * pycell_height = PyObject_GetAttrString(_pymsg, "cell_height");
  assert(PyFloat_Check(pycell_height));
  ros_message->cell_height = (float)PyFloat_AS_DOUBLE(pycell_height);
  PyObject * pycells = PyObject_GetAttrString(_pymsg, "cells");
  PyObject * pycells_msg_module = PyImport_ImportModule("geometry_msgs.msg._point");
  PyObject * pycells_msg_class = PyObject_GetAttrString(pycells_msg_module, "Point");
  PyObject * pycells_msg_metaclass = PyObject_GetAttrString(pycells_msg_class, "__class__");
  PyObject * pycells_convert_from_py = PyObject_GetAttrString(pycells_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_cells = (convert_from_py_signature)PyCapsule_GetPointer(pycells_convert_from_py, NULL);
  assert(PySequence_Check(pycells));
  PyObject * seqcells = PySequence_Fast(pycells, "expected a sequence");
  geometry_msgs__msg__Point * itemcells;
  size_t sizecells = PySequence_Size(pycells);
  if (!geometry_msgs__msg__Point__Array__init(&(ros_message->cells), sizecells)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Point__Array ros_message");
    return NULL;
  }
  geometry_msgs__msg__Point * destcells = ros_message->cells.data;
  size_t idxcells;
  for (idxcells = 0; idxcells < sizecells; idxcells++) {
    itemcells = (geometry_msgs__msg__Point *) convert_from_py_cells(
      PySequence_Fast_GET_ITEM(seqcells, idxcells));
    if (!itemcells) {
      return NULL;
    }
    memcpy(&destcells[idxcells], itemcells, sizeof(geometry_msgs__msg__Point));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void nav_msgs_grid_cells__destroy_ros_message(void * raw_ros_message)
{
  nav_msgs__msg__GridCells * ros_message = (nav_msgs__msg__GridCells *)raw_ros_message;
  (void)ros_message;

  nav_msgs__msg__GridCells__destroy(ros_message);
}

PyObject * nav_msgs_grid_cells__convert_to_py(void * raw_ros_message)
{
  nav_msgs__msg__GridCells * ros_message = (nav_msgs__msg__GridCells *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("nav_msgs.msg._grid_cells");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GridCells");

  /* NOTE(esteve): Call constructor of GridCells */
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
  PyObject * pycell_width = NULL;
  pycell_width = PyFloat_FromDouble(ros_message->cell_width);
  assert(pycell_width != NULL);
  Py_INCREF(pycell_width);
  PyObject_SetAttrString(_pymessage, "cell_width", pycell_width);
  PyObject * pycell_height = NULL;
  pycell_height = PyFloat_FromDouble(ros_message->cell_height);
  assert(pycell_height != NULL);
  Py_INCREF(pycell_height);
  PyObject_SetAttrString(_pymessage, "cell_height", pycell_height);
  PyObject * pycells = NULL;
  PyObject * pycells_msg_module = PyImport_ImportModule("geometry_msgs.msg._point");
  PyObject * pycells_msg_class = PyObject_GetAttrString(pycells_msg_module, "Point");
  PyObject * pycells_msg_metaclass = PyObject_GetAttrString(pycells_msg_class, "__class__");
  PyObject * pycells_convert_to_py = PyObject_GetAttrString(pycells_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_cells = (convert_to_py_signature)PyCapsule_GetPointer(pycells_convert_to_py, NULL);
  size_t sizecells = ros_message->cells.size;
  pycells = PyList_New(sizecells);
  geometry_msgs__msg__Point itemcells;
  size_t idxcells;
  for (idxcells = 0; idxcells < sizecells; idxcells++) {
    itemcells = ros_message->cells.data[idxcells];
    PyObject * pyitemcells = convert_to_py_cells(&itemcells);
    if (!pyitemcells) {
      return NULL;
    }
    PyList_SetItem(pycells, idxcells, pyitemcells);
  }
  assert(PySequence_Check(pycells));
  assert(pycells != NULL);
  Py_INCREF(pycells);
  PyObject_SetAttrString(_pymessage, "cells", pycells);
  assert(_pymessage != NULL);
  return _pymessage;
}
