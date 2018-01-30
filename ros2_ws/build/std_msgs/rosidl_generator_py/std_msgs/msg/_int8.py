# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'Int8'."""

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
            module = import_type_support('std_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.Int8')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_int8
            cls._CONVERT_TO_PY = module.convert_to_py_msg_int8
            cls._TYPE_SUPPORT = module.type_support_msg_int8
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_int8

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Int8(metaclass=Metaclass):
    """Message class 'Int8'."""

    __slots__ = [
        '_data',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.data = kwargs.get('data', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        assert \
            isinstance(value, int), \
            "The 'data' field must of type 'int'"
        assert value >= -128 and value < 128, \
            "The 'data' field must be an integer in [-128, 128)"
        self._data = value