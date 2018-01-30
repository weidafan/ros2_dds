# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'SubmapQuery'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartographer_ros_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.SubmapQuery')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_submap_query
            from cartographer_ros_msgs.srv import _submap_query__request
            if _submap_query__request.Metaclass._TYPE_SUPPORT is None:
                _submap_query__request.Metaclass.__import_type_support__()
            from cartographer_ros_msgs.srv import _submap_query__response
            if _submap_query__response.Metaclass._TYPE_SUPPORT is None:
                _submap_query__response.Metaclass.__import_type_support__()


class SubmapQuery(metaclass=Metaclass):
    from cartographer_ros_msgs.srv._submap_query__request import SubmapQuery_Request as Request
    from cartographer_ros_msgs.srv._submap_query__response import SubmapQuery_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
