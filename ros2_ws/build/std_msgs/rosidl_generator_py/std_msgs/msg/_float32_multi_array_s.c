// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <std_msgs/msg/float32_multi_array__struct.h>
#include <std_msgs/msg/float32_multi_array__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>


void * std_msgs_float32_multi_array__convert_from_py(PyObject * _pymsg)
{
  std_msgs__msg__Float32MultiArray * ros_message = std_msgs__msg__Float32MultiArray__create();
  (void)ros_message;
  char full_classname_dest[52];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "std_msgs.msg._float32_multi_array.Float32MultiArray",
      full_classname_dest, 51) == 0);

  PyObject * pylayout = PyObject_GetAttrString(_pymsg, "layout");
  PyObject * pylayout_msg_module = PyImport_ImportModule("std_msgs.msg._multi_array_layout");
  PyObject * pylayout_msg_class = PyObject_GetAttrString(pylayout_msg_module, "MultiArrayLayout");
  PyObject * pylayout_msg_metaclass = PyObject_GetAttrString(pylayout_msg_class, "__class__");
  PyObject * pylayout_convert_from_py = PyObject_GetAttrString(pylayout_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_layout = (convert_from_py_signature)PyCapsule_GetPointer(pylayout_convert_from_py, NULL);
  std_msgs__msg__MultiArrayLayout * tmplayout = (std_msgs__msg__MultiArrayLayout *) convert_from_py_layout(pylayout);
  if (!tmplayout) {
    return NULL;
  }
  ros_message->layout = *tmplayout;
  PyObject * pydata = PyObject_GetAttrString(_pymsg, "data");
  assert(PySequence_Check(pydata));
  PyObject * seqdata = PySequence_Fast(pydata, "expected a sequence");
  PyObject * itemdata;
  size_t sizedata = PySequence_Size(pydata);
  if (!rosidl_generator_c__float32__Array__init(&(ros_message->data), sizedata)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create float32__Array ros_message");
    return NULL;
  }
  float * destdata = ros_message->data.data;
  float tmpdata;
  size_t idxdata;
  for (idxdata = 0; idxdata < sizedata; idxdata++) {
    itemdata = PySequence_Fast_GET_ITEM(seqdata, idxdata);
    assert(PyFloat_Check(itemdata));
    tmpdata = (float)PyFloat_AS_DOUBLE(itemdata);
    memcpy(&destdata[idxdata], &tmpdata, sizeof(float));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void std_msgs_float32_multi_array__destroy_ros_message(void * raw_ros_message)
{
  std_msgs__msg__Float32MultiArray * ros_message = (std_msgs__msg__Float32MultiArray *)raw_ros_message;
  (void)ros_message;

  std_msgs__msg__Float32MultiArray__destroy(ros_message);
}

PyObject * std_msgs_float32_multi_array__convert_to_py(void * raw_ros_message)
{
  std_msgs__msg__Float32MultiArray * ros_message = (std_msgs__msg__Float32MultiArray *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("std_msgs.msg._float32_multi_array");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Float32MultiArray");

  /* NOTE(esteve): Call constructor of Float32MultiArray */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pylayout = NULL;
  PyObject * pylayout_msg_module = PyImport_ImportModule("std_msgs.msg._multi_array_layout");
  PyObject * pylayout_msg_class = PyObject_GetAttrString(pylayout_msg_module, "MultiArrayLayout");
  PyObject * pylayout_msg_metaclass = PyObject_GetAttrString(pylayout_msg_class, "__class__");
  PyObject * pylayout_convert_to_py = PyObject_GetAttrString(pylayout_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_layout = (convert_to_py_signature)PyCapsule_GetPointer(pylayout_convert_to_py, NULL);
  std_msgs__msg__MultiArrayLayout pytmplayout = ros_message->layout;
  pylayout = convert_to_py_layout(&pytmplayout);
  if (!pylayout) {
    return NULL;
  }
  assert(pylayout != NULL);
  Py_INCREF(pylayout);
  PyObject_SetAttrString(_pymessage, "layout", pylayout);
  PyObject * pydata = NULL;
  size_t sizedata = ros_message->data.size;
  float * tmpmessagedatadata = ros_message->data.data;
  pydata = PyList_New(sizedata);
  size_t idxdata;
  for (idxdata = 0; idxdata < sizedata; idxdata++) {
    PyList_SetItem(pydata, idxdata, PyFloat_FromDouble(tmpmessagedatadata[idxdata]));
  }
  assert(PySequence_Check(pydata));
  assert(pydata != NULL);
  Py_INCREF(pydata);
  PyObject_SetAttrString(_pymessage, "data", pydata);
  assert(_pymessage != NULL);
  return _pymessage;
}
