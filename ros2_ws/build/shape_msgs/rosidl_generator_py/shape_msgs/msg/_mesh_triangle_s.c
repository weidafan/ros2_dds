// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <shape_msgs/msg/mesh_triangle__struct.h>
#include <shape_msgs/msg/mesh_triangle__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>


void * shape_msgs_mesh_triangle__convert_from_py(PyObject * _pymsg)
{
  shape_msgs__msg__MeshTriangle * ros_message = shape_msgs__msg__MeshTriangle__create();
  (void)ros_message;
  char full_classname_dest[43];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "shape_msgs.msg._mesh_triangle.MeshTriangle",
      full_classname_dest, 42) == 0);

  PyObject * pyvertex_indices = PyObject_GetAttrString(_pymsg, "vertex_indices");
  assert(PySequence_Check(pyvertex_indices));
  PyObject * seqvertex_indices = PySequence_Fast(pyvertex_indices, "expected a sequence");
  PyObject * itemvertex_indices;
  size_t sizevertex_indices = 3;
  uint32_t * destvertex_indices = ros_message->vertex_indices;
  uint32_t tmpvertex_indices;
  size_t idxvertex_indices;
  for (idxvertex_indices = 0; idxvertex_indices < sizevertex_indices; idxvertex_indices++) {
    itemvertex_indices = PySequence_Fast_GET_ITEM(seqvertex_indices, idxvertex_indices);
    assert(PyLong_Check(itemvertex_indices));
    tmpvertex_indices = PyLong_AsUnsignedLong(itemvertex_indices);

    memcpy(&destvertex_indices[idxvertex_indices], &tmpvertex_indices, sizeof(uint32_t));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void shape_msgs_mesh_triangle__destroy_ros_message(void * raw_ros_message)
{
  shape_msgs__msg__MeshTriangle * ros_message = (shape_msgs__msg__MeshTriangle *)raw_ros_message;
  (void)ros_message;

  shape_msgs__msg__MeshTriangle__destroy(ros_message);
}

PyObject * shape_msgs_mesh_triangle__convert_to_py(void * raw_ros_message)
{
  shape_msgs__msg__MeshTriangle * ros_message = (shape_msgs__msg__MeshTriangle *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("shape_msgs.msg._mesh_triangle");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MeshTriangle");

  /* NOTE(esteve): Call constructor of MeshTriangle */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyvertex_indices = NULL;
  size_t sizevertex_indices = 3;
  uint32_t * tmpmessagedatavertex_indices = ros_message->vertex_indices;
  pyvertex_indices = PyList_New(sizevertex_indices);
  size_t idxvertex_indices;
  for (idxvertex_indices = 0; idxvertex_indices < sizevertex_indices; idxvertex_indices++) {
    PyList_SetItem(pyvertex_indices, idxvertex_indices, PyLong_FromUnsignedLong(tmpmessagedatavertex_indices[idxvertex_indices]));
  }
  assert(PySequence_Check(pyvertex_indices));
  assert(pyvertex_indices != NULL);
  Py_INCREF(pyvertex_indices);
  PyObject_SetAttrString(_pymessage, "vertex_indices", pyvertex_indices);
  assert(_pymessage != NULL);
  return _pymessage;
}
