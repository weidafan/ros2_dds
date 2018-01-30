# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'ColorRGBA'."""

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
            logger = logging.getLogger('rosidl_generator_py.ColorRGBA')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_color_rgba
            cls._CONVERT_TO_PY = module.convert_to_py_msg_color_rgba
            cls._TYPE_SUPPORT = module.type_support_msg_color_rgba
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_color_rgba

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ColorRGBA(metaclass=Metaclass):
    """Message class 'ColorRGBA'."""

    __slots__ = [
        '_r',
        '_g',
        '_b',
        '_a',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.r = kwargs.get('r', float())
        self.g = kwargs.get('g', float())
        self.b = kwargs.get('b', float())
        self.a = kwargs.get('a', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def r(self):
        """Message field 'r'."""
        return self._r

    @r.setter
    def r(self, value):
        assert \
            isinstance(value, float), \
            "The 'r' field must of type 'float'"
        self._r = value

    @property
    def g(self):
        """Message field 'g'."""
        return self._g

    @g.setter
    def g(self, value):
        assert \
            isinstance(value, float), \
            "The 'g' field must of type 'float'"
        self._g = value

    @property
    def b(self):
        """Message field 'b'."""
        return self._b

    @b.setter
    def b(self, value):
        assert \
            isinstance(value, float), \
            "The 'b' field must of type 'float'"
        self._b = value

    @property
    def a(self):
        """Message field 'a'."""
        return self._a

    @a.setter
    def a(self, value):
        assert \
            isinstance(value, float), \
            "The 'a' field must of type 'float'"
        self._a = value
