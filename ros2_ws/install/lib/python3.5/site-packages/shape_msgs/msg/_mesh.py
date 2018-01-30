# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'Mesh'."""

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
            module = import_type_support('shape_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.Mesh')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_mesh
            cls._CONVERT_TO_PY = module.convert_to_py_msg_mesh
            cls._TYPE_SUPPORT = module.type_support_msg_mesh
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_mesh
            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()
            from shape_msgs.msg import MeshTriangle
            if MeshTriangle.__class__._TYPE_SUPPORT is None:
                MeshTriangle.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Mesh(metaclass=Metaclass):
    """Message class 'Mesh'."""

    __slots__ = [
        '_triangles',
        '_vertices',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.triangles = kwargs.get('triangles', list())
        self.vertices = kwargs.get('vertices', list())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def triangles(self):
        """Message field 'triangles'."""
        return self._triangles

    @triangles.setter
    def triangles(self, value):
        from shape_msgs.msg import MeshTriangle
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
             all([isinstance(v, MeshTriangle) for v in value]) and
             True), \
            "The 'triangles' field must be a set or sequence and each value of type 'MeshTriangle'"
        self._triangles = value

    @property
    def vertices(self):
        """Message field 'vertices'."""
        return self._vertices

    @vertices.setter
    def vertices(self, value):
        from geometry_msgs.msg import Point
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
             all([isinstance(v, Point) for v in value]) and
             True), \
            "The 'vertices' field must be a set or sequence and each value of type 'Point'"
        self._vertices = value
