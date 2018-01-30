// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <rcl_interfaces/msg/parameter_event__struct.h>
#include <rcl_interfaces/msg/parameter_event__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

// Nested array functions includes
#include <rcl_interfaces/msg/parameter__functions.h>
// end nested array functions include

void * rcl_interfaces_parameter_event__convert_from_py(PyObject * _pymsg)
{
  rcl_interfaces__msg__ParameterEvent * ros_message = rcl_interfaces__msg__ParameterEvent__create();
  (void)ros_message;
  char full_classname_dest[51];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "rcl_interfaces.msg._parameter_event.ParameterEvent",
      full_classname_dest, 50) == 0);

  PyObject * pynew_parameters = PyObject_GetAttrString(_pymsg, "new_parameters");
  PyObject * pynew_parameters_msg_module = PyImport_ImportModule("rcl_interfaces.msg._parameter");
  PyObject * pynew_parameters_msg_class = PyObject_GetAttrString(pynew_parameters_msg_module, "Parameter");
  PyObject * pynew_parameters_msg_metaclass = PyObject_GetAttrString(pynew_parameters_msg_class, "__class__");
  PyObject * pynew_parameters_convert_from_py = PyObject_GetAttrString(pynew_parameters_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_new_parameters = (convert_from_py_signature)PyCapsule_GetPointer(pynew_parameters_convert_from_py, NULL);
  assert(PySequence_Check(pynew_parameters));
  PyObject * seqnew_parameters = PySequence_Fast(pynew_parameters, "expected a sequence");
  rcl_interfaces__msg__Parameter * itemnew_parameters;
  size_t sizenew_parameters = PySequence_Size(pynew_parameters);
  if (!rcl_interfaces__msg__Parameter__Array__init(&(ros_message->new_parameters), sizenew_parameters)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create rcl_interfaces__msg__Parameter__Array ros_message");
    return NULL;
  }
  rcl_interfaces__msg__Parameter * destnew_parameters = ros_message->new_parameters.data;
  size_t idxnew_parameters;
  for (idxnew_parameters = 0; idxnew_parameters < sizenew_parameters; idxnew_parameters++) {
    itemnew_parameters = (rcl_interfaces__msg__Parameter *) convert_from_py_new_parameters(
      PySequence_Fast_GET_ITEM(seqnew_parameters, idxnew_parameters));
    if (!itemnew_parameters) {
      return NULL;
    }
    memcpy(&destnew_parameters[idxnew_parameters], itemnew_parameters, sizeof(rcl_interfaces__msg__Parameter));
  }
  PyObject * pychanged_parameters = PyObject_GetAttrString(_pymsg, "changed_parameters");
  PyObject * pychanged_parameters_msg_module = PyImport_ImportModule("rcl_interfaces.msg._parameter");
  PyObject * pychanged_parameters_msg_class = PyObject_GetAttrString(pychanged_parameters_msg_module, "Parameter");
  PyObject * pychanged_parameters_msg_metaclass = PyObject_GetAttrString(pychanged_parameters_msg_class, "__class__");
  PyObject * pychanged_parameters_convert_from_py = PyObject_GetAttrString(pychanged_parameters_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_changed_parameters = (convert_from_py_signature)PyCapsule_GetPointer(pychanged_parameters_convert_from_py, NULL);
  assert(PySequence_Check(pychanged_parameters));
  PyObject * seqchanged_parameters = PySequence_Fast(pychanged_parameters, "expected a sequence");
  rcl_interfaces__msg__Parameter * itemchanged_parameters;
  size_t sizechanged_parameters = PySequence_Size(pychanged_parameters);
  if (!rcl_interfaces__msg__Parameter__Array__init(&(ros_message->changed_parameters), sizechanged_parameters)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create rcl_interfaces__msg__Parameter__Array ros_message");
    return NULL;
  }
  rcl_interfaces__msg__Parameter * destchanged_parameters = ros_message->changed_parameters.data;
  size_t idxchanged_parameters;
  for (idxchanged_parameters = 0; idxchanged_parameters < sizechanged_parameters; idxchanged_parameters++) {
    itemchanged_parameters = (rcl_interfaces__msg__Parameter *) convert_from_py_changed_parameters(
      PySequence_Fast_GET_ITEM(seqchanged_parameters, idxchanged_parameters));
    if (!itemchanged_parameters) {
      return NULL;
    }
    memcpy(&destchanged_parameters[idxchanged_parameters], itemchanged_parameters, sizeof(rcl_interfaces__msg__Parameter));
  }
  PyObject * pydeleted_parameters = PyObject_GetAttrString(_pymsg, "deleted_parameters");
  PyObject * pydeleted_parameters_msg_module = PyImport_ImportModule("rcl_interfaces.msg._parameter");
  PyObject * pydeleted_parameters_msg_class = PyObject_GetAttrString(pydeleted_parameters_msg_module, "Parameter");
  PyObject * pydeleted_parameters_msg_metaclass = PyObject_GetAttrString(pydeleted_parameters_msg_class, "__class__");
  PyObject * pydeleted_parameters_convert_from_py = PyObject_GetAttrString(pydeleted_parameters_msg_metaclass, "_CONVERT_FROM_PY");
  typedef PyObject *(* convert_from_py_signature)(void *);
  convert_from_py_signature convert_from_py_deleted_parameters = (convert_from_py_signature)PyCapsule_GetPointer(pydeleted_parameters_convert_from_py, NULL);
  assert(PySequence_Check(pydeleted_parameters));
  PyObject * seqdeleted_parameters = PySequence_Fast(pydeleted_parameters, "expected a sequence");
  rcl_interfaces__msg__Parameter * itemdeleted_parameters;
  size_t sizedeleted_parameters = PySequence_Size(pydeleted_parameters);
  if (!rcl_interfaces__msg__Parameter__Array__init(&(ros_message->deleted_parameters), sizedeleted_parameters)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create rcl_interfaces__msg__Parameter__Array ros_message");
    return NULL;
  }
  rcl_interfaces__msg__Parameter * destdeleted_parameters = ros_message->deleted_parameters.data;
  size_t idxdeleted_parameters;
  for (idxdeleted_parameters = 0; idxdeleted_parameters < sizedeleted_parameters; idxdeleted_parameters++) {
    itemdeleted_parameters = (rcl_interfaces__msg__Parameter *) convert_from_py_deleted_parameters(
      PySequence_Fast_GET_ITEM(seqdeleted_parameters, idxdeleted_parameters));
    if (!itemdeleted_parameters) {
      return NULL;
    }
    memcpy(&destdeleted_parameters[idxdeleted_parameters], itemdeleted_parameters, sizeof(rcl_interfaces__msg__Parameter));
  }

  assert(ros_message != NULL);
  return ros_message;
}

void rcl_interfaces_parameter_event__destroy_ros_message(void * raw_ros_message)
{
  rcl_interfaces__msg__ParameterEvent * ros_message = (rcl_interfaces__msg__ParameterEvent *)raw_ros_message;
  (void)ros_message;

  rcl_interfaces__msg__ParameterEvent__destroy(ros_message);
}

PyObject * rcl_interfaces_parameter_event__convert_to_py(void * raw_ros_message)
{
  rcl_interfaces__msg__ParameterEvent * ros_message = (rcl_interfaces__msg__ParameterEvent *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("rcl_interfaces.msg._parameter_event");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ParameterEvent");

  /* NOTE(esteve): Call constructor of ParameterEvent */
  PyObject * _pymessage = NULL;
  _pymessage = PyObject_CallObject(pymessage_class, NULL);
  assert(_pymessage != NULL);

  PyObject * pynew_parameters = NULL;
  PyObject * pynew_parameters_msg_module = PyImport_ImportModule("rcl_interfaces.msg._parameter");
  PyObject * pynew_parameters_msg_class = PyObject_GetAttrString(pynew_parameters_msg_module, "Parameter");
  PyObject * pynew_parameters_msg_metaclass = PyObject_GetAttrString(pynew_parameters_msg_class, "__class__");
  PyObject * pynew_parameters_convert_to_py = PyObject_GetAttrString(pynew_parameters_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_new_parameters = (convert_to_py_signature)PyCapsule_GetPointer(pynew_parameters_convert_to_py, NULL);
  size_t sizenew_parameters = ros_message->new_parameters.size;
  pynew_parameters = PyList_New(sizenew_parameters);
  rcl_interfaces__msg__Parameter itemnew_parameters;
  size_t idxnew_parameters;
  for (idxnew_parameters = 0; idxnew_parameters < sizenew_parameters; idxnew_parameters++) {
    itemnew_parameters = ros_message->new_parameters.data[idxnew_parameters];
    PyObject * pyitemnew_parameters = convert_to_py_new_parameters(&itemnew_parameters);
    if (!pyitemnew_parameters) {
      return NULL;
    }
    PyList_SetItem(pynew_parameters, idxnew_parameters, pyitemnew_parameters);
  }
  assert(PySequence_Check(pynew_parameters));
  assert(pynew_parameters != NULL);
  Py_INCREF(pynew_parameters);
  PyObject_SetAttrString(_pymessage, "new_parameters", pynew_parameters);
  PyObject * pychanged_parameters = NULL;
  PyObject * pychanged_parameters_msg_module = PyImport_ImportModule("rcl_interfaces.msg._parameter");
  PyObject * pychanged_parameters_msg_class = PyObject_GetAttrString(pychanged_parameters_msg_module, "Parameter");
  PyObject * pychanged_parameters_msg_metaclass = PyObject_GetAttrString(pychanged_parameters_msg_class, "__class__");
  PyObject * pychanged_parameters_convert_to_py = PyObject_GetAttrString(pychanged_parameters_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_changed_parameters = (convert_to_py_signature)PyCapsule_GetPointer(pychanged_parameters_convert_to_py, NULL);
  size_t sizechanged_parameters = ros_message->changed_parameters.size;
  pychanged_parameters = PyList_New(sizechanged_parameters);
  rcl_interfaces__msg__Parameter itemchanged_parameters;
  size_t idxchanged_parameters;
  for (idxchanged_parameters = 0; idxchanged_parameters < sizechanged_parameters; idxchanged_parameters++) {
    itemchanged_parameters = ros_message->changed_parameters.data[idxchanged_parameters];
    PyObject * pyitemchanged_parameters = convert_to_py_changed_parameters(&itemchanged_parameters);
    if (!pyitemchanged_parameters) {
      return NULL;
    }
    PyList_SetItem(pychanged_parameters, idxchanged_parameters, pyitemchanged_parameters);
  }
  assert(PySequence_Check(pychanged_parameters));
  assert(pychanged_parameters != NULL);
  Py_INCREF(pychanged_parameters);
  PyObject_SetAttrString(_pymessage, "changed_parameters", pychanged_parameters);
  PyObject * pydeleted_parameters = NULL;
  PyObject * pydeleted_parameters_msg_module = PyImport_ImportModule("rcl_interfaces.msg._parameter");
  PyObject * pydeleted_parameters_msg_class = PyObject_GetAttrString(pydeleted_parameters_msg_module, "Parameter");
  PyObject * pydeleted_parameters_msg_metaclass = PyObject_GetAttrString(pydeleted_parameters_msg_class, "__class__");
  PyObject * pydeleted_parameters_convert_to_py = PyObject_GetAttrString(pydeleted_parameters_msg_metaclass, "_CONVERT_TO_PY");
  typedef PyObject *(* convert_to_py_signature)(void *);
  convert_to_py_signature convert_to_py_deleted_parameters = (convert_to_py_signature)PyCapsule_GetPointer(pydeleted_parameters_convert_to_py, NULL);
  size_t sizedeleted_parameters = ros_message->deleted_parameters.size;
  pydeleted_parameters = PyList_New(sizedeleted_parameters);
  rcl_interfaces__msg__Parameter itemdeleted_parameters;
  size_t idxdeleted_parameters;
  for (idxdeleted_parameters = 0; idxdeleted_parameters < sizedeleted_parameters; idxdeleted_parameters++) {
    itemdeleted_parameters = ros_message->deleted_parameters.data[idxdeleted_parameters];
    PyObject * pyitemdeleted_parameters = convert_to_py_deleted_parameters(&itemdeleted_parameters);
    if (!pyitemdeleted_parameters) {
      return NULL;
    }
    PyList_SetItem(pydeleted_parameters, idxdeleted_parameters, pyitemdeleted_parameters);
  }
  assert(PySequence_Check(pydeleted_parameters));
  assert(pydeleted_parameters != NULL);
  Py_INCREF(pydeleted_parameters);
  PyObject_SetAttrString(_pymessage, "deleted_parameters", pydeleted_parameters);
  assert(_pymessage != NULL);
  return _pymessage;
}
