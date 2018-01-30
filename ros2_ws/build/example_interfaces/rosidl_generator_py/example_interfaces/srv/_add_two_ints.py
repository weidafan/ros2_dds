# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'AddTwoInts'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('example_interfaces')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.AddTwoInts')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_add_two_ints
            from example_interfaces.srv import _add_two_ints__request
            if _add_two_ints__request.Metaclass._TYPE_SUPPORT is None:
                _add_two_ints__request.Metaclass.__import_type_support__()
            from example_interfaces.srv import _add_two_ints__response
            if _add_two_ints__response.Metaclass._TYPE_SUPPORT is None:
                _add_two_ints__response.Metaclass.__import_type_support__()


class AddTwoInts(metaclass=Metaclass):
    from example_interfaces.srv._add_two_ints__request import AddTwoInts_Request as Request
    from example_interfaces.srv._add_two_ints__response import AddTwoInts_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
