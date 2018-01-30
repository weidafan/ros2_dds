# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'CameraInfo'."""

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
            logger = logging.getLogger('rosidl_generator_py.CameraInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_camera_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg_camera_info
            cls._TYPE_SUPPORT = module.type_support_msg_camera_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_camera_info
            from sensor_msgs.msg import RegionOfInterest
            if RegionOfInterest.__class__._TYPE_SUPPORT is None:
                RegionOfInterest.__class__.__import_type_support__()
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


class CameraInfo(metaclass=Metaclass):
    """Message class 'CameraInfo'."""

    __slots__ = [
        '_header',
        '_height',
        '_width',
        '_distortion_model',
        '_d',
        '_k',
        '_r',
        '_p',
        '_binning_x',
        '_binning_y',
        '_roi',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.height = kwargs.get('height', int())
        self.width = kwargs.get('width', int())
        self.distortion_model = kwargs.get('distortion_model', str())
        self.d = kwargs.get('d', list())
        self.k = kwargs.get(
            'k',
            list([float() for x in range(9)])
        )
        self.r = kwargs.get(
            'r',
            list([float() for x in range(9)])
        )
        self.p = kwargs.get(
            'p',
            list([float() for x in range(12)])
        )
        self.binning_x = kwargs.get('binning_x', int())
        self.binning_y = kwargs.get('binning_y', int())
        from sensor_msgs.msg import RegionOfInterest
        self.roi = kwargs.get('roi', RegionOfInterest())

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
    def distortion_model(self):
        """Message field 'distortion_model'."""
        return self._distortion_model

    @distortion_model.setter
    def distortion_model(self, value):
        assert \
            isinstance(value, str), \
            "The 'distortion_model' field must of type 'str'"
        self._distortion_model = value

    @property
    def d(self):
        """Message field 'd'."""
        return self._d

    @d.setter
    def d(self, value):
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
            "The 'd' field must be a set or sequence and each value of type 'float'"
        self._d = value

    @property
    def k(self):
        """Message field 'k'."""
        return self._k

    @k.setter
    def k(self, value):
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
             len(value) == 9 and
             all([isinstance(v, float) for v in value]) and
             True), \
            "The 'k' field must be a set or sequence with length 9 and each value of type 'float'"
        self._k = value

    @property
    def r(self):
        """Message field 'r'."""
        return self._r

    @r.setter
    def r(self, value):
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
             len(value) == 9 and
             all([isinstance(v, float) for v in value]) and
             True), \
            "The 'r' field must be a set or sequence with length 9 and each value of type 'float'"
        self._r = value

    @property
    def p(self):
        """Message field 'p'."""
        return self._p

    @p.setter
    def p(self, value):
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
             len(value) == 12 and
             all([isinstance(v, float) for v in value]) and
             True), \
            "The 'p' field must be a set or sequence with length 12 and each value of type 'float'"
        self._p = value

    @property
    def binning_x(self):
        """Message field 'binning_x'."""
        return self._binning_x

    @binning_x.setter
    def binning_x(self, value):
        assert \
            isinstance(value, int), \
            "The 'binning_x' field must of type 'int'"
        assert value >= 0 and value < 4294967296, \
            "The 'binning_x' field must be an unsigned integer in [0, 4294967296)"
        self._binning_x = value

    @property
    def binning_y(self):
        """Message field 'binning_y'."""
        return self._binning_y

    @binning_y.setter
    def binning_y(self, value):
        assert \
            isinstance(value, int), \
            "The 'binning_y' field must of type 'int'"
        assert value >= 0 and value < 4294967296, \
            "The 'binning_y' field must be an unsigned integer in [0, 4294967296)"
        self._binning_y = value

    @property
    def roi(self):
        """Message field 'roi'."""
        return self._roi

    @roi.setter
    def roi(self, value):
        from sensor_msgs.msg import RegionOfInterest
        assert \
            isinstance(value, RegionOfInterest), \
            "The 'roi' field must be a sub message of type 'RegionOfInterest'"
        self._roi = value
