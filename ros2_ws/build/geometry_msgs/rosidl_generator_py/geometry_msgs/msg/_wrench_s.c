// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <geometry_msgs/msg/wrench__struct.h>
#include <geometry_msgs/msg/wrench__functions.h>


void * geometry_msgs_wrench__convert_from_py(PyObject * _pymsg)
{
  geometry_msgs__msg__Wrench * ros_message = geometry_msgs__msg__Wrench__create();
  (void)ros_message;
  char full_classname_dest[33];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "geometry_msgs.msg._wrench.Wrench",
      full_classname_dest, 32) == 0);

  PyObject * pyforce = PyObject_GetAttrString(_pymsg, "force");
  PyObject * pyforce_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pyforce_msg_class = PyObject_GetAttrString(pyforce_msg_module, "Vector3");
  PyObject * pyforce_msg_metaclass = PyObject_GetAttrString(pyforce_msg_class, "__class__");
  PyObject * pyforce_convert_from_py = PyObject_GetAttrString(pyforce_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_force = (convert_from_py_signature)PyCapsule_GetPointer(pyforce_convert_from_py, NULL);
  geometry_msgs__msg__Vector3 * tmpforce = (geometry_msgs__msg__Vector3 *) convert_from_py_force(pyforce);
  if (!tmpforce) {
    return NULL;
  }
  ros_message->force = *tmpforce;
  PyObject * pytorque = PyObject_GetAttrString(_pymsg, "torque");
  PyObject * pytorque_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pytorque_msg_class = PyObject_GetAttrString(pytorque_msg_module, "Vector3");
  PyObject * pytorque_msg_metaclass = PyObject_GetAttrString(pytorque_msg_class, "__class__");
  PyObject * pytorque_convert_from_py = PyObject_GetAttrString(pytorque_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_torque = (convert_from_py_signature)PyCapsule_GetPointer(pytorque_convert_from_py, NULL);
  geometry_msgs__msg__Vector3 * tmptorque = (geometry_msgs__msg__Vector3 *) convert_from_py_torque(pytorque);
  if (!tmptorque) {
    return NULL;
  }
  ros_message->torque = *tmptorque;

  assert(ros_message != NULL);
  return ros_message;
}

void geometry_msgs_wrench__destroy_ros_message(void * raw_ros_message)
{
  geometry_msgs__msg__Wrench * ros_message = (geometry_msgs__msg__Wrench *)raw_ros_message;
  (void)ros_message;

  geometry_msgs__msg__Wrench__destroy(ros_message);
}

PyObject * geometry_msgs_wrench__convert_to_py(void * raw_ros_message)
{
  geometry_msgs__msg__Wrench * ros_message = (geometry_msgs__msg__Wrench *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("geometry_msgs.msg._wrench");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Wrench");

  /* NOTE(esteve): Call constructor of Wrench */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyforce = NULL;
  PyObject * pyforce_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pyforce_msg_class = PyObject_GetAttrString(pyforce_msg_module, "Vector3");
  PyObject * pyforce_msg_metaclass = PyObject_GetAttrString(pyforce_msg_class, "__class__");
  PyObject * pyforce_convert_to_py = PyObject_GetAttrString(pyforce_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_force = (convert_to_py_signature)PyCapsule_GetPointer(pyforce_convert_to_py, NULL);
  geometry_msgs__msg__Vector3 pytmpforce = ros_message->force;
  pyforce = convert_to_py_force(&pytmpforce);
  if (!pyforce) {
    return NULL;
  }
  assert(pyforce != NULL);
  Py_INCREF(pyforce);
  PyObject_SetAttrString(_pymessage, "force", pyforce);
  PyObject * pytorque = NULL;
  PyObject * pytorque_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pytorque_msg_class = PyObject_GetAttrString(pytorque_msg_module, "Vector3");
  PyObject * pytorque_msg_metaclass = PyObject_GetAttrString(pytorque_msg_class, "__class__");
  PyObject * pytorque_convert_to_py = PyObject_GetAttrString(pytorque_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_torque = (convert_to_py_signature)PyCapsule_GetPointer(pytorque_convert_to_py, NULL);
  geometry_msgs__msg__Vector3 pytmptorque = ros_message->torque;
  pytorque = convert_to_py_torque(&pytmptorque);
  if (!pytorque) {
    return NULL;
  }
  assert(pytorque != NULL);
  Py_INCREF(pytorque);
  PyObject_SetAttrString(_pymessage, "torque", pytorque);
  assert(_pymessage != NULL);
  return _pymessage;
}
