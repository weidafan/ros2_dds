# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'SolidPrimitive'."""

    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BOX': 1,
        'SPHERE': 2,
        'CYLINDER': 3,
        'CONE': 4,
        'BOX_X': 0,
        'BOX_Y': 1,
        'BOX_Z': 2,
        'SPHERE_RADIUS': 0,
        'CYLINDER_HEIGHT': 0,
        'CYLINDER_RADIUS': 1,
        'CONE_HEIGHT': 0,
        'CONE_RADIUS': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('shape_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.SolidPrimitive')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_solid_primitive
            cls._CONVERT_TO_PY = module.convert_to_py_msg_solid_primitive
            cls._TYPE_SUPPORT = module.type_support_msg_solid_primitive
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_solid_primitive

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BOX': cls.__constants['BOX'],
            'SPHERE': cls.__constants['SPHERE'],
            'CYLINDER': cls.__constants['CYLINDER'],
            'CONE': cls.__constants['CONE'],
            'BOX_X': cls.__constants['BOX_X'],
            'BOX_Y': cls.__constants['BOX_Y'],
            'BOX_Z': cls.__constants['BOX_Z'],
            'SPHERE_RADIUS': cls.__constants['SPHERE_RADIUS'],
            'CYLINDER_HEIGHT': cls.__constants['CYLINDER_HEIGHT'],
            'CYLINDER_RADIUS': cls.__constants['CYLINDER_RADIUS'],
            'CONE_HEIGHT': cls.__constants['CONE_HEIGHT'],
            'CONE_RADIUS': cls.__constants['CONE_RADIUS'],
        }

    @property
    def BOX(self):
        """Message constant 'BOX'."""
        return Metaclass.__constants['BOX']

    @property
    def SPHERE(self):
        """Message constant 'SPHERE'."""
        return Metaclass.__constants['SPHERE']

    @property
    def CYLINDER(self):
        """Message constant 'CYLINDER'."""
        return Metaclass.__constants['CYLINDER']

    @property
    def CONE(self):
        """Message constant 'CONE'."""
        return Metaclass.__constants['CONE']

    @property
    def BOX_X(self):
        """Message constant 'BOX_X'."""
        return Metaclass.__constants['BOX_X']

    @property
    def BOX_Y(self):
        """Message constant 'BOX_Y'."""
        return Metaclass.__constants['BOX_Y']

    @property
    def BOX_Z(self):
        """Message constant 'BOX_Z'."""
        return Metaclass.__constants['BOX_Z']

    @property
    def SPHERE_RADIUS(self):
        """Message constant 'SPHERE_RADIUS'."""
        return Metaclass.__constants['SPHERE_RADIUS']

    @property
    def CYLINDER_HEIGHT(self):
        """Message constant 'CYLINDER_HEIGHT'."""
        return Metaclass.__constants['CYLINDER_HEIGHT']

    @property
    def CYLINDER_RADIUS(self):
        """Message constant 'CYLINDER_RADIUS'."""
        return Metaclass.__constants['CYLINDER_RADIUS']

    @property
    def CONE_HEIGHT(self):
        """Message constant 'CONE_HEIGHT'."""
        return Metaclass.__constants['CONE_HEIGHT']

    @property
    def CONE_RADIUS(self):
        """Message constant 'CONE_RADIUS'."""
        return Metaclass.__constants['CONE_RADIUS']


class SolidPrimitive(metaclass=Metaclass):
    """
    Message class 'SolidPrimitive'.

    Constants:
      BOX
      SPHERE
      CYLINDER
      CONE
      BOX_X
      BOX_Y
      BOX_Z
      SPHERE_RADIUS
      CYLINDER_HEIGHT
      CYLINDER_RADIUS
      CONE_HEIGHT
      CONE_RADIUS
    """

    __slots__ = [
        '_type',
        '_dimensions',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.type = kwargs.get('type', int())
        self.dimensions = kwargs.get('dimensions', list())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def type(self):
        """Message field 'type'."""
        return self._type

    @type.setter
    def type(self, value):
        assert \
            isinstance(value, int), \
            "The 'type' field must of type 'int'"
        assert value >= 0 and value < 256, \
            "The 'type' field must be an unsigned integer in [0, 256)"
        self._type = value

    @property
    def dimensions(self):
        """Message field 'dimensions'."""
        return self._dimensions

    @dimensions.setter
    def dimensions(self, value):
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
             len(value) <= 3 and
             all([isinstance(v, float) for v in value]) and
             True), \
            "The 'dimensions' field must be a set or sequence with length <= 3 and each value of type 'float'"
        self._dimensions = value
