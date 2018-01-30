// generated from rosidl_generator_py/resource/_msg_support.c.em
// generated code does not contain a copyright notice

#include <Python.h>

#include <sensor_msgs/msg/battery_state__struct.h>
#include <sensor_msgs/msg/battery_state__functions.h>

#include <rosidl_generator_c/primitives_array.h>
#include <rosidl_generator_c/primitives_array_functions.h>

#include <rosidl_generator_c/string.h>
#include <rosidl_generator_c/string_functions.h>


void * sensor_msgs_battery_state__convert_from_py(PyObject * _pymsg)
{
  sensor_msgs__msg__BatteryState * ros_message = sensor_msgs__msg__BatteryState__create();
  (void)ros_message;
  char full_classname_dest[44];

  char * class_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__name__"));
  char * module_name = (char *)PyUnicode_1BYTE_DATA(
    PyObject_GetAttrString(PyObject_GetAttrString(_pymsg, "__class__"), "__module__"));

  snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);

  assert(strncmp(
      "sensor_msgs.msg._battery_state.BatteryState",
      full_classname_dest, 43) == 0);

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
  PyObject * pyvoltage = PyObject_GetAttrString(_pymsg, "voltage");
  assert(PyFloat_Check(pyvoltage));
  ros_message->voltage = (float)PyFloat_AS_DOUBLE(pyvoltage);
  PyObject * pycurrent = PyObject_GetAttrString(_pymsg, "current");
  assert(PyFloat_Check(pycurrent));
  ros_message->current = (float)PyFloat_AS_DOUBLE(pycurrent);
  PyObject * pycharge = PyObject_GetAttrString(_pymsg, "charge");
  assert(PyFloat_Check(pycharge));
  ros_message->charge = (float)PyFloat_AS_DOUBLE(pycharge);
  PyObject * pycapacity = PyObject_GetAttrString(_pymsg, "capacity");
  assert(PyFloat_Check(pycapacity));
  ros_message->capacity = (float)PyFloat_AS_DOUBLE(pycapacity);
  PyObject * pydesign_capacity = PyObject_GetAttrString(_pymsg, "design_capacity");
  assert(PyFloat_Check(pydesign_capacity));
  ros_message->design_capacity = (float)PyFloat_AS_DOUBLE(pydesign_capacity);
  PyObject * pypercentage = PyObject_GetAttrString(_pymsg, "percentage");
  assert(PyFloat_Check(pypercentage));
  ros_message->percentage = (float)PyFloat_AS_DOUBLE(pypercentage);
  PyObject * pypower_supply_status = PyObject_GetAttrString(_pymsg, "power_supply_status");
  assert(PyLong_Check(pypower_supply_status));
  ros_message->power_supply_status = (uint8_t)PyLong_AsUnsignedLong(pypower_supply_status);
  PyObject * pypower_supply_health = PyObject_GetAttrString(_pymsg, "power_supply_health");
  assert(PyLong_Check(pypower_supply_health));
  ros_message->power_supply_health = (uint8_t)PyLong_AsUnsignedLong(pypower_supply_health);
  PyObject * pypower_supply_technology = PyObject_GetAttrString(_pymsg, "power_supply_technology");
  assert(PyLong_Check(pypower_supply_technology));
  ros_message->power_supply_technology = (uint8_t)PyLong_AsUnsignedLong(pypower_supply_technology);
  PyObject * pypresent = PyObject_GetAttrString(_pymsg, "present");
  assert(PyBool_Check(pypresent));
  ros_message->present = (Py_True == pypresent);
  PyObject * pycell_voltage = PyObject_GetAttrString(_pymsg, "cell_voltage");
  assert(PySequence_Check(pycell_voltage));
  PyObject * seqcell_voltage = PySequence_Fast(pycell_voltage, "expected a sequence");
  PyObject * itemcell_voltage;
  size_t sizecell_voltage = PySequence_Size(pycell_voltage);
  if (!rosidl_generator_c__float32__Array__init(&(ros_message->cell_voltage), sizecell_voltage)) {
    PyErr_SetString(PyExc_RuntimeError, "unable to create float32__Array ros_message");
    return NULL;
  }
  float * destcell_voltage = ros_message->cell_voltage.data;
  float tmpcell_voltage;
  size_t idxcell_voltage;
  for (idxcell_voltage = 0; idxcell_voltage < sizecell_voltage; idxcell_voltage++) {
    itemcell_voltage = PySequence_Fast_GET_ITEM(seqcell_voltage, idxcell_voltage);
    assert(PyFloat_Check(itemcell_voltage));
    tmpcell_voltage = (float)PyFloat_AS_DOUBLE(itemcell_voltage);
    memcpy(&destcell_voltage[idxcell_voltage], &tmpcell_voltage, sizeof(float));
  }
  PyObject * pylocation = PyObject_GetAttrString(_pymsg, "location");
  assert(PyUnicode_Check(pylocation));
  rosidl_generator_c__String__assign(
    &ros_message->location, (char *)PyUnicode_1BYTE_DATA(pylocation));
  PyObject * pyserial_number = PyObject_GetAttrString(_pymsg, "serial_number");
  assert(PyUnicode_Check(pyserial_number));
  rosidl_generator_c__String__assign(
    &ros_message->serial_number, (char *)PyUnicode_1BYTE_DATA(pyserial_number));

  assert(ros_message != NULL);
  return ros_message;
}

