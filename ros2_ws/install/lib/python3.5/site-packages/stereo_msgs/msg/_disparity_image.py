# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'DisparityImage'."""

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
            module = import_type_support('stereo_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.DisparityImage')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_disparity_image
            cls._CONVERT_TO_PY = module.convert_to_py_msg_disparity_image
            cls._TYPE_SUPPORT = module.type_support_msg_disparity_image
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_disparity_image
            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()
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


class DisparityImage(metaclass=Metaclass):
    """Message class 'DisparityImage'."""

    __slots__ = [
        '_header',
        '_image',
        '_f',
        '_t',
        '_valid_window',
        '_min_disparity',
        '_max_disparity',
        '_delta_d',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from sensor_msgs.msg import Image
        self.image = kwargs.get('image', Image())
        self.f = kwargs.get('f', float())
        self.t = kwargs.get('t', float())
        from sensor_msgs.msg import RegionOfInterest
        self.valid_window = kwargs.get('valid_window', RegionOfInterest())
        self.min_disparity = kwargs.get('min_disparity', float())
        self.max_disparity = kwargs.get('max_disparity', float())
        self.delta_d = kwargs.get('delta_d', float())

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
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        from sensor_msgs.msg import Image
        assert \
            isinstance(value, Image), \
            "The 'image' field must be a sub message of type 'Image'"
        self._image = value

    @property
    def f(self):
        """Message field 'f'."""
        return self._f

    @f.setter
    def f(self, value):
        assert \
            isinstance(value, float), \
            "The 'f' field must of type 'float'"
        self._f = value

    @property
    def t(self):
        """Message field 't'."""
        return self._t

    @t.setter
    def t(self, value):
        assert \
            isinstance(value, float), \
            "The 't' field must of type 'float'"
        self._t = value

    @property
    def valid_window(self):
        """Message field 'valid_window'."""
        return self._valid_window

    @valid_window.setter
    def valid_window(self, value):
        from sensor_msgs.msg import RegionOfInterest
        assert \
            isinstance(value, RegionOfInterest), \
            "The 'valid_window' field must be a sub message of type 'RegionOfInterest'"
        self._valid_window = value

    @property
    def min_disparity(self):
        """Message field 'min_disparity'."""
        return self._min_disparity

    @min_disparity.setter
    def min_disparity(self, value):
        assert \
            isinstance(value, float), \
            "The 'min_disparity' field must of type 'float'"
        self._min_disparity = value

    @property
    def max_disparity(self):
        """Message field 'max_disparity'."""
        return self._max_disparity

    @max_disparity.setter
    def max_disparity(self, value):
        assert \
            isinstance(value, float), \
            "The 'max_disparity' field must of type 'float'"
        self._max_disparity = value

    @property
    def delta_d(self):
        """Message field 'delta_d'."""
        return self._delta_d

    @delta_d.setter
    def delta_d(self, value):
        assert \
            isinstance(value, float), \
            "The 'delta_d' field must of type 'float'"
        self._delta_d = value
