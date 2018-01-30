# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'WriteAssets'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartographer_ros_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.WriteAssets')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_write_assets
            from cartographer_ros_msgs.srv import _write_assets__request
            if _write_assets__request.Metaclass._TYPE_SUPPORT is None:
                _write_assets__request.Metaclass.__import_type_support__()
            from cartographer_ros_msgs.srv import _write_assets__response
            if _write_assets__response.Metaclass._TYPE_SUPPORT is None:
                _write_assets__response.Metaclass.__import_type_support__()


class WriteAssets(metaclass=Metaclass):
    from cartographer_ros_msgs.srv._write_assets__request import WriteAssets_Request as Request
    from cartographer_ros_msgs.srv._write_assets__response import WriteAssets_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
