// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <geometry_msgs/msg/polygon__struct.h>
#include <geometry_msgs/msg/polygon__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <geometry_msgs/msg/point32__functions.h>
// end nested array functions include

void * geometry_msgs_polygon__convert_from_py(PyObject * _pymsg)
{
  geometry_msgs__msg__Polygon * ros_message = geometry_msgs__msg__Polygon__create();
  (void)ros_message;
  char full_classname_dest[35];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "geometry_msgs.msg._polygon.Polygon",
      full_classname_dest, 34) == 0);

  PyObject * pypoints = PyObject_GetAttrString(_pymsg, "points");
  PyObject * pypoints_msg_module = PyImport_ImportModule("geometry_msgs.msg._point32");
  PyObject * pypoints_msg_class = PyObject_GetAttrString(pypoints_msg_module, "Point32");
  PyObject * pypoints_msg_metaclass = PyObject_GetAttrString(pypoints_msg_class, "__class__");
  PyObject * pypoints_convert_from_py = PyObject_GetAttrString(pypoints_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_points = (convert_from_py_signature)PyCapsule_GetPointer(pypoints_convert_from_py, NULL);
  assert(PySequence_Check(pypoints));
  PyObject * seqpoints = PySequence_Fast(pypoints, "expected a sequence");
  geometry_msgs__msg__Point32 * itempoints;
  size_t sizepoints = PySequence_Size(pypoints);
  if (!geometry_msgs__msg__Point32__Array__init(&(ros_message->points), sizepoints)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Point32__Array ros_message");
    return NULL;
  }
  geometry_msgs__msg__Point32 * destpoints = ros_message->points.data;
  size_t idxpoints;
  for (idxpoints = 0; idxpoints < sizepoints; idxpoints++) {
    itempoints = (geometry_msgs__msg__Point32 *) convert_from_py_points(
      PySequence_Fast_GET_ITEM(seqpoints, idxpoints));
    if (!itempoints) {
      return NULL;
    }
    memcpy(&destpoints[idxpoints], itempoints, sizeof(geometry_msgs__msg__Point32));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void geometry_msgs_polygon__destroy_ros_message(void * raw_ros_message)
{
  geometry_msgs__msg__Polygon * ros_message = (geometry_msgs__msg__Polygon *)raw_ros_message;
  (void)ros_message;

  geometry_msgs__msg__Polygon__destroy(ros_message);
}

PyObject * geometry_msgs_polygon__convert_to_py(void * raw_ros_message)
{
  geometry_msgs__msg__Polygon * ros_message = (geometry_msgs__msg__Polygon *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("geometry_msgs.msg._polygon");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Polygon");

  /* NOTE(esteve): Call constructor of Polygon */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pypoints = NULL;
  PyObject * pypoints_msg_module = PyImport_ImportModule("geometry_msgs.msg._point32");
  PyObject * pypoints_msg_class = PyObject_GetAttrString(pypoints_msg_module, "Point32");
  PyObject * pypoints_msg_metaclass = PyObject_GetAttrString(pypoints_msg_class, "__class__");
  PyObject * pypoints_convert_to_py = PyObject_GetAttrString(pypoints_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_points = (convert_to_py_signature)PyCapsule_GetPointer(pypoints_convert_to_py, NULL);
  size_t sizepoints = ros_message->points.size;
  pypoints = PyList_New(sizepoints);
  geometry_msgs__msg__Point32 itempoints;
  size_t idxpoints;
  for (idxpoints = 0; idxpoints < sizepoints; idxpoints++) {
    itempoints = ros_message->points.data[idxpoints];
    PyObject * pyitempoints = convert_to_py_points(&itempoints);
    if (!pyitempoints) {
      return NULL;
    }
    PyList_SetItem(pypoints, idxpoints, pyitempoints);
  }
  assert(PySequence_Check(pypoints));
  assert(pypoints != NULL);
  Py_INCREF(pypoints);
  PyObject_SetAttrString(_pymessage, "points", pypoints);
  assert(_pymessage != NULL);
  return _pymessage;
}
