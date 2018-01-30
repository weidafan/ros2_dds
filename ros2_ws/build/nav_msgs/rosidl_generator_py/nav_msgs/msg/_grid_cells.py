# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'GridCells'."""

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
            module = import_type_support('nav_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.GridCells')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_grid_cells
            cls._CONVERT_TO_PY = module.convert_to_py_msg_grid_cells
            cls._TYPE_SUPPORT = module.type_support_msg_grid_cells
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_grid_cells
            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()
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


class GridCells(metaclass=Metaclass):
    """Message class 'GridCells'."""

    __slots__ = [
        '_header',
        '_cell_width',
        '_cell_height',
        '_cells',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.cell_width = kwargs.get('cell_width', float())
        self.cell_height = kwargs.get('cell_height', float())
        self.cells = kwargs.get('cells', list())

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
    def cell_width(self):
        """Message field 'cell_width'."""
        return self._cell_width

    @cell_width.setter
    def cell_width(self, value):
        assert \
            isinstance(value, float), \
            "The 'cell_width' field must of type 'float'"
        self._cell_width = value

    @property
    def cell_height(self):
        """Message field 'cell_height'."""
        return self._cell_height

    @cell_height.setter
    def cell_height(self, value):
        assert \
            isinstance(value, float), \
            "The 'cell_height' field must of type 'float'"
        self._cell_height = value

    @property
    def cells(self):
        """Message field 'cells'."""
        return self._cells

    @cells.setter
    def cells(self, value):
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
            "The 'cells' field must be a set or sequence and each value of type 'Point'"
        self._cells = value
