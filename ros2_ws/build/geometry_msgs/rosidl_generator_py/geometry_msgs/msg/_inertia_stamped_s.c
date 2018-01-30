// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <geometry_msgs/msg/inertia_stamped__struct.h>
#include <geometry_msgs/msg/inertia_stamped__functions.h>


void * geometry_msgs_inertia_stamped__convert_from_py(PyObject * _pymsg)
{
  geometry_msgs__msg__InertiaStamped * ros_message = geometry_msgs__msg__InertiaStamped__create();
  (void)ros_message;
  char full_classname_dest[50];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "geometry_msgs.msg._inertia_stamped.InertiaStamped",
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
  PyObject * pyinertia = PyObject_GetAttrString(_pymsg, "inertia");
  PyObject * pyinertia_msg_module = PyImport_ImportModule("geometry_msgs.msg._inertia");
  PyObject * pyinertia_msg_class = PyObject_GetAttrString(pyinertia_msg_module, "Inertia");
  PyObject * pyinertia_msg_metaclass = PyObject_GetAttrString(pyinertia_msg_class, "__class__");
  PyObject * pyinertia_convert_from_py = PyObject_GetAttrString(pyinertia_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_inertia = (convert_from_py_signature)PyCapsule_GetPointer(pyinertia_convert_from_py, NULL);
  geometry_msgs__msg__Inertia * tmpinertia = (geometry_msgs__msg__Inertia *) convert_from_py_inertia(pyinertia);
  if (!tmpinertia) {
    return NULL;
  }
  ros_message->inertia = *tmpinertia;

  assert(ros_message != NULL);
  return ros_message;
}

void geometry_msgs_inertia_stamped__destroy_ros_message(void * raw_ros_message)
{
  geometry_msgs__msg__InertiaStamped * ros_message = (geometry_msgs__msg__InertiaStamped *)raw_ros_message;
  (void)ros_message;

  geometry_msgs__msg__InertiaStamped__destroy(ros_message);
}

PyObject * geometry_msgs_inertia_stamped__convert_to_py(void * raw_ros_message)
{
  geometry_msgs__msg__InertiaStamped * ros_message = (geometry_msgs__msg__InertiaStamped *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("geometry_msgs.msg._inertia_stamped");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InertiaStamped");

  /* NOTE(esteve): Call constructor of InertiaStamped */
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
  PyObject * pyinertia = NULL;
  PyObject * pyinertia_msg_module = PyImport_ImportModule("geometry_msgs.msg._inertia");
  PyObject * pyinertia_msg_class = PyObject_GetAttrString(pyinertia_msg_module, "Inertia");
  PyObject * pyinertia_msg_metaclass = PyObject_GetAttrString(pyinertia_msg_class, "__class__");
  PyObject * pyinertia_convert_to_py = PyObject_GetAttrString(pyinertia_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_inertia = (convert_to_py_signature)PyCapsule_GetPointer(pyinertia_convert_to_py, NULL);
  geometry_msgs__msg__Inertia pytmpinertia = ros_message->inertia;
  pyinertia = convert_to_py_inertia(&pytmpinertia);
  if (!pyinertia) {
    return NULL;
  }
  assert(pyinertia != NULL);
  Py_INCREF(pyinertia);
  PyObject_SetAttrString(_pymessage, "inertia", pyinertia);
  assert(_pymessage != NULL);
  return _pymessage;
}
