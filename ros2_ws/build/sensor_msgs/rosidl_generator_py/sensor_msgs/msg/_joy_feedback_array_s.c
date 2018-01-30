// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/joy_feedback_array__struct.h>
#include <sensor_msgs/msg/joy_feedback_array__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <sensor_msgs/msg/joy_feedback__functions.h>
// end nested array functions include

void * sensor_msgs_joy_feedback_array__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__JoyFeedbackArray * ros_message = sensor_msgs__msg__JoyFeedbackArray__create();
  (void)ros_message;
  char full_classname_dest[53];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._joy_feedback_array.JoyFeedbackArray",
      full_classname_dest, 52) == 0);

  PyObject * pyarray = PyObject_GetAttrString(_pymsg, "array");
  PyObject * pyarray_msg_module = PyImport_ImportModule("sensor_msgs.msg._joy_feedback");
  PyObject * pyarray_msg_class = PyObject_GetAttrString(pyarray_msg_module, "JoyFeedback");
  PyObject * pyarray_msg_metaclass = PyObject_GetAttrString(pyarray_msg_class, "__class__");
  PyObject * pyarray_convert_from_py = PyObject_GetAttrString(pyarray_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_array = (convert_from_py_signature)PyCapsule_GetPointer(pyarray_convert_from_py, NULL);
  assert(PySequence_Check(pyarray));
  PyObject * seqarray = PySequence_Fast(pyarray, "expected a sequence");
  sensor_msgs__msg__JoyFeedback * itemarray;
  size_t sizearray = PySequence_Size(pyarray);
  if (!sensor_msgs__msg__JoyFeedback__Array__init(&(ros_message->array), sizearray)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create sensor_msgs__msg__JoyFeedback__Array ros_message");
    return NULL;
  }
  sensor_msgs__msg__JoyFeedback * destarray = ros_message->array.data;
  size_t idxarray;
  for (idxarray = 0; idxarray < sizearray; idxarray++) {
    itemarray = (sensor_msgs__msg__JoyFeedback *) convert_from_py_array(
      PySequence_Fast_GET_ITEM(seqarray, idxarray));
    if (!itemarray) {
      return NULL;
    }
    memcpy(&destarray[idxarray], itemarray, sizeof(sensor_msgs__msg__JoyFeedback));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_joy_feedback_array__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__JoyFeedbackArray * ros_message = (sensor_msgs__msg__JoyFeedbackArray *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__JoyFeedbackArray__destroy(ros_message);
}

PyObject * sensor_msgs_joy_feedback_array__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__JoyFeedbackArray * ros_message = (sensor_msgs__msg__JoyFeedbackArray *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._joy_feedback_array");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JoyFeedbackArray");

  /* NOTE(esteve): Call constructor of JoyFeedbackArray */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyarray = NULL;
  PyObject * pyarray_msg_module = PyImport_ImportModule("sensor_msgs.msg._joy_feedback");
  PyObject * pyarray_msg_class = PyObject_GetAttrString(pyarray_msg_module, "JoyFeedback");
  PyObject * pyarray_msg_metaclass = PyObject_GetAttrString(pyarray_msg_class, "__class__");
  PyObject * pyarray_convert_to_py = PyObject_GetAttrString(pyarray_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_array = (convert_to_py_signature)PyCapsule_GetPointer(pyarray_convert_to_py, NULL);
  size_t sizearray = ros_message->array.size;
  pyarray = PyList_New(sizearray);
  sensor_msgs__msg__JoyFeedback itemarray;
  size_t idxarray;
  for (idxarray = 0; idxarray < sizearray; idxarray++) {
    itemarray = ros_message->array.data[idxarray];
    PyObject * pyitemarray = convert_to_py_array(&itemarray);
    if (!pyitemarray) {
      return NULL;
    }
    PyList_SetItem(pyarray, idxarray, pyitemarray);
  }
  assert(PySequence_Check(pyarray));
  assert(pyarray != NULL);
  Py_INCREF(pyarray);
  PyObject_SetAttrString(_pymessage, "array", pyarray);
  assert(_pymessage != NULL);
  return _pymessage;
}
