# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'PointField'."""

    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INT8': 1,
        'UINT8': 2,
        'INT16': 3,
        'UINT16': 4,
        'INT32': 5,
        'UINT32': 6,
        'FLOAT32': 7,
        'FLOAT64': 8,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sensor_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.PointField')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_point_field
            cls._CONVERT_TO_PY = module.convert_to_py_msg_point_field
            cls._TYPE_SUPPORT = module.type_support_msg_point_field
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_point_field

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INT8': cls.__constants['INT8'],
            'UINT8': cls.__constants['UINT8'],
            'INT16': cls.__constants['INT16'],
            'UINT16': cls.__constants['UINT16'],
            'INT32': cls.__constants['INT32'],
            'UINT32': cls.__constants['UINT32'],
            'FLOAT32': cls.__constants['FLOAT32'],
            'FLOAT64': cls.__constants['FLOAT64'],
        }

    @property
    def INT8(self):
        """Message constant 'INT8'."""
        return Metaclass.__constants['INT8']

    @property
    def UINT8(self):
        """Message constant 'UINT8'."""
        return Metaclass.__constants['UINT8']

    @property
    def INT16(self):
        """Message constant 'INT16'."""
        return Metaclass.__constants['INT16']

    @property
    def UINT16(self):
        """Message constant 'UINT16'."""
        return Metaclass.__constants['UINT16']

    @property
    def INT32(self):
        """Message constant 'INT32'."""
        return Metaclass.__constants['INT32']

    @property
    def UINT32(self):
        """Message constant 'UINT32'."""
        return Metaclass.__constants['UINT32']

    @property
    def FLOAT32(self):
        """Message constant 'FLOAT32'."""
        return Metaclass.__constants['FLOAT32']

    @property
    def FLOAT64(self):
        """Message constant 'FLOAT64'."""
        return Metaclass.__constants['FLOAT64']


class PointField(metaclass=Metaclass):
    """
    Message class 'PointField'.

    Constants:
      INT8
      UINT8
      INT16
      UINT16
      INT32
      UINT32
      FLOAT32
      FLOAT64
    """

    __slots__ = [
        '_name',
        '_offset',
        '_datatype',
        '_count',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.name = kwargs.get('name', str())
        self.offset = kwargs.get('offset', int())
        self.datatype = kwargs.get('datatype', int())
        self.count = kwargs.get('count', int())

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
    def offset(self):
        """Message field 'offset'."""
        return self._offset

    @offset.setter
    def offset(self, value):
        assert \
            isinstance(value, int), \
            "The 'offset' field must of type 'int'"
        assert value >= 0 and value < 4294967296, \
            "The 'offset' field must be an unsigned integer in [0, 4294967296)"
        self._offset = value

    @property
    def datatype(self):
        """Message field 'datatype'."""
        return self._datatype

    @datatype.setter
    def datatype(self, value):
        assert \
            isinstance(value, int), \
            "The 'datatype' field must of type 'int'"
        assert value >= 0 and value < 256, \
            "The 'datatype' field must be an unsigned integer in [0, 256)"
        self._datatype = value

    @property
    def count(self):
        """Message field 'count'."""
        return self._count

    @count.setter
    def count(self, value):
        assert \
            isinstance(value, int), \
            "The 'count' field must of type 'int'"
        assert value >= 0 and value < 4294967296, \
            "The 'count' field must be an unsigned integer in [0, 4294967296)"
        self._count = value
