# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'Time'."""

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
            module = import_type_support('builtin_interfaces')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.Time')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_time
            cls._CONVERT_TO_PY = module.convert_to_py_msg_time
            cls._TYPE_SUPPORT = module.type_support_msg_time
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_time

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Time(metaclass=Metaclass):
    """Message class 'Time'."""

    __slots__ = [
        '_sec',
        '_nanosec',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.sec = kwargs.get('sec', int())
        self.nanosec = kwargs.get('nanosec', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def sec(self):
        """Message field 'sec'."""
        return self._sec

    @sec.setter
    def sec(self, value):
        assert \
            isinstance(value, int), \
            "The 'sec' field must of type 'int'"
        assert value >= -2147483648 and value < 2147483648, \
            "The 'sec' field must be an integer in [-2147483648, 2147483648)"
        self._sec = value

    @property
    def nanosec(self):
        """Message field 'nanosec'."""
        return self._nanosec

    @nanosec.setter
    def nanosec(self, value):
        assert \
            isinstance(value, int), \
            "The 'nanosec' field must of type 'int'"
        assert value >= 0 and value < 4294967296, \
            "The 'nanosec' field must be an unsigned integer in [0, 4294967296)"
        self._nanosec = value
