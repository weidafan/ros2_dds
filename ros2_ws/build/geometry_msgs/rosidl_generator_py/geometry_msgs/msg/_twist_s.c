// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <geometry_msgs/msg/twist__struct.h>
#include <geometry_msgs/msg/twist__functions.h>


void * geometry_msgs_twist__convert_from_py(PyObject * _pymsg)
{
  geometry_msgs__msg__Twist * ros_message = geometry_msgs__msg__Twist__create();
  (void)ros_message;
  char full_classname_dest[31];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "geometry_msgs.msg._twist.Twist",
      full_classname_dest, 30) == 0);

  PyObject * pylinear = PyObject_GetAttrString(_pymsg, "linear");
  PyObject * pylinear_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pylinear_msg_class = PyObject_GetAttrString(pylinear_msg_module, "Vector3");
  PyObject * pylinear_msg_metaclass = PyObject_GetAttrString(pylinear_msg_class, "__class__");
  PyObject * pylinear_convert_from_py = PyObject_GetAttrString(pylinear_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_linear = (convert_from_py_signature)PyCapsule_GetPointer(pylinear_convert_from_py, NULL);
  geometry_msgs__msg__Vector3 * tmplinear = (geometry_msgs__msg__Vector3 *) convert_from_py_linear(pylinear);
  if (!tmplinear) {
    return NULL;
  }
  ros_message->linear = *tmplinear;
  PyObject * pyangular = PyObject_GetAttrString(_pymsg, "angular");
  PyObject * pyangular_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pyangular_msg_class = PyObject_GetAttrString(pyangular_msg_module, "Vector3");
  PyObject * pyangular_msg_metaclass = PyObject_GetAttrString(pyangular_msg_class, "__class__");
  PyObject * pyangular_convert_from_py = PyObject_GetAttrString(pyangular_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_angular = (convert_from_py_signature)PyCapsule_GetPointer(pyangular_convert_from_py, NULL);
  geometry_msgs__msg__Vector3 * tmpangular = (geometry_msgs__msg__Vector3 *) convert_from_py_angular(pyangular);
  if (!tmpangular) {
    return NULL;
  }
  ros_message->angular = *tmpangular;

  assert(ros_message != NULL);
  return ros_message;
}

void geometry_msgs_twist__destroy_ros_message(void * raw_ros_message)
{
  geometry_msgs__msg__Twist * ros_message = (geometry_msgs__msg__Twist *)raw_ros_message;
  (void)ros_message;

  geometry_msgs__msg__Twist__destroy(ros_message);
}

PyObject * geometry_msgs_twist__convert_to_py(void * raw_ros_message)
{
  geometry_msgs__msg__Twist * ros_message = (geometry_msgs__msg__Twist *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("geometry_msgs.msg._twist");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Twist");

  /* NOTE(esteve): Call constructor of Twist */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pylinear = NULL;
  PyObject * pylinear_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pylinear_msg_class = PyObject_GetAttrString(pylinear_msg_module, "Vector3");
  PyObject * pylinear_msg_metaclass = PyObject_GetAttrString(pylinear_msg_class, "__class__");
  PyObject * pylinear_convert_to_py = PyObject_GetAttrString(pylinear_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_linear = (convert_to_py_signature)PyCapsule_GetPointer(pylinear_convert_to_py, NULL);
  geometry_msgs__msg__Vector3 pytmplinear = ros_message->linear;
  pylinear = convert_to_py_linear(&pytmplinear);
  if (!pylinear) {
    return NULL;
  }
  assert(pylinear != NULL);
  Py_INCREF(pylinear);
  PyObject_SetAttrString(_pymessage, "linear", pylinear);
  PyObject * pyangular = NULL;
  PyObject * pyangular_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pyangular_msg_class = PyObject_GetAttrString(pyangular_msg_module, "Vector3");
  PyObject * pyangular_msg_metaclass = PyObject_GetAttrString(pyangular_msg_class, "__class__");
  PyObject * pyangular_convert_to_py = PyObject_GetAttrString(pyangular_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_angular = (convert_to_py_signature)PyCapsule_GetPointer(pyangular_convert_to_py, NULL);
  geometry_msgs__msg__Vector3 pytmpangular = ros_message->angular;
  pyangular = convert_to_py_angular(&pytmpangular);
  if (!pyangular) {
    return NULL;
  }
  assert(pyangular != NULL);
  Py_INCREF(pyangular);
  PyObject_SetAttrString(_pymessage, "angular", pyangular);
  assert(_pymessage != NULL);
  return _pymessage;
}
