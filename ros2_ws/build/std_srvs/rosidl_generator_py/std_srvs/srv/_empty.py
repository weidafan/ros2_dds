# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'Empty'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('std_srvs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.Empty')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_empty
            from std_srvs.srv import _empty__request
            if _empty__request.Metaclass._TYPE_SUPPORT is None:
                _empty__request.Metaclass.__import_type_support__()
            from std_srvs.srv import _empty__response
            if _empty__response.Metaclass._TYPE_SUPPORT is None:
                _empty__response.Metaclass.__import_type_support__()


class Empty(metaclass=Metaclass):
    from std_srvs.srv._empty__request import Empty_Request as Request
    from std_srvs.srv._empty__response import Empty_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
