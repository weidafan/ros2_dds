# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'Range'."""

    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ULTRASOUND': 0,
        'INFRARED': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sensor_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.Range')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_range
            cls._CONVERT_TO_PY = module.convert_to_py_msg_range
            cls._TYPE_SUPPORT = module.type_support_msg_range
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_range
            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ULTRASOUND': cls.__constants['ULTRASOUND'],
            'INFRARED': cls.__constants['INFRARED'],
        }

    @property
    def ULTRASOUND(self):
        """Message constant 'ULTRASOUND'."""
        return Metaclass.__constants['ULTRASOUND']

    @property
    def INFRARED(self):
        """Message constant 'INFRARED'."""
        return Metaclass.__constants['INFRARED']


class Range(metaclass=Metaclass):
    """
    Message class 'Range'.

    Constants:
      ULTRASOUND
      INFRARED
    """

    __slots__ = [
        '_header',
        '_radiation_type',
        '_field_of_view',
        '_min_range',
        '_max_range',
        '_range',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.radiation_type = kwargs.get('radiation_type', int())
        self.field_of_view = kwargs.get('field_of_view', float())
        self.min_range = kwargs.get('min_range', float())
        self.max_range = kwargs.get('max_range', float())
        self.range = kwargs.get('range', float())

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
    def radiation_type(self):
        """Message field 'radiation_type'."""
        return self._radiation_type

    @radiation_type.setter
    def radiation_type(self, value):
        assert \
            isinstance(value, int), \
            "The 'radiation_type' field must of type 'int'"
        assert value >= 0 and value < 256, \
            "The 'radiation_type' field must be an unsigned integer in [0, 256)"
        self._radiation_type = value

    @property
    def field_of_view(self):
        """Message field 'field_of_view'."""
        return self._field_of_view

    @field_of_view.setter
    def field_of_view(self, value):
        assert \
            isinstance(value, float), \
            "The 'field_of_view' field must of type 'float'"
        self._field_of_view = value

    @property
    def min_range(self):
        """Message field 'min_range'."""
        return self._min_range

    @min_range.setter
    def min_range(self, value):
        assert \
            isinstance(value, float), \
            "The 'min_range' field must of type 'float'"
        self._min_range = value

    @property
    def max_range(self):
        """Message field 'max_range'."""
        return self._max_range

    @max_range.setter
    def max_range(self, value):
        assert \
            isinstance(value, float), \
            "The 'max_range' field must of type 'float'"
        self._max_range = value

    @property
    def range(self):
        """Message field 'range'."""
        return self._range

    @range.setter
    def range(self, value):
        assert \
            isinstance(value, float), \
            "The 'range' field must of type 'float'"
        self._range = value
