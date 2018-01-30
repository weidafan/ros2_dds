# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'Transform'."""

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
            module = import_type_support('geometry_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.Transform')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_transform
            cls._CONVERT_TO_PY = module.convert_to_py_msg_transform
            cls._TYPE_SUPPORT = module.type_support_msg_transform
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_transform
            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()
            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Transform(metaclass=Metaclass):
    """Message class 'Transform'."""

    __slots__ = [
        '_translation',
        '_rotation',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from geometry_msgs.msg import Vector3
        self.translation = kwargs.get('translation', Vector3())
        from geometry_msgs.msg import Quaternion
        self.rotation = kwargs.get('rotation', Quaternion())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def translation(self):
        """Message field 'translation'."""
        return self._translation

    @translation.setter
    def translation(self, value):
        from geometry_msgs.msg import Vector3
        assert \
            isinstance(value, Vector3), \
            "The 'translation' field must be a sub message of type 'Vector3'"
        self._translation = value

    @property
    def rotation(self):
        """Message field 'rotation'."""
        return self._rotation

    @rotation.setter
    def rotation(self, value):
        from geometry_msgs.msg import Quaternion
        assert \
            isinstance(value, Quaternion), \
            "The 'rotation' field must be a sub message of type 'Quaternion'"
        self._rotation = value
