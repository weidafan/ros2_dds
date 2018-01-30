# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'AddDiagnostics'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('diagnostic_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.AddDiagnostics')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_add_diagnostics
            from diagnostic_msgs.srv import _add_diagnostics__request
            if _add_diagnostics__request.Metaclass._TYPE_SUPPORT is None:
                _add_diagnostics__request.Metaclass.__import_type_support__()
            from diagnostic_msgs.srv import _add_diagnostics__response
            if _add_diagnostics__response.Metaclass._TYPE_SUPPORT is None:
                _add_diagnostics__response.Metaclass.__import_type_support__()


class AddDiagnostics(metaclass=Metaclass):
    from diagnostic_msgs.srv._add_diagnostics__request import AddDiagnostics_Request as Request
    from diagnostic_msgs.srv._add_diagnostics__response import AddDiagnostics_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
