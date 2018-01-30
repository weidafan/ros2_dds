# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'TF2Error'."""

    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NO_ERROR': 0,
        'LOOKUP_ERROR': 1,
        'CONNECTIVITY_ERROR': 2,
        'EXTRAPOLATION_ERROR': 3,
        'INVALID_ARGUMENT_ERROR': 4,
        'TIMEOUT_ERROR': 5,
        'TRANSFORM_ERROR': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tf2_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.TF2Error')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_tf2_error
            cls._CONVERT_TO_PY = module.convert_to_py_msg_tf2_error
            cls._TYPE_SUPPORT = module.type_support_msg_tf2_error
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_tf2_error

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NO_ERROR': cls.__constants['NO_ERROR'],
            'LOOKUP_ERROR': cls.__constants['LOOKUP_ERROR'],
            'CONNECTIVITY_ERROR': cls.__constants['CONNECTIVITY_ERROR'],
            'EXTRAPOLATION_ERROR': cls.__constants['EXTRAPOLATION_ERROR'],
            'INVALID_ARGUMENT_ERROR': cls.__constants['INVALID_ARGUMENT_ERROR'],
            'TIMEOUT_ERROR': cls.__constants['TIMEOUT_ERROR'],
            'TRANSFORM_ERROR': cls.__constants['TRANSFORM_ERROR'],
        }

    @property
    def NO_ERROR(self):
        """Message constant 'NO_ERROR'."""
        return Metaclass.__constants['NO_ERROR']

    @property
    def LOOKUP_ERROR(self):
        """Message constant 'LOOKUP_ERROR'."""
        return Metaclass.__constants['LOOKUP_ERROR']

    @property
    def CONNECTIVITY_ERROR(self):
        """Message constant 'CONNECTIVITY_ERROR'."""
        return Metaclass.__constants['CONNECTIVITY_ERROR']

    @property
    def EXTRAPOLATION_ERROR(self):
        """Message constant 'EXTRAPOLATION_ERROR'."""
        return Metaclass.__constants['EXTRAPOLATION_ERROR']

    @property
    def INVALID_ARGUMENT_ERROR(self):
        """Message constant 'INVALID_ARGUMENT_ERROR'."""
        return Metaclass.__constants['INVALID_ARGUMENT_ERROR']

    @property
    def TIMEOUT_ERROR(self):
        """Message constant 'TIMEOUT_ERROR'."""
        return Metaclass.__constants['TIMEOUT_ERROR']

    @property
    def TRANSFORM_ERROR(self):
        """Message constant 'TRANSFORM_ERROR'."""
        return Metaclass.__constants['TRANSFORM_ERROR']


class TF2Error(metaclass=Metaclass):
    """
    Message class 'TF2Error'.

    Constants:
      NO_ERROR
      LOOKUP_ERROR
      CONNECTIVITY_ERROR
      EXTRAPOLATION_ERROR
      INVALID_ARGUMENT_ERROR
      TIMEOUT_ERROR
      TRANSFORM_ERROR
    """

    __slots__ = [
        '_error',
        '_error_string',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.error = kwargs.get('error', int())
        self.error_string = kwargs.get('error_string', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        assert \
            isinstance(value, int), \
            "The 'error' field must of type 'int'"
        assert value >= 0 and value < 256, \
            "The 'error' field must be an unsigned integer in [0, 256)"
        self._error = value

    @property
    def error_string(self):
        """Message field 'error_string'."""
        return self._error_string

    @error_string.setter
    def error_string(self, value):
        assert \
            isinstance(value, str), \
            "The 'error_string' field must of type 'str'"
        self._error_string = value
