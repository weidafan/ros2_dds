# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'Inertia'."""

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
            logger = logging.getLogger('rosidl_generator_py.Inertia')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_inertia
            cls._CONVERT_TO_PY = module.convert_to_py_msg_inertia
            cls._TYPE_SUPPORT = module.type_support_msg_inertia
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_inertia
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


class Inertia(metaclass=Metaclass):
    """Message class 'Inertia'."""

    __slots__ = [
        '_m',
        '_com',
        '_ixx',
        '_ixy',
        '_ixz',
        '_iyy',
        '_iyz',
        '_izz',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.m = kwargs.get('m', float())
        from geometry_msgs.msg import Vector3
        self.com = kwargs.get('com', Vector3())
        self.ixx = kwargs.get('ixx', float())
        self.ixy = kwargs.get('ixy', float())
        self.ixz = kwargs.get('ixz', float())
        self.iyy = kwargs.get('iyy', float())
        self.iyz = kwargs.get('iyz', float())
        self.izz = kwargs.get('izz', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def m(self):
        """Message field 'm'."""
        return self._m

    @m.setter
    def m(self, value):
        assert \
            isinstance(value, float), \
            "The 'm' field must of type 'float'"
        self._m = value

    @property
    def com(self):
        """Message field 'com'."""
        return self._com

    @com.setter
    def com(self, value):
        from geometry_msgs.msg import Vector3
        assert \
            isinstance(value, Vector3), \
            "The 'com' field must be a sub message of type 'Vector3'"
        self._com = value

    @property
    def ixx(self):
        """Message field 'ixx'."""
        return self._ixx

    @ixx.setter
    def ixx(self, value):
        assert \
            isinstance(value, float), \
            "The 'ixx' field must of type 'float'"
        self._ixx = value

    @property
    def ixy(self):
        """Message field 'ixy'."""
        return self._ixy

    @ixy.setter
    def ixy(self, value):
        assert \
            isinstance(value, float), \
            "The 'ixy' field must of type 'float'"
        self._ixy = value

    @property
    def ixz(self):
        """Message field 'ixz'."""
        return self._ixz

    @ixz.setter
    def ixz(self, value):
        assert \
            isinstance(value, float), \
            "The 'ixz' field must of type 'float'"
        self._ixz = value

    @property
    def iyy(self):
        """Message field 'iyy'."""
        return self._iyy

    @iyy.setter
    def iyy(self, value):
        assert \
            isinstance(value, float), \
            "The 'iyy' field must of type 'float'"
        self._iyy = value

    @property
    def iyz(self):
        """Message field 'iyz'."""
        return self._iyz

    @iyz.setter
    def iyz(self, value):
        assert \
            isinstance(value, float), \
            "The 'iyz' field must of type 'float'"
        self._iyz = value

    @property
    def izz(self):
        """Message field 'izz'."""
        return self._izz

    @izz.setter
    def izz(self, value):
        assert \
            isinstance(value, float), \
            "The 'izz' field must of type 'float'"
        self._izz = value
