# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'MapMetaData'."""

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
            module = import_type_support('nav_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.MapMetaData')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_map_meta_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg_map_meta_data
            cls._TYPE_SUPPORT = module.type_support_msg_map_meta_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_map_meta_data
            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()
            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MapMetaData(metaclass=Metaclass):
    """Message class 'MapMetaData'."""

    __slots__ = [
        '_map_load_time',
        '_resolution',
        '_width',
        '_height',
        '_origin',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from builtin_interfaces.msg import Time
        self.map_load_time = kwargs.get('map_load_time', Time())
        self.resolution = kwargs.get('resolution', float())
        self.width = kwargs.get('width', int())
        self.height = kwargs.get('height', int())
        from geometry_msgs.msg import Pose
        self.origin = kwargs.get('origin', Pose())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def map_load_time(self):
        """Message field 'map_load_time'."""
        return self._map_load_time

    @map_load_time.setter
    def map_load_time(self, value):
        from builtin_interfaces.msg import Time
        assert \
            isinstance(value, Time), \
            "The 'map_load_time' field must be a sub message of type 'Time'"
        self._map_load_time = value

    @property
    def resolution(self):
        """Message field 'resolution'."""
        return self._resolution

    @resolution.setter
    def resolution(self, value):
        assert \
            isinstance(value, float), \
            "The 'resolution' field must of type 'float'"
        self._resolution = value

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
    def origin(self):
        """Message field 'origin'."""
        return self._origin

    @origin.setter
    def origin(self, value):
        from geometry_msgs.msg import Pose
        assert \
            isinstance(value, Pose), \
            "The 'origin' field must be a sub message of type 'Pose'"
        self._origin = value
