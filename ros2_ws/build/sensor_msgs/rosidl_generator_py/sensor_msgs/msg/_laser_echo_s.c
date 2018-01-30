// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/laser_echo__struct.h>
#include <sensor_msgs/msg/laser_echo__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>


void * sensor_msgs_laser_echo__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__LaserEcho * ros_message = sensor_msgs__msg__LaserEcho__create();
  (void)ros_message;
  char full_classname_dest[38];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._laser_echo.LaserEcho",
      full_classname_dest, 37) == 0);

  PyObject * pyechoes = PyObject_GetAttrString(_pymsg, "echoes");
  assert(PySequence_Check(pyechoes));
  PyObject * seqechoes = PySequence_Fast(pyechoes, "expected a sequence");
  PyObject * itemechoes;
  size_t sizeechoes = PySequence_Size(pyechoes);
  if (!rosidl_generator_c__float32__Array__init(&(ros_message->echoes), sizeechoes)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create float32__Array ros_message");
    return NULL;
  }
  float * destechoes = ros_message->echoes.data;
  float tmpechoes;
  size_t idxechoes;
  for (idxechoes = 0; idxechoes < sizeechoes; idxechoes++) {
    itemechoes = PySequence_Fast_GET_ITEM(seqechoes, idxechoes);
    assert(PyFloat_Check(itemechoes));
    tmpechoes = (float)PyFloat_AS_DOUBLE(itemechoes);
    memcpy(&destechoes[idxechoes], &tmpechoes, sizeof(float));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_laser_echo__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__LaserEcho * ros_message = (sensor_msgs__msg__LaserEcho *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__LaserEcho__destroy(ros_message);
}

PyObject * sensor_msgs_laser_echo__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__LaserEcho * ros_message = (sensor_msgs__msg__LaserEcho *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._laser_echo");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaserEcho");

  /* NOTE(esteve): Call constructor of LaserEcho */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pyechoes = NULL;
  size_t sizeechoes = ros_message->echoes.size;
  float * tmpmessagedataechoes = ros_message->echoes.data;
  pyechoes = PyList_New(sizeechoes);
  size_t idxechoes;
  for (idxechoes = 0; idxechoes < sizeechoes; idxechoes++) {
    PyList_SetItem(pyechoes, idxechoes, PyFloat_FromDouble(tmpmessagedataechoes[idxechoes]));
  }
  assert(PySequence_Check(pyechoes));
  assert(pyechoes != NULL);
  Py_INCREF(pyechoes);
  PyObject_SetAttrString(_pymessage, "echoes", pyechoes);
  assert(_pymessage != NULL);
  return _pymessage;
}
