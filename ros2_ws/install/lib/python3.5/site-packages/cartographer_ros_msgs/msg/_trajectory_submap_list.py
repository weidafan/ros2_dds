# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'TrajectorySubmapList'."""

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
            logger = logging.getLogger('rosidl_generator_py.TrajectorySubmapList')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_trajectory_submap_list
            cls._CONVERT_TO_PY = module.convert_to_py_msg_trajectory_submap_list
            cls._TYPE_SUPPORT = module.type_support_msg_trajectory_submap_list
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_trajectory_submap_list
            from cartographer_ros_msgs.msg import SubmapEntry
            if SubmapEntry.__class__._TYPE_SUPPORT is None:
                SubmapEntry.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectorySubmapList(metaclass=Metaclass):
    """Message class 'TrajectorySubmapList'."""

    __slots__ = [
        '_submap',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.submap = kwargs.get('submap', list())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def submap(self):
        """Message field 'submap'."""
        return self._submap

    @submap.setter
    def submap(self, value):
        from cartographer_ros_msgs.msg import SubmapEntry
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
             all([isinstance(v, SubmapEntry) for v in value]) and
             True), \
            "The 'submap' field must be a set or sequence and each value of type 'SubmapEntry'"
        self._submap = value
