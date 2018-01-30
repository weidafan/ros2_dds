# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'ParameterDescriptor'."""

    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rcl_interfaces')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.ParameterDescriptor')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_parameter_descriptor
            cls._CONVERT_TO_PY = module.convert_to_py_msg_parameter_descriptor
            cls._TYPE_SUPPORT = module.type_support_msg_parameter_descriptor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_parameter_descriptor

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParameterDescriptor(metaclass=Metaclass):
    """Message class 'ParameterDescriptor'."""

    __slots__ = [
        '_name',
        '_type',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.name = kwargs.get('name', str())
        self.type = kwargs.get('type', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        assert \
            isinstance(value, str), \
            "The 'name' field must of type 'str'"
        self._name = value

    @property
    def type(self):
        """Message field 'type'."""
        return self._type

    @type.setter
    def type(self, value):
        assert \
            isinstance(value, int), \
            "The 'type' field must of type 'int'"
        assert value >= 0 and value < 256, \
            "The 'type' field must be an unsigned integer in [0, 256)"
        self._type = value
