# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'Primitives'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('test_communication')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.Primitives')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_primitives
            from test_communication.srv import _primitives__request
            if _primitives__request.Metaclass._TYPE_SUPPORT is None:
                _primitives__request.Metaclass.__import_type_support__()
            from test_communication.srv import _primitives__response
            if _primitives__response.Metaclass._TYPE_SUPPORT is None:
                _primitives__response.Metaclass.__import_type_support__()


class Primitives(metaclass=Metaclass):
    from test_communication.srv._primitives__request import Primitives_Request as Request
    from test_communication.srv._primitives__response import Primitives_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