void sensor_msgs_battery_state__destroy_ros_message(void * raw_ros_message)
{
  sensor_msgs__msg__BatteryState * ros_message = (sensor_msgs__msg__BatteryState *)raw_ros_message;
  (void)ros_message;

  sensor_msgs__msg__BatteryState__destroy(ros_message);
}

PyObject * sensor_msgs_battery_state__convert_to_py(void * raw_ros_message)
{
  sensor_msgs__msg__BatteryState * ros_message = (sensor_msgs__msg__BatteryState *)raw_ros_message;
  (void)ros_message;

  PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._battery_state");
  PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BatteryState");

  /* NOTE(esteve): Call constructor of BatteryState */
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
  PyObject * pyvoltage = NULL;
  pyvoltage = PyFloat_FromDouble(ros_message->voltage);
  assert(pyvoltage != NULL);
  Py_INCREF(pyvoltage);
  PyObject_SetAttrString(_pymessage, "voltage", pyvoltage);
  PyObject * pycurrent = NULL;
  pycurrent = PyFloat_FromDouble(ros_message->current);
  assert(pycurrent != NULL);
  Py_INCREF(pycurrent);
  PyObject_SetAttrString(_pymessage, "current", pycurrent);
  PyObject * pycharge = NULL;
  pycharge = PyFloat_FromDouble(ros_message->charge);
  assert(pycharge != NULL);
  Py_INCREF(pycharge);
  PyObject_SetAttrString(_pymessage, "charge", pycharge);
  PyObject * pycapacity = NULL;
  pycapacity = PyFloat_FromDouble(ros_message->capacity);
  assert(pycapacity != NULL);
  Py_INCREF(pycapacity);
  PyObject_SetAttrString(_pymessage, "capacity", pycapacity);
  PyObject * pydesign_capacity = NULL;
  pydesign_capacity = PyFloat_FromDouble(ros_message->design_capacity);
  assert(pydesign_capacity != NULL);
  Py_INCREF(pydesign_capacity);
  PyObject_SetAttrString(_pymessage, "design_capacity", pydesign_capacity);
  PyObject * pypercentage = NULL;
  pypercentage = PyFloat_FromDouble(ros_message->percentage);
  assert(pypercentage != NULL);
  Py_INCREF(pypercentage);
  PyObject_SetAttrString(_pymessage, "percentage", pypercentage);
  PyObject * pypower_supply_status = NULL;
  pypower_supply_status = PyLong_FromUnsignedLong(ros_message->power_supply_status);
  assert(pypower_supply_status != NULL);
  Py_INCREF(pypower_supply_status);
  PyObject_SetAttrString(_pymessage, "power_supply_status", pypower_supply_status);
  PyObject * pypower_supply_health = NULL;
  pypower_supply_health = PyLong_FromUnsignedLong(ros_message->power_supply_health);
  assert(pypower_supply_health != NULL);
  Py_INCREF(pypower_supply_health);
  PyObject_SetAttrString(_pymessage, "power_supply_health", pypower_supply_health);
  PyObject * pypower_supply_technology = NULL;
  pypower_supply_technology = PyLong_FromUnsignedLong(ros_message->power_supply_technology);
  assert(pypower_supply_technology != NULL);
  Py_INCREF(pypower_supply_technology);
  PyObject_SetAttrString(_pymessage, "power_supply_technology", pypower_supply_technology);
  PyObject * pypresent = NULL;
  pypresent = ros_message->present ? Py_True : Py_False;
  assert(pypresent != NULL);
  Py_INCREF(pypresent);
  PyObject_SetAttrString(_pymessage, "present", pypresent);
  PyObject * pycell_voltage = NULL;
  size_t sizecell_voltage = ros_message->cell_voltage.size;
  float * tmpmessagedatacell_voltage = ros_message->cell_voltage.data;
  pycell_voltage = PyList_New(sizecell_voltage);
  size_t idxcell_voltage;
  for (idxcell_voltage = 0; idxcell_voltage < sizecell_voltage; idxcell_voltage++) {
    PyList_SetItem(pycell_voltage, idxcell_voltage, PyFloat_FromDouble(tmpmessagedatacell_voltage[idxcell_voltage]));
  }
  assert(PySequence_Check(pycell_voltage));
  assert(pycell_voltage != NULL);
  Py_INCREF(pycell_voltage);
  PyObject_SetAttrString(_pymessage, "cell_voltage", pycell_voltage);
  PyObject * pylocation = NULL;
  pylocation = PyUnicode_FromString(ros_message->location.data);
  assert(pylocation != NULL);
  Py_INCREF(pylocation);
  PyObject_SetAttrString(_pymessage, "location", pylocation);
  PyObject * pyserial_number = NULL;
  pyserial_number = PyUnicode_FromString(ros_message->serial_number.data);
  assert(pyserial_number != NULL);
  Py_INCREF(pyserial_number);
  PyObject_SetAttrString(_pymessage, "serial_number", pyserial_number);
  assert(_pymessage != NULL);
  return _pymessage;
}
