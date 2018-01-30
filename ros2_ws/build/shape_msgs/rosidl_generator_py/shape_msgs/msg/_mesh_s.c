// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <shape_msgs/msg/mesh__struct.h>
#include <shape_msgs/msg/mesh__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <geometry_msgs/msg/point__functions.h>
#include <shape_msgs/msg/mesh_triangle__functions.h>
// end nested array functions include

void * shape_msgs_mesh__convert_from_py(PyObject * _pymsg)
{
  shape_msgs__msg__Mesh * ros_message = shape_msgs__msg__Mesh__create();
  (void)ros_message;
  char full_classname_dest[26];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "shape_msgs.msg._mesh.Mesh",
      full_classname_dest, 25) == 0);

  PyObject * pytriangles = PyObject_GetAttrString(_pymsg, "triangles");
  PyObject * pytriangles_msg_module = PyImport_ImportModule("shape_msgs.msg._mesh_triangle");
  PyObject * pytriangles_msg_class = PyObject_GetAttrString(pytriangles_msg_module, "MeshTriangle");
  PyObject * pytriangles_msg_metaclass = PyObject_GetAttrString(pytriangles_msg_class, "__class__");
  PyObject * pytriangles_convert_from_py = PyObject_GetAttrString(pytriangles_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_triangles = (convert_from_py_signature)PyCapsule_GetPointer(pytriangles_convert_from_py, NULL);
  assert(PySequence_Check(pytriangles));
  PyObject * seqtriangles = PySequence_Fast(pytriangles, "expected a sequence");
  shape_msgs__msg__MeshTriangle * itemtriangles;
  size_t sizetriangles = PySequence_Size(pytriangles);
  if (!shape_msgs__msg__MeshTriangle__Array__init(&(ros_message->triangles), sizetriangles)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create shape_msgs__msg__MeshTriangle__Array ros_message");
    return NULL;
  }
  shape_msgs__msg__MeshTriangle * desttriangles = ros_message->triangles.data;
  size_t idxtriangles;
  for (idxtriangles = 0; idxtriangles < sizetriangles; idxtriangles++) {
    itemtriangles = (shape_msgs__msg__MeshTriangle *) convert_from_py_triangles(
      PySequence_Fast_GET_ITEM(seqtriangles, idxtriangles));
    if (!itemtriangles) {
      return NULL;
    }
    memcpy(&desttriangles[idxtriangles], itemtriangles, sizeof(shape_msgs__msg__MeshTriangle));
  }
  PyObject * pyvertices = PyObject_GetAttrString(_pymsg, "vertices");
  PyObject * pyvertices_msg_module = PyImport_ImportModule("geometry_msgs.msg._point");
  PyObject * pyvertices_msg_class = PyObject_GetAttrString(pyvertices_msg_module, "Point");
  PyObject * pyvertices_msg_metaclass = PyObject_GetAttrString(pyvertices_msg_class, "__class__");
  PyObject * pyvertices_convert_from_py = PyObject_GetAttrString(pyvertices_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_vertices = (convert_from_py_signature)PyCapsule_GetPointer(pyvertices_convert_from_py, NULL);
  assert(PySequence_Check(pyvertices));
  PyObject * seqvertices = PySequence_Fast(pyvertices, "expected a sequence");
  geometry_msgs__msg__Point * itemvertices;
  size_t sizevertices = PySequence_Size(pyvertices);
  if (!geometry_msgs__msg__Point__Array__init(&(ros_message->vertices), sizevertices)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Point__Array ros_message");
    return NULL;
  }
  geometry_msgs__msg__Point * destvertices = ros_message->vertices.data;
  size_t idxvertices;
  for (idxvertices = 0; idxvertices < sizevertices; idxvertices++) {
    itemvertices = (geometry_msgs__msg__Point *) convert_from_py_vertices(
      PySequence_Fast_GET_ITEM(seqvertices, idxvertices));
    if (!itemvertices) {
      return NULL;
    }
    memcpy(&destvertices[idxvertices], itemvertices, sizeof(geometry_msgs__msg__Point));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void shape_msgs_mesh__destroy_ros_message(void * raw_ros_message)
{
  shape_msgs__msg__Mesh * ros_message = (shape_msgs__msg__Mesh *)raw_ros_message;
  (void)ros_message;

  shape_msgs__msg__Mesh__destroy(ros_message);
}

PyObject * shape_msgs_mesh__convert_to_py(void * raw_ros_message)
{
  shape_msgs__msg__Mesh * ros_message = (shape_msgs__msg__Mesh *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("shape_msgs.msg._mesh");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Mesh");

  /* NOTE(esteve): Call constructor of Mesh */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pytriangles = NULL;
  PyObject * pytriangles_msg_module = PyImport_ImportModule("shape_msgs.msg._mesh_triangle");
  PyObject * pytriangles_msg_class = PyObject_GetAttrString(pytriangles_msg_module, "MeshTriangle");
  PyObject * pytriangles_msg_metaclass = PyObject_GetAttrString(pytriangles_msg_class, "__class__");
  PyObject * pytriangles_convert_to_py = PyObject_GetAttrString(pytriangles_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_triangles = (convert_to_py_signature)PyCapsule_GetPointer(pytriangles_convert_to_py, NULL);
  size_t sizetriangles = ros_message->triangles.size;
  pytriangles = PyList_New(sizetriangles);
  shape_msgs__msg__MeshTriangle itemtriangles;
  size_t idxtriangles;
  for (idxtriangles = 0; idxtriangles < sizetriangles; idxtriangles++) {
    itemtriangles = ros_message->triangles.data[idxtriangles];
    PyObject * pyitemtriangles = convert_to_py_triangles(&itemtriangles);
    if (!pyitemtriangles) {
      return NULL;
    }
    PyList_SetItem(pytriangles, idxtriangles, pyitemtriangles);
  }
  assert(PySequence_Check(pytriangles));
  assert(pytriangles != NULL);
  Py_INCREF(pytriangles);
  PyObject_SetAttrString(_pymessage, "triangles", pytriangles);
  PyObject * pyvertices = NULL;
  PyObject * pyvertices_msg_module = PyImport_ImportModule("geometry_msgs.msg._point");
  PyObject * pyvertices_msg_class = PyObject_GetAttrString(pyvertices_msg_module, "Point");
  PyObject * pyvertices_msg_metaclass = PyObject_GetAttrString(pyvertices_msg_class, "__class__");
  PyObject * pyvertices_convert_to_py = PyObject_GetAttrString(pyvertices_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_vertices = (convert_to_py_signature)PyCapsule_GetPointer(pyvertices_convert_to_py, NULL);
  size_t sizevertices = ros_message->vertices.size;
  pyvertices = PyList_New(sizevertices);
  geometry_msgs__msg__Point itemvertices;
  size_t idxvertices;
  for (idxvertices = 0; idxvertices < sizevertices; idxvertices++) {
    itemvertices = ros_message->vertices.data[idxvertices];
    PyObject * pyitemvertices = convert_to_py_vertices(&itemvertices);
    if (!pyitemvertices) {
      return NULL;
    }
    PyList_SetItem(pyvertices, idxvertices, pyitemvertices);
  }
  assert(PySequence_Check(pyvertices));
  assert(pyvertices != NULL);
  Py_INCREF(pyvertices);
  PyObject_SetAttrString(_pymessage, "vertices", pyvertices);
  assert(_pymessage != NULL);
  return _pymessage;
}
