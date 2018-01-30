# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'SubmapQuery_Response'."""

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
            logger = logging.getLogger('rosidl_generator_py.SubmapQuery_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_submap_query__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg_submap_query__response
            cls._TYPE_SUPPORT = module.type_support_msg_submap_query__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_submap_query__response
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


class SubmapQuery_Response(metaclass=Metaclass):
    """Message class 'SubmapQuery_Response'."""

    __slots__ = [
        '_submap_version',
        '_cells',
        '_width',
        '_height',
        '_resolution',
        '_slice_pose',
        '_error_message',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.submap_version = kwargs.get('submap_version', int())
        self.cells = kwargs.get('cells', list())
        self.width = kwargs.get('width', int())
        self.height = kwargs.get('height', int())
        self.resolution = kwargs.get('resolution', float())
        from geometry_msgs.msg import Pose
        self.slice_pose = kwargs.get('slice_pose', Pose())
        self.error_message = kwargs.get('error_message', str())

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
    def cells(self):
        """Message field 'cells'."""
        return self._cells

    @cells.setter
    def cells(self, value):
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
             all([isinstance(v, int) for v in value]) and
             all([val >= 0 and val < 256 for val in value])), \
            "The 'cells' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 256)"
        self._cells = value

    @property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        assert \
            isinstance(value, int), \
            "The 'width' field must of type 'int'"
        assert value >= -2147483648 and value < 2147483648, \
            "The 'width' field must be an integer in [-2147483648, 2147483648)"
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
        assert value >= -2147483648 and value < 2147483648, \
            "The 'height' field must be an integer in [-2147483648, 2147483648)"
        self._height = value

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
    def slice_pose(self):
        """Message field 'slice_pose'."""
        return self._slice_pose

    @slice_pose.setter
    def slice_pose(self, value):
        from geometry_msgs.msg import Pose
        assert \
            isinstance(value, Pose), \
            "The 'slice_pose' field must be a sub message of type 'Pose'"
        self._slice_pose = value

    @property
    def error_message(self):
        """Message field 'error_message'."""
        return self._error_message

    @error_message.setter
    def error_message(self, value):
        assert \
            isinstance(value, str), \
            "The 'error_message' field must of type 'str'"
        self._error_message = value
