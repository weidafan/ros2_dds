# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'Header'."""

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
            module = import_type_support('std_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.Header')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_header
            cls._CONVERT_TO_PY = module.convert_to_py_msg_header
            cls._TYPE_SUPPORT = module.type_support_msg_header
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_header
            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Header(metaclass=Metaclass):
    """Message class 'Header'."""

    __slots__ = [
        '_stamp',
        '_frame_id',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.frame_id = kwargs.get('frame_id', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        from builtin_interfaces.msg import Time
        assert \
            isinstance(value, Time), \
            "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @property
    def frame_id(self):
        """Message field 'frame_id'."""
        return self._frame_id

    @frame_id.setter
    def frame_id(self, value):
        assert \
            isinstance(value, str), \
            "The 'frame_id' field must of type 'str'"
        self._frame_id = value
