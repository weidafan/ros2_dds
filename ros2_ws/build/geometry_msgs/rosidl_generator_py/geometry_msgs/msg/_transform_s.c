// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <geometry_msgs/msg/transform__struct.h>
#include <geometry_msgs/msg/transform__functions.h>


void * geometry_msgs_transform__convert_from_py(PyObject * _pymsg)
{
  geometry_msgs__msg__Transform * ros_message = geometry_msgs__msg__Transform__create();
  (void)ros_message;
  char full_classname_dest[39];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "geometry_msgs.msg._transform.Transform",
      full_classname_dest, 38) == 0);

  PyObject * pytranslation = PyObject_GetAttrString(_pymsg, "translation");
  PyObject * pytranslation_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pytranslation_msg_class = PyObject_GetAttrString(pytranslation_msg_module, "Vector3");
  PyObject * pytranslation_msg_metaclass = PyObject_GetAttrString(pytranslation_msg_class, "__class__");
  PyObject * pytranslation_convert_from_py = PyObject_GetAttrString(pytranslation_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_translation = (convert_from_py_signature)PyCapsule_GetPointer(pytranslation_convert_from_py, NULL);
  geometry_msgs__msg__Vector3 * tmptranslation = (geometry_msgs__msg__Vector3 *) convert_from_py_translation(pytranslation);
  if (!tmptranslation) {
    return NULL;
  }
  ros_message->translation = *tmptranslation;
  PyObject * pyrotation = PyObject_GetAttrString(_pymsg, "rotation");
  PyObject * pyrotation_msg_module = PyImport_ImportModule("geometry_msgs.msg._quaternion");
  PyObject * pyrotation_msg_class = PyObject_GetAttrString(pyrotation_msg_module, "Quaternion");
  PyObject * pyrotation_msg_metaclass = PyObject_GetAttrString(pyrotation_msg_class, "__class__");
  PyObject * pyrotation_convert_from_py = PyObject_GetAttrString(pyrotation_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_rotation = (convert_from_py_signature)PyCapsule_GetPointer(pyrotation_convert_from_py, NULL);
  geometry_msgs__msg__Quaternion * tmprotation = (geometry_msgs__msg__Quaternion *) convert_from_py_rotation(pyrotation);
  if (!tmprotation) {
    return NULL;
  }
  ros_message->rotation = *tmprotation;

  assert(ros_message != NULL);
  return ros_message;
}

void geometry_msgs_transform__destroy_ros_message(void * raw_ros_message)
{
  geometry_msgs__msg__Transform * ros_message = (geometry_msgs__msg__Transform *)raw_ros_message;
  (void)ros_message;

  geometry_msgs__msg__Transform__destroy(ros_message);
}

PyObject * geometry_msgs_transform__convert_to_py(void * raw_ros_message)
{
  geometry_msgs__msg__Transform * ros_message = (geometry_msgs__msg__Transform *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("geometry_msgs.msg._transform");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Transform");

  /* NOTE(esteve): Call constructor of Transform */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pytranslation = NULL;
  PyObject * pytranslation_msg_module = PyImport_ImportModule("geometry_msgs.msg._vector3");
  PyObject * pytranslation_msg_class = PyObject_GetAttrString(pytranslation_msg_module, "Vector3");
  PyObject * pytranslation_msg_metaclass = PyObject_GetAttrString(pytranslation_msg_class, "__class__");
  PyObject * pytranslation_convert_to_py = PyObject_GetAttrString(pytranslation_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_translation = (convert_to_py_signature)PyCapsule_GetPointer(pytranslation_convert_to_py, NULL);
  geometry_msgs__msg__Vector3 pytmptranslation = ros_message->translation;
  pytranslation = convert_to_py_translation(&pytmptranslation);
  if (!pytranslation) {
    return NULL;
  }
  assert(pytranslation != NULL);
  Py_INCREF(pytranslation);
  PyObject_SetAttrString(_pymessage, "translation", pytranslation);
  PyObject * pyrotation = NULL;
  PyObject * pyrotation_msg_module = PyImport_ImportModule("geometry_msgs.msg._quaternion");
  PyObject * pyrotation_msg_class = PyObject_GetAttrString(pyrotation_msg_module, "Quaternion");
  PyObject * pyrotation_msg_metaclass = PyObject_GetAttrString(pyrotation_msg_class, "__class__");
  PyObject * pyrotation_convert_to_py = PyObject_GetAttrString(pyrotation_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_rotation = (convert_to_py_signature)PyCapsule_GetPointer(pyrotation_convert_to_py, NULL);
  geometry_msgs__msg__Quaternion pytmprotation = ros_message->rotation;
  pyrotation = convert_to_py_rotation(&pytmprotation);
  if (!pyrotation) {
    return NULL;
  }
  assert(pyrotation != NULL);
  Py_INCREF(pyrotation);
  PyObject_SetAttrString(_pymessage, "rotation", pyrotation);
  assert(_pymessage != NULL);
  return _pymessage;
}
