# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'MultiArrayDimension'."""

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
            logger = logging.getLogger('rosidl_generator_py.MultiArrayDimension')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_multi_array_dimension
            cls._CONVERT_TO_PY = module.convert_to_py_msg_multi_array_dimension
            cls._TYPE_SUPPORT = module.type_support_msg_multi_array_dimension
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_multi_array_dimension

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MultiArrayDimension(metaclass=Metaclass):
    """Message class 'MultiArrayDimension'."""

    __slots__ = [
        '_label',
        '_size',
        '_stride',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.label = kwargs.get('label', str())
        self.size = kwargs.get('size', int())
        self.stride = kwargs.get('stride', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        assert \
            isinstance(value, str), \
            "The 'label' field must of type 'str'"
        self._label = value

    @property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        assert \
            isinstance(value, int), \
            "The 'size' field must of type 'int'"
        assert value >= 0 and value < 4294967296, \
            "The 'size' field must be an unsigned integer in [0, 4294967296)"
        self._size = value

    @property
    def stride(self):
        """Message field 'stride'."""
        return self._stride

    @stride.setter
    def stride(self, value):
        assert \
            isinstance(value, int), \
            "The 'stride' field must of type 'int'"
        assert value >= 0 and value < 4294967296, \
            "The 'stride' field must be an unsigned integer in [0, 4294967296)"
        self._stride = value
