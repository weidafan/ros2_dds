// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <std_msgs/msg/multi_array_layout__struct.h>
#include <std_msgs/msg/multi_array_layout__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <std_msgs/msg/multi_array_dimension__functions.h>
// end nested array functions include

void * std_msgs_multi_array_layout__convert_from_py(PyObject * _pymsg)
{
  std_msgs__msg__MultiArrayLayout * ros_message = std_msgs__msg__MultiArrayLayout__create();
  (void)ros_message;
  char full_classname_dest[50];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "std_msgs.msg._multi_array_layout.MultiArrayLayout",
      full_classname_dest, 49) == 0);

  PyObject * pydim = PyObject_GetAttrString(_pymsg, "dim");
  PyObject * pydim_msg_module = PyImport_ImportModule("std_msgs.msg._multi_array_dimension");
  PyObject * pydim_msg_class = PyObject_GetAttrString(pydim_msg_module, "MultiArrayDimension");
  PyObject * pydim_msg_metaclass = PyObject_GetAttrString(pydim_msg_class, "__class__");
  PyObject * pydim_convert_from_py = PyObject_GetAttrString(pydim_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_dim = (convert_from_py_signature)PyCapsule_GetPointer(pydim_convert_from_py, NULL);
  assert(PySequence_Check(pydim));
  PyObject * seqdim = PySequence_Fast(pydim, "expected a sequence");
  std_msgs__msg__MultiArrayDimension * itemdim;
  size_t sizedim = PySequence_Size(pydim);
  if (!std_msgs__msg__MultiArrayDimension__Array__init(&(ros_message->dim), sizedim)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create std_msgs__msg__MultiArrayDimension__Array ros_message");
    return NULL;
  }
  std_msgs__msg__MultiArrayDimension * destdim = ros_message->dim.data;
  size_t idxdim;
  for (idxdim = 0; idxdim < sizedim; idxdim++) {
    itemdim = (std_msgs__msg__MultiArrayDimension *) convert_from_py_dim(
      PySequence_Fast_GET_ITEM(seqdim, idxdim));
    if (!itemdim) {
      return NULL;
    }
    memcpy(&destdim[idxdim], itemdim, sizeof(std_msgs__msg__MultiArrayDimension));
  }
  PyObject * pydata_offset = PyObject_GetAttrString(_pymsg, "data_offset");
  assert(PyLong_Check(pydata_offset));
  ros_message->data_offset = PyLong_AsUnsignedLong(pydata_offset);

  assert(ros_message != NULL);
  return ros_message;
}

void std_msgs_multi_array_layout__destroy_ros_message(void * raw_ros_message)
{
  std_msgs__msg__MultiArrayLayout * ros_message = (std_msgs__msg__MultiArrayLayout *)raw_ros_message;
  (void)ros_message;

  std_msgs__msg__MultiArrayLayout__destroy(ros_message);
}

PyObject * std_msgs_multi_array_layout__convert_to_py(void * raw_ros_message)
{
  std_msgs__msg__MultiArrayLayout * ros_message = (std_msgs__msg__MultiArrayLayout *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("std_msgs.msg._multi_array_layout");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MultiArrayLayout");

  /* NOTE(esteve): Call constructor of MultiArrayLayout */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pydim = NULL;
  PyObject * pydim_msg_module = PyImport_ImportModule("std_msgs.msg._multi_array_dimension");
  PyObject * pydim_msg_class = PyObject_GetAttrString(pydim_msg_module, "MultiArrayDimension");
  PyObject * pydim_msg_metaclass = PyObject_GetAttrString(pydim_msg_class, "__class__");
  PyObject * pydim_convert_to_py = PyObject_GetAttrString(pydim_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_dim = (convert_to_py_signature)PyCapsule_GetPointer(pydim_convert_to_py, NULL);
  size_t sizedim = ros_message->dim.size;
  pydim = PyList_New(sizedim);
  std_msgs__msg__MultiArrayDimension itemdim;
  size_t idxdim;
  for (idxdim = 0; idxdim < sizedim; idxdim++) {
    itemdim = ros_message->dim.data[idxdim];
    PyObject * pyitemdim = convert_to_py_dim(&itemdim);
    if (!pyitemdim) {
      return NULL;
    }
    PyList_SetItem(pydim, idxdim, pyitemdim);
  }
  assert(PySequence_Check(pydim));
  assert(pydim != NULL);
  Py_INCREF(pydim);
  PyObject_SetAttrString(_pymessage, "dim", pydim);
  PyObject * pydata_offset = NULL;
  pydata_offset = PyLong_FromUnsignedLong(ros_message->data_offset);
  assert(pydata_offset != NULL);
  Py_INCREF(pydata_offset);
  PyObject_SetAttrString(_pymessage, "data_offset", pydata_offset);
  assert(_pymessage != NULL);
  return _pymessage;
}
