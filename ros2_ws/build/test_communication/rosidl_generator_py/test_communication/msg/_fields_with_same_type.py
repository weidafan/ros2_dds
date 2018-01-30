# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'FieldsWithSameType'."""

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
            module = import_type_support('test_communication')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.FieldsWithSameType')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_fields_with_same_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg_fields_with_same_type
            cls._TYPE_SUPPORT = module.type_support_msg_fields_with_same_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_fields_with_same_type
            from test_communication.msg import Primitives
            if Primitives.__class__._TYPE_SUPPORT is None:
                Primitives.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FieldsWithSameType(metaclass=Metaclass):
    """Message class 'FieldsWithSameType'."""

    __slots__ = [
        '_primitive_values1',
        '_primitive_values2',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from test_communication.msg import Primitives
        self.primitive_values1 = kwargs.get('primitive_values1', Primitives())
        from test_communication.msg import Primitives
        self.primitive_values2 = kwargs.get('primitive_values2', Primitives())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def primitive_values1(self):
        """Message field 'primitive_values1'."""
        return self._primitive_values1

    @primitive_values1.setter
    def primitive_values1(self, value):
        from test_communication.msg import Primitives
        assert \
            isinstance(value, Primitives), \
            "The 'primitive_values1' field must be a sub message of type 'Primitives'"
        self._primitive_values1 = value

    @property
    def primitive_values2(self):
        """Message field 'primitive_values2'."""
        return self._primitive_values2

    @primitive_values2.setter
    def primitive_values2(self, value):
        from test_communication.msg import Primitives
        assert \
            isinstance(value, Primitives), \
            "The 'primitive_values2' field must be a sub message of type 'Primitives'"
        self._primitive_values2 = value
