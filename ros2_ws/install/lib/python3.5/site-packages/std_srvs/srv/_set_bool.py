# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'SetBool'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('std_srvs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.SetBool')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_set_bool
            from std_srvs.srv import _set_bool__request
            if _set_bool__request.Metaclass._TYPE_SUPPORT is None:
                _set_bool__request.Metaclass.__import_type_support__()
            from std_srvs.srv import _set_bool__response
            if _set_bool__response.Metaclass._TYPE_SUPPORT is None:
                _set_bool__response.Metaclass.__import_type_support__()


class SetBool(metaclass=Metaclass):
    from std_srvs.srv._set_bool__request import SetBool_Request as Request
    from std_srvs.srv._set_bool__response import SetBool_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
