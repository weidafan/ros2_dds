// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <geometry_msgs/msg/point__struct.h>
#include <geometry_msgs/msg/point__functions.h>


void * geometry_msgs_point__convert_from_py(PyObject * _pymsg)
{
  geometry_msgs__msg__Point * ros_message = geometry_msgs__msg__Point__create();
  (void)ros_message;
  char full_classname_dest[31];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "geometry_msgs.msg._point.Point",
      full_classname_dest, 30) == 0);

  PyObject * pyx = PyObject_GetAttrString(_pymsg, "x");
  assert(PyFloat_Check(pyx));
  ros_message->x = PyFloat_AS_DOUBLE(pyx);
  PyObject * pyy = PyObject_GetAttrString(_pymsg, "y");
  assert(PyFloat_Check(pyy));
  ros_message->y = PyFloat_AS_DOUBLE(pyy);
  PyObject * pyz = PyObject_GetAttrString(_pymsg, "z");
  assert(PyFloat_Check(pyz));
  ros_message->z = PyFloat_AS_DOUBLE(pyz);

  assert(ros_message != NULL);
  return ros_message;
}

void geometry_msgs_point__destroy_ros_message(void * raw_ros_message)
{
  geometry_msgs__msg__Point * ros_message = (geometry_msgs__msg__Point *)raw_ros_message;
  (void)ros_message;

  geometry_msgs__msg__Point__destroy(ros_message);
}

PyObject * geometry_msgs_point__convert_to_py(void * raw_ros_message)
{
  geometry_msgs__msg__Point * ros_message = (geometry_msgs__msg__Point *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("geometry_msgs.msg._point");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Point");

  /* NOTE(esteve): Call constructor of Point */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyx = NULL;
  pyx = PyFloat_FromDouble(ros_message->x);
  assert(pyx != NULL);
  Py_INCREF(pyx);
  PyObject_SetAttrString(_pymessage, "x", pyx);
  PyObject * pyy = NULL;
  pyy = PyFloat_FromDouble(ros_message->y);
  assert(pyy != NULL);
  Py_INCREF(pyy);
  PyObject_SetAttrString(_pymessage, "y", pyy);
  PyObject * pyz = NULL;
  pyz = PyFloat_FromDouble(ros_message->z);
  assert(pyz != NULL);
  Py_INCREF(pyz);
  PyObject_SetAttrString(_pymessage, "z", pyz);
  assert(_pymessage != NULL);
  return _pymessage;
}
