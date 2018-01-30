# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'ParameterValue'."""

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
            logger = logging.getLogger('rosidl_generator_py.ParameterValue')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_parameter_value
            cls._CONVERT_TO_PY = module.convert_to_py_msg_parameter_value
            cls._TYPE_SUPPORT = module.type_support_msg_parameter_value
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_parameter_value

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParameterValue(metaclass=Metaclass):
    """Message class 'ParameterValue'."""

    __slots__ = [
        '_type',
        '_bool_value',
        '_integer_value',
        '_double_value',
        '_string_value',
        '_bytes_value',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.type = kwargs.get('type', int())
        self.bool_value = kwargs.get('bool_value', bool())
        self.integer_value = kwargs.get('integer_value', int())
        self.double_value = kwargs.get('double_value', float())
        self.string_value = kwargs.get('string_value', str())
        self.bytes_value = kwargs.get('bytes_value', list())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

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

    @property
    def bool_value(self):
        """Message field 'bool_value'."""
        return self._bool_value

    @bool_value.setter
    def bool_value(self, value):
        assert \
            isinstance(value, bool), \
            "The 'bool_value' field must of type 'bool'"
        self._bool_value = value

    @property
    def integer_value(self):
        """Message field 'integer_value'."""
        return self._integer_value

    @integer_value.setter
    def integer_value(self, value):
        assert \
            isinstance(value, int), \
            "The 'integer_value' field must of type 'int'"
        assert value >= -9223372036854775808 and value < 9223372036854775808, \
            "The 'integer_value' field must be an integer in [-9223372036854775808, 9223372036854775808)"
        self._integer_value = value

    @property
    def double_value(self):
        """Message field 'double_value'."""
        return self._double_value

    @double_value.setter
    def double_value(self, value):
        assert \
            isinstance(value, float), \
            "The 'double_value' field must of type 'float'"
        self._double_value = value

    @property
    def string_value(self):
        """Message field 'string_value'."""
        return self._string_value

    @string_value.setter
    def string_value(self, value):
        assert \
            isinstance(value, str), \
            "The 'string_value' field must of type 'str'"
        self._string_value = value

    @property
    def bytes_value(self):
        """Message field 'bytes_value'."""
        return self._bytes_value

    @bytes_value.setter
    def bytes_value(self, value):
        from collections import Sequence
        from collections import Set
        from collections import UserList
        from collections import UserString
        assert \
            ((isinstance(value, Sequence) or
              isinstance(value, Set) or
              isinstance(value, UserList)) and
             not isinstance(value, str) and
             not isinstance(value, UserString) and
             all([isinstance(v, bytes) for v in value]) and
             True), \
            "The 'bytes_value' field must be a set or sequence and each value of type 'bytes'"
        self._bytes_value = value
