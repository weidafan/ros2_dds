# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'DynamicArrayPrimitives'."""

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
            module = import_type_support('test_communication')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.DynamicArrayPrimitives')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_dynamic_array_primitives
            cls._CONVERT_TO_PY = module.convert_to_py_msg_dynamic_array_primitives
            cls._TYPE_SUPPORT = module.type_support_msg_dynamic_array_primitives
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_dynamic_array_primitives

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DynamicArrayPrimitives(metaclass=Metaclass):
    """Message class 'DynamicArrayPrimitives'."""

    __slots__ = [
        '_bool_values',
        '_byte_values',
        '_char_values',
        '_float32_values',
        '_float64_values',
        '_int8_values',
        '_uint8_values',
        '_int16_values',
        '_uint16_values',
        '_int32_values',
        '_uint32_values',
        '_int64_values',
        '_uint64_values',
        '_string_values',
        '_check',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.bool_values = kwargs.get('bool_values', list())
        self.byte_values = kwargs.get('byte_values', list())
        self.char_values = kwargs.get('char_values', list())
        self.float32_values = kwargs.get('float32_values', list())
        self.float64_values = kwargs.get('float64_values', list())
        self.int8_values = kwargs.get('int8_values', list())
        self.uint8_values = kwargs.get('uint8_values', list())
        self.int16_values = kwargs.get('int16_values', list())
        self.uint16_values = kwargs.get('uint16_values', list())
        self.int32_values = kwargs.get('int32_values', list())
        self.uint32_values = kwargs.get('uint32_values', list())
        self.int64_values = kwargs.get('int64_values', list())
        self.uint64_values = kwargs.get('uint64_values', list())
        self.string_values = kwargs.get('string_values', list())
        self.check = kwargs.get('check', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def bool_values(self):
        """Message field 'bool_values'."""
        return self._bool_values

    @bool_values.setter
    def bool_values(self, value):
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
             all([isinstance(v, bool) for v in value]) and
             True), \
            "The 'bool_values' field must be a set or sequence and each value of type 'bool'"
        self._bool_values = value

    @property
    def byte_values(self):
        """Message field 'byte_values'."""
        return self._byte_values

    @byte_values.setter
    def byte_values(self, value):
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
            "The 'byte_values' field must be a set or sequence and each value of type 'bytes'"
        self._byte_values = value

    @property
    def char_values(self):
        """Message field 'char_values'."""
        return self._char_values

    @char_values.setter
    def char_values(self, value):
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
             all([isinstance(v, str) for v in value]) and
             all([ord(val) >= -128 and ord(val) < 128 for val in value])), \
            "The 'char_values' field must be a set or sequence and each value of type 'str' and each characters ord() in [-128, 128)"
        self._char_values = value

    @property
    def float32_values(self):
        """Message field 'float32_values'."""
        return self._float32_values

    @float32_values.setter
    def float32_values(self, value):
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
             all([isinstance(v, float) for v in value]) and
             True), \
            "The 'float32_values' field must be a set or sequence and each value of type 'float'"
        self._float32_values = value

    @property
    def float64_values(self):
        """Message field 'float64_values'."""
        return self._float64_values

    @float64_values.setter
    def float64_values(self, value):
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
             all([isinstance(v, float) for v in value]) and
             True), \
            "The 'float64_values' field must be a set or sequence and each value of type 'float'"
        self._float64_values = value

    @property
    def int8_values(self):
        """Message field 'int8_values'."""
        return self._int8_values

    @int8_values.setter
    def int8_values(self, value):
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
             all([isinstance(v, int) for v in value]) and
             all([val >= -128 and val < 128 for val in value])), \
            "The 'int8_values' field must be a set or sequence and each value of type 'int' and each integer in [-128, 128)"
        self._int8_values = value

    @property
    def uint8_values(self):
        """Message field 'uint8_values'."""
        return self._uint8_values

    @uint8_values.setter
    def uint8_values(self, value):
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
             all([isinstance(v, int) for v in value]) and
             all([val >= 0 and val < 256 for val in value])), \
            "The 'uint8_values' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 256)"
        self._uint8_values = value

    @property
    def int16_values(self):
        """Message field 'int16_values'."""
        return self._int16_values

    @int16_values.setter
    def int16_values(self, value):
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
             all([isinstance(v, int) for v in value]) and
             all([val >= -32768 and val < 32768 for val in value])), \
            "The 'int16_values' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32768)"
        self._int16_values = value

    @property
    def uint16_values(self):
        """Message field 'uint16_values'."""
        return self._uint16_values

    @uint16_values.setter
    def uint16_values(self, value):
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
             all([isinstance(v, int) for v in value]) and
             all([val >= 0 and val < 65536 for val in value])), \
            "The 'uint16_values' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65536)"
        self._uint16_values = value

    @property
    def int32_values(self):
        """Message field 'int32_values'."""
        return self._int32_values

    @int32_values.setter
    def int32_values(self, value):
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
             all([isinstance(v, int) for v in value]) and
             all([val >= -2147483648 and val < 2147483648 for val in value])), \
            "The 'int32_values' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483648)"
        self._int32_values = value

    @property
    def uint32_values(self):
        """Message field 'uint32_values'."""
        return self._uint32_values

    @uint32_values.setter
    def uint32_values(self, value):
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
             all([isinstance(v, int) for v in value]) and
             all([val >= 0 and val < 4294967296 for val in value])), \
            "The 'uint32_values' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967296)"
        self._uint32_values = value

    @property
    def int64_values(self):
        """Message field 'int64_values'."""
        return self._int64_values

    @int64_values.setter
    def int64_values(self, value):
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
             all([isinstance(v, int) for v in value]) and
             all([val >= -9223372036854775808 and val < 9223372036854775808 for val in value])), \
            "The 'int64_values' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775808)"
        self._int64_values = value

    @property
    def uint64_values(self):
        """Message field 'uint64_values'."""
        return self._uint64_values

    @uint64_values.setter
    def uint64_values(self, value):
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
             all([isinstance(v, int) for v in value]) and
             all([val >= 0 and val < 18446744073709551616 for val in value])), \
            "The 'uint64_values' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551616)"
        self._uint64_values = value

    @property
    def string_values(self):
        """Message field 'string_values'."""
        return self._string_values

    @string_values.setter
    def string_values(self, value):
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
             all([isinstance(v, str) for v in value]) and
             True), \
            "The 'string_values' field must be a set or sequence and each value of type 'str'"
        self._string_values = value

    @property
    def check(self):
        """Message field 'check'."""
        return self._check

    @check.setter
    def check(self, value):
        assert \
            isinstance(value, int), \
            "The 'check' field must of type 'int'"
        assert value >= -2147483648 and value < 2147483648, \
            "The 'check' field must be an integer in [-2147483648, 2147483648)"
        self._check = value
