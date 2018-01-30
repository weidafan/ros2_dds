// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <geometry_msgs/msg/vector3_stamped__struct.h>
#include <geometry_msgs/msg/vector3_stamped__functions.h>


void * geometry_msgs_vector3_stamped__convert_from_py(PyObject * _pymsg)
{
  geometry_msgs__msg__Vector3Stamped * ros_message = geometry_msgs__msg__Vector3Stamped__create();
  (void)ros_message;
  char full_classname_dest[50];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "geometry_msgs.msg._vector3_stamped.Vector3Stamped",
      full_classname_dest, 49) == 0);

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
  PyObject * pyvector = PyObject_GetAttrString(_pymsg, "vector");
  PyObject * pyvector_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pyvector_msg_class = PyObject_GetAttrString(pyvector_msg_module, "Vector3");
  PyObject * pyvector_msg_metaclass = PyObject_GetAttrString(pyvector_msg_class, "__class__");
  PyObject * pyvector_convert_from_py = PyObject_GetAttrString(pyvector_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_vector = (convert_from_py_signature)PyCapsule_GetPointer(pyvector_convert_from_py, NULL);
  geometry_msgs__msg__Vector3 * tmpvector = (geometry_msgs__msg__Vector3 *) convert_from_py_vector(pyvector);
  if (!tmpvector) {
    return NULL;
  }
  ros_message->vector = *tmpvector;

  assert(ros_message != NULL);
  return ros_message;
}

void geometry_msgs_vector3_stamped__destroy_ros_message(void * raw_ros_message)
{
  geometry_msgs__msg__Vector3Stamped * ros_message = (geometry_msgs__msg__Vector3Stamped *)raw_ros_message;
  (void)ros_message;

  geometry_msgs__msg__Vector3Stamped__destroy(ros_message);
}

PyObject * geometry_msgs_vector3_stamped__convert_to_py(void * raw_ros_message)
{
  geometry_msgs__msg__Vector3Stamped * ros_message = (geometry_msgs__msg__Vector3Stamped *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("geometry_msgs.msg._vector3_stamped");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Vector3Stamped");

  /* NOTE(esteve): Call constructor of Vector3Stamped */
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
  PyObject * pyvector = NULL;
  PyObject * pyvector_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pyvector_msg_class = PyObject_GetAttrString(pyvector_msg_module, "Vector3");
  PyObject * pyvector_msg_metaclass = PyObject_GetAttrString(pyvector_msg_class, "__class__");
  PyObject * pyvector_convert_to_py = PyObject_GetAttrString(pyvector_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_vector = (convert_to_py_signature)PyCapsule_GetPointer(pyvector_convert_to_py, NULL);
  geometry_msgs__msg__Vector3 pytmpvector = ros_message->vector;
  pyvector = convert_to_py_vector(&pytmpvector);
  if (!pyvector) {
    return NULL;
  }
  assert(pyvector != NULL);
  Py_INCREF(pyvector);
  PyObject_SetAttrString(_pymessage, "vector", pyvector);
  assert(_pymessage != NULL);
  return _pymessage;
}
