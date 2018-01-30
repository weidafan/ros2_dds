# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'MeshTriangle'."""

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
            logger = logging.getLogger('rosidl_generator_py.MeshTriangle')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_mesh_triangle
            cls._CONVERT_TO_PY = module.convert_to_py_msg_mesh_triangle
            cls._TYPE_SUPPORT = module.type_support_msg_mesh_triangle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_mesh_triangle

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MeshTriangle(metaclass=Metaclass):
    """Message class 'MeshTriangle'."""

    __slots__ = [
        '_vertex_indices',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.vertex_indices = kwargs.get(
            'vertex_indices',
            list([int() for x in range(3)])
        )

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def vertex_indices(self):
        """Message field 'vertex_indices'."""
        return self._vertex_indices

    @vertex_indices.setter
    def vertex_indices(self, value):
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
             len(value) == 3 and
             all([isinstance(v, int) for v in value]) and
             all([val >= 0 and val < 4294967296 for val in value])), \
            "The 'vertex_indices' field must be a set or sequence with length 3 and each value of type 'int' and each unsigned integer in [0, 4294967296)"
        self._vertex_indices = value
