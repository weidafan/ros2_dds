# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'Image'."""

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
            module = import_type_support('sensor_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.Image')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_image
            cls._CONVERT_TO_PY = module.convert_to_py_msg_image
            cls._TYPE_SUPPORT = module.type_support_msg_image
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_image
            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Image(metaclass=Metaclass):
    """Message class 'Image'."""

    __slots__ = [
        '_header',
        '_height',
        '_width',
        '_encoding',
        '_is_bigendian',
        '_step',
        '_data',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.height = kwargs.get('height', int())
        self.width = kwargs.get('width', int())
        self.encoding = kwargs.get('encoding', str())
        self.is_bigendian = kwargs.get('is_bigendian', int())
        self.step = kwargs.get('step', int())
        self.data = kwargs.get('data', list())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        from std_msgs.msg import Header
        assert \
            isinstance(value, Header), \
            "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        assert \
            isinstance(value, int), \
            "The 'height' field must of type 'int'"
        assert value >= 0 and value < 4294967296, \
            "The 'height' field must be an unsigned integer in [0, 4294967296)"
        self._height = value

    @property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        assert \
            isinstance(value, int), \
            "The 'width' field must of type 'int'"
        assert value >= 0 and value < 4294967296, \
            "The 'width' field must be an unsigned integer in [0, 4294967296)"
        self._width = value

    @property
    def encoding(self):
        """Message field 'encoding'."""
        return self._encoding

    @encoding.setter
    def encoding(self, value):
        assert \
            isinstance(value, str), \
            "The 'encoding' field must of type 'str'"
        self._encoding = value

    @property
    def is_bigendian(self):
        """Message field 'is_bigendian'."""
        return self._is_bigendian

    @is_bigendian.setter
    def is_bigendian(self, value):
        assert \
            isinstance(value, int), \
            "The 'is_bigendian' field must of type 'int'"
        assert value >= 0 and value < 256, \
            "The 'is_bigendian' field must be an unsigned integer in [0, 256)"
        self._is_bigendian = value

    @property
    def step(self):
        """Message field 'step'."""
        return self._step

    @step.setter
    def step(self, value):
        assert \
            isinstance(value, int), \
            "The 'step' field must of type 'int'"
        assert value >= 0 and value < 4294967296, \
            "The 'step' field must be an unsigned integer in [0, 4294967296)"
        self._step = value

    @property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
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
            "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 256)"
        self._data = value
