# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'IntraProcessMessage'."""

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
            module = import_type_support('rcl_interfaces')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.IntraProcessMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_intra_process_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg_intra_process_message
            cls._TYPE_SUPPORT = module.type_support_msg_intra_process_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_intra_process_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IntraProcessMessage(metaclass=Metaclass):
    """Message class 'IntraProcessMessage'."""

    __slots__ = [
        '_publisher_id',
        '_message_sequence',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        self.publisher_id = kwargs.get('publisher_id', int())
        self.message_sequence = kwargs.get('message_sequence', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def publisher_id(self):
        """Message field 'publisher_id'."""
        return self._publisher_id

    @publisher_id.setter
    def publisher_id(self, value):
        assert \
            isinstance(value, int), \
            "The 'publisher_id' field must of type 'int'"
        assert value >= 0 and value < 18446744073709551616, \
            "The 'publisher_id' field must be an unsigned integer in [0, 18446744073709551616)"
        self._publisher_id = value

    @property
    def message_sequence(self):
        """Message field 'message_sequence'."""
        return self._message_sequence

    @message_sequence.setter
    def message_sequence(self, value):
        assert \
            isinstance(value, int), \
            "The 'message_sequence' field must of type 'int'"
        assert value >= 0 and value < 18446744073709551616, \
            "The 'message_sequence' field must be an unsigned integer in [0, 18446744073709551616)"
        self._message_sequence = value
