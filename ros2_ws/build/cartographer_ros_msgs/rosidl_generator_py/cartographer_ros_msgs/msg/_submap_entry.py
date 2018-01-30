# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'SubmapEntry'."""

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
            module = import_type_support('cartographer_ros_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.SubmapEntry')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_submap_entry
            cls._CONVERT_TO_PY = module.convert_to_py_msg_submap_entry
            cls._TYPE_SUPPORT = module.type_support_msg_submap_entry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_submap_entry
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


class SubmapEntry(metaclass=Metaclass):
    """Message class 'SubmapEntry'."""

    __slots__ = [
        '_submap_version',
        '_pose',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.submap_version = kwargs.get('submap_version', int())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def submap_version(self):
        """Message field 'submap_version'."""
        return self._submap_version

    @submap_version.setter
    def submap_version(self, value):
        assert \
            isinstance(value, int), \
            "The 'submap_version' field must of type 'int'"
        assert value >= -2147483648 and value < 2147483648, \
            "The 'submap_version' field must be an integer in [-2147483648, 2147483648)"
        self._submap_version = value

    @property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        from geometry_msgs.msg import Pose
        assert \
            isinstance(value, Pose), \
            "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value
