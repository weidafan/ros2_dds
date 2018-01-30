# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'Primitives'."""

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
            logger = logging.getLogger('rosidl_generator_py.Primitives')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_primitives
            cls._CONVERT_TO_PY = module.convert_to_py_msg_primitives
            cls._TYPE_SUPPORT = module.type_support_msg_primitives
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_primitives

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Primitives(metaclass=Metaclass):
    """Message class 'Primitives'."""

    __slots__ = [
        '_bool_value',
        '_byte_value',
        '_char_value',
        '_float32_value',
        '_float64_value',
        '_int8_value',
        '_uint8_value',
        '_int16_value',
        '_uint16_value',
        '_int32_value',
        '_uint32_value',
        '_int64_value',
        '_uint64_value',
        '_string_value',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.bool_value = kwargs.get('bool_value', bool())
        self.byte_value = kwargs.get('byte_value', bytes([0]))
        self.char_value = kwargs.get('char_value', chr(0))
        self.float32_value = kwargs.get('float32_value', float())
        self.float64_value = kwargs.get('float64_value', float())
        self.int8_value = kwargs.get('int8_value', int())
        self.uint8_value = kwargs.get('uint8_value', int())
        self.int16_value = kwargs.get('int16_value', int())
        self.uint16_value = kwargs.get('uint16_value', int())
        self.int32_value = kwargs.get('int32_value', int())
        self.uint32_value = kwargs.get('uint32_value', int())
        self.int64_value = kwargs.get('int64_value', int())
        self.uint64_value = kwargs.get('uint64_value', int())
        self.string_value = kwargs.get('string_value', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

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
    def byte_value(self):
        """Message field 'byte_value'."""
        return self._byte_value

    @byte_value.setter
    def byte_value(self, value):
        from collections import ByteString
        assert \
            ((isinstance(value, bytes) or isinstance(value, ByteString)) and
             len(value) == 1), \
            "The 'byte_value' field must of type 'bytes' or 'ByteString' with a length 1"
        self._byte_value = value

    @property
    def char_value(self):
        """Message field 'char_value'."""
        return self._char_value

    @char_value.setter
    def char_value(self, value):
        from collections import UserString
        assert \
            ((isinstance(value, str) or isinstance(value, UserString)) and
             len(value) == 1 and ord(value) >= -128 and ord(value) < 128), \
            "The 'char_value' field must of type 'str' or 'UserString' " \
            "with a length 1 and the character ord() in [-128, 127)"
        self._char_value = value

    @property
    def float32_value(self):
        """Message field 'float32_value'."""
        return self._float32_value

    @float32_value.setter
    def float32_value(self, value):
        assert \
            isinstance(value, float), \
            "The 'float32_value' field must of type 'float'"
        self._float32_value = value

    @property
    def float64_value(self):
        """Message field 'float64_value'."""
        return self._float64_value

    @float64_value.setter
    def float64_value(self, value):
        assert \
            isinstance(value, float), \
            "The 'float64_value' field must of type 'float'"
        self._float64_value = value

    @property
    def int8_value(self):
        """Message field 'int8_value'."""
        return self._int8_value

    @int8_value.setter
    def int8_value(self, value):
        assert \
            isinstance(value, int), \
            "The 'int8_value' field must of type 'int'"
        assert value >= -128 and value < 128, \
            "The 'int8_value' field must be an integer in [-128, 128)"
        self._int8_value = value

    @property
    def uint8_value(self):
        """Message field 'uint8_value'."""
        return self._uint8_value

    @uint8_value.setter
    def uint8_value(self, value):
        assert \
            isinstance(value, int), \
            "The 'uint8_value' field must of type 'int'"
        assert value >= 0 and value < 256, \
            "The 'uint8_value' field must be an unsigned integer in [0, 256)"
        self._uint8_value = value

    @property
    def int16_value(self):
        """Message field 'int16_value'."""
        return self._int16_value

    @int16_value.setter
    def int16_value(self, value):
        assert \
            isinstance(value, int), \
            "The 'int16_value' field must of type 'int'"
        assert value >= -32768 and value < 32768, \
            "The 'int16_value' field must be an integer in [-32768, 32768)"
        self._int16_value = value

    @property
    def uint16_value(self):
        """Message field 'uint16_value'."""
        return self._uint16_value

    @uint16_value.setter
    def uint16_value(self, value):
        assert \
            isinstance(value, int), \
            "The 'uint16_value' field must of type 'int'"
        assert value >= 0 and value < 65536, \
            "The 'uint16_value' field must be an unsigned integer in [0, 65536)"
        self._uint16_value = value

    @property
    def int32_value(self):
        """Message field 'int32_value'."""
        return self._int32_value

    @int32_value.setter
    def int32_value(self, value):
        assert \
            isinstance(value, int), \
            "The 'int32_value' field must of type 'int'"
        assert value >= -2147483648 and value < 2147483648, \
            "The 'int32_value' field must be an integer in [-2147483648, 2147483648)"
        self._int32_value = value

    @property
    def uint32_value(self):
        """Message field 'uint32_value'."""
        return self._uint32_value

    @uint32_value.setter
    def uint32_value(self, value):
        assert \
            isinstance(value, int), \
            "The 'uint32_value' field must of type 'int'"
        assert value >= 0 and value < 4294967296, \
            "The 'uint32_value' field must be an unsigned integer in [0, 4294967296)"
        self._uint32_value = value

    @property
    def int64_value(self):
        """Message field 'int64_value'."""
        return self._int64_value

    @int64_value.setter
    def int64_value(self, value):
        assert \
            isinstance(value, int), \
            "The 'int64_value' field must of type 'int'"
        assert value >= -9223372036854775808 and value < 9223372036854775808, \
            "The 'int64_value' field must be an integer in [-9223372036854775808, 9223372036854775808)"
        self._int64_value = value

    @property
    def uint64_value(self):
        """Message field 'uint64_value'."""
        return self._uint64_value

    @uint64_value.setter
    def uint64_value(self, value):
        assert \
            isinstance(value, int), \
            "The 'uint64_value' field must of type 'int'"
        assert value >= 0 and value < 18446744073709551616, \
            "The 'uint64_value' field must be an unsigned integer in [0, 18446744073709551616)"
        self._uint64_value = value

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
