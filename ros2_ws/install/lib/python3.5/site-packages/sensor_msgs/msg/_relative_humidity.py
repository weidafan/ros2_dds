# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'RelativeHumidity'."""

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
            logger = logging.getLogger('rosidl_generator_py.RelativeHumidity')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_relative_humidity
            cls._CONVERT_TO_PY = module.convert_to_py_msg_relative_humidity
            cls._TYPE_SUPPORT = module.type_support_msg_relative_humidity
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_relative_humidity
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


class RelativeHumidity(metaclass=Metaclass):
    """Message class 'RelativeHumidity'."""

    __slots__ = [
        '_header',
        '_relative_humidity',
        '_variance',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.relative_humidity = kwargs.get('relative_humidity', float())
        self.variance = kwargs.get('variance', float())

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
    def relative_humidity(self):
        """Message field 'relative_humidity'."""
        return self._relative_humidity

    @relative_humidity.setter
    def relative_humidity(self, value):
        assert \
            isinstance(value, float), \
            "The 'relative_humidity' field must of type 'float'"
        self._relative_humidity = value

    @property
    def variance(self):
        """Message field 'variance'."""
        return self._variance

    @variance.setter
    def variance(self, value):
        assert \
            isinstance(value, float), \
            "The 'variance' field must of type 'float'"
        self._variance = value
