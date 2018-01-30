// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <geometry_msgs/msg/inertia__struct.h>
#include <geometry_msgs/msg/inertia__functions.h>


void * geometry_msgs_inertia__convert_from_py(PyObject * _pymsg)
{
  geometry_msgs__msg__Inertia * ros_message = geometry_msgs__msg__Inertia__create();
  (void)ros_message;
  char full_classname_dest[35];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "geometry_msgs.msg._inertia.Inertia",
      full_classname_dest, 34) == 0);

  PyObject * pym = PyObject_GetAttrString(_pymsg, "m");
  assert(PyFloat_Check(pym));
  ros_message->m = PyFloat_AS_DOUBLE(pym);
  PyObject * pycom = PyObject_GetAttrString(_pymsg, "com");
  PyObject * pycom_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pycom_msg_class = PyObject_GetAttrString(pycom_msg_module, "Vector3");
  PyObject * pycom_msg_metaclass = PyObject_GetAttrString(pycom_msg_class, "__class__");
  PyObject * pycom_convert_from_py = PyObject_GetAttrString(pycom_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_com = (convert_from_py_signature)PyCapsule_GetPointer(pycom_convert_from_py, NULL);
  geometry_msgs__msg__Vector3 * tmpcom = (geometry_msgs__msg__Vector3 *) convert_from_py_com(pycom);
  if (!tmpcom) {
    return NULL;
  }
  ros_message->com = *tmpcom;
  PyObject * pyixx = PyObject_GetAttrString(_pymsg, "ixx");
  assert(PyFloat_Check(pyixx));
  ros_message->ixx = PyFloat_AS_DOUBLE(pyixx);
  PyObject * pyixy = PyObject_GetAttrString(_pymsg, "ixy");
  assert(PyFloat_Check(pyixy));
  ros_message->ixy = PyFloat_AS_DOUBLE(pyixy);
  PyObject * pyixz = PyObject_GetAttrString(_pymsg, "ixz");
  assert(PyFloat_Check(pyixz));
  ros_message->ixz = PyFloat_AS_DOUBLE(pyixz);
  PyObject * pyiyy = PyObject_GetAttrString(_pymsg, "iyy");
  assert(PyFloat_Check(pyiyy));
  ros_message->iyy = PyFloat_AS_DOUBLE(pyiyy);
  PyObject * pyiyz = PyObject_GetAttrString(_pymsg, "iyz");
  assert(PyFloat_Check(pyiyz));
  ros_message->iyz = PyFloat_AS_DOUBLE(pyiyz);
  PyObject * pyizz = PyObject_GetAttrString(_pymsg, "izz");
  assert(PyFloat_Check(pyizz));
  ros_message->izz = PyFloat_AS_DOUBLE(pyizz);

  assert(ros_message != NULL);
  return ros_message;
}

void geometry_msgs_inertia__destroy_ros_message(void * raw_ros_message)
{
  geometry_msgs__msg__Inertia * ros_message = (geometry_msgs__msg__Inertia *)raw_ros_message;
  (void)ros_message;

  geometry_msgs__msg__Inertia__destroy(ros_message);
}

PyObject * geometry_msgs_inertia__convert_to_py(void * raw_ros_message)
{
  geometry_msgs__msg__Inertia * ros_message = (geometry_msgs__msg__Inertia *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("geometry_msgs.msg._inertia");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Inertia");

  /* NOTE(esteve): Call constructor of Inertia */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pym = NULL;
  pym = PyFloat_FromDouble(ros_message->m);
  assert(pym != NULL);
  Py_INCREF(pym);
  PyObject_SetAttrString(_pymessage, "m", pym);
  PyObject * pycom = NULL;
  PyObject * pycom_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pycom_msg_class = PyObject_GetAttrString(pycom_msg_module, "Vector3");
  PyObject * pycom_msg_metaclass = PyObject_GetAttrString(pycom_msg_class, "__class__");
  PyObject * pycom_convert_to_py = PyObject_GetAttrString(pycom_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_com = (convert_to_py_signature)PyCapsule_GetPointer(pycom_convert_to_py, NULL);
  geometry_msgs__msg__Vector3 pytmpcom = ros_message->com;
  pycom = convert_to_py_com(&pytmpcom);
  if (!pycom) {
    return NULL;
  }
  assert(pycom != NULL);
  Py_INCREF(pycom);
  PyObject_SetAttrString(_pymessage, "com", pycom);
  PyObject * pyixx = NULL;
  pyixx = PyFloat_FromDouble(ros_message->ixx);
  assert(pyixx != NULL);
  Py_INCREF(pyixx);
  PyObject_SetAttrString(_pymessage, "ixx", pyixx);
  PyObject * pyixy = NULL;
  pyixy = PyFloat_FromDouble(ros_message->ixy);
  assert(pyixy != NULL);
  Py_INCREF(pyixy);
  PyObject_SetAttrString(_pymessage, "ixy", pyixy);
  PyObject * pyixz = NULL;
  pyixz = PyFloat_FromDouble(ros_message->ixz);
  assert(pyixz != NULL);
  Py_INCREF(pyixz);
  PyObject_SetAttrString(_pymessage, "ixz", pyixz);
  PyObject * pyiyy = NULL;
  pyiyy = PyFloat_FromDouble(ros_message->iyy);
  assert(pyiyy != NULL);
  Py_INCREF(pyiyy);
  PyObject_SetAttrString(_pymessage, "iyy", pyiyy);
  PyObject * pyiyz = NULL;
  pyiyz = PyFloat_FromDouble(ros_message->iyz);
  assert(pyiyz != NULL);
  Py_INCREF(pyiyz);
  PyObject_SetAttrString(_pymessage, "iyz", pyiyz);
  PyObject * pyizz = NULL;
  pyizz = PyFloat_FromDouble(ros_message->izz);
  assert(pyizz != NULL);
  Py_INCREF(pyizz);
  PyObject_SetAttrString(_pymessage, "izz", pyizz);
  assert(_pymessage != NULL);
  return _pymessage;
}
