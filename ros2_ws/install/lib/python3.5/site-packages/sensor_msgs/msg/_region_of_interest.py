# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'RegionOfInterest'."""

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
            logger = logging.getLogger('rosidl_generator_py.RegionOfInterest')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_region_of_interest
            cls._CONVERT_TO_PY = module.convert_to_py_msg_region_of_interest
            cls._TYPE_SUPPORT = module.type_support_msg_region_of_interest
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_region_of_interest

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegionOfInterest(metaclass=Metaclass):
    """Message class 'RegionOfInterest'."""

    __slots__ = [
        '_x_offset',
        '_y_offset',
        '_height',
        '_width',
        '_do_rectify',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.x_offset = kwargs.get('x_offset', int())
        self.y_offset = kwargs.get('y_offset', int())
        self.height = kwargs.get('height', int())
        self.width = kwargs.get('width', int())
        self.do_rectify = kwargs.get('do_rectify', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def x_offset(self):
        """Message field 'x_offset'."""
        return self._x_offset

    @x_offset.setter
    def x_offset(self, value):
        assert \
            isinstance(value, int), \
            "The 'x_offset' field must of type 'int'"
        assert value >= 0 and value < 4294967296, \
            "The 'x_offset' field must be an unsigned integer in [0, 4294967296)"
        self._x_offset = value

    @property
    def y_offset(self):
        """Message field 'y_offset'."""
        return self._y_offset

    @y_offset.setter
    def y_offset(self, value):
        assert \
            isinstance(value, int), \
            "The 'y_offset' field must of type 'int'"
        assert value >= 0 and value < 4294967296, \
            "The 'y_offset' field must be an unsigned integer in [0, 4294967296)"
        self._y_offset = value

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
    def do_rectify(self):
        """Message field 'do_rectify'."""
        return self._do_rectify

    @do_rectify.setter
    def do_rectify(self, value):
        assert \
            isinstance(value, bool), \
            "The 'do_rectify' field must of type 'bool'"
        self._do_rectify = value
