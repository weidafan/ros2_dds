# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'SelfTest'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('diagnostic_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.SelfTest')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_self_test
            from diagnostic_msgs.srv import _self_test__request
            if _self_test__request.Metaclass._TYPE_SUPPORT is None:
                _self_test__request.Metaclass.__import_type_support__()
            from diagnostic_msgs.srv import _self_test__response
            if _self_test__response.Metaclass._TYPE_SUPPORT is None:
                _self_test__response.Metaclass.__import_type_support__()


class SelfTest(metaclass=Metaclass):
    from diagnostic_msgs.srv._self_test__request import SelfTest_Request as Request
    from diagnostic_msgs.srv._self_test__response import SelfTest_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
