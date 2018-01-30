# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'ParameterType'."""

    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PARAMETER_NOT_SET': 0,
        'PARAMETER_BOOL': 1,
        'PARAMETER_INTEGER': 2,
        'PARAMETER_DOUBLE': 3,
        'PARAMETER_STRING': 4,
        'PARAMETER_BYTES': 5,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rcl_interfaces')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.ParameterType')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_parameter_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg_parameter_type
            cls._TYPE_SUPPORT = module.type_support_msg_parameter_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_parameter_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PARAMETER_NOT_SET': cls.__constants['PARAMETER_NOT_SET'],
            'PARAMETER_BOOL': cls.__constants['PARAMETER_BOOL'],
            'PARAMETER_INTEGER': cls.__constants['PARAMETER_INTEGER'],
            'PARAMETER_DOUBLE': cls.__constants['PARAMETER_DOUBLE'],
            'PARAMETER_STRING': cls.__constants['PARAMETER_STRING'],
            'PARAMETER_BYTES': cls.__constants['PARAMETER_BYTES'],
        }

    @property
    def PARAMETER_NOT_SET(self):
        """Message constant 'PARAMETER_NOT_SET'."""
        return Metaclass.__constants['PARAMETER_NOT_SET']

    @property
    def PARAMETER_BOOL(self):
        """Message constant 'PARAMETER_BOOL'."""
        return Metaclass.__constants['PARAMETER_BOOL']

    @property
    def PARAMETER_INTEGER(self):
        """Message constant 'PARAMETER_INTEGER'."""
        return Metaclass.__constants['PARAMETER_INTEGER']

    @property
    def PARAMETER_DOUBLE(self):
        """Message constant 'PARAMETER_DOUBLE'."""
        return Metaclass.__constants['PARAMETER_DOUBLE']

    @property
    def PARAMETER_STRING(self):
        """Message constant 'PARAMETER_STRING'."""
        return Metaclass.__constants['PARAMETER_STRING']

    @property
    def PARAMETER_BYTES(self):
        """Message constant 'PARAMETER_BYTES'."""
        return Metaclass.__constants['PARAMETER_BYTES']


class ParameterType(metaclass=Metaclass):
    """
    Message class 'ParameterType'.

    Constants:
      PARAMETER_NOT_SET
      PARAMETER_BOOL
      PARAMETER_INTEGER
      PARAMETER_DOUBLE
      PARAMETER_STRING
      PARAMETER_BYTES
    """

    __slots__ = [
    ]

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))
