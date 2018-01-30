# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'Trigger'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('std_srvs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.Trigger')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_trigger
            from std_srvs.srv import _trigger__request
            if _trigger__request.Metaclass._TYPE_SUPPORT is None:
                _trigger__request.Metaclass.__import_type_support__()
            from std_srvs.srv import _trigger__response
            if _trigger__response.Metaclass._TYPE_SUPPORT is None:
                _trigger__response.Metaclass.__import_type_support__()


class Trigger(metaclass=Metaclass):
    from std_srvs.srv._trigger__request import Trigger_Request as Request
    from std_srvs.srv._trigger__response import Trigger_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
