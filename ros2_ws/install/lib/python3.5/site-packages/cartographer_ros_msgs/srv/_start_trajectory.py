# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'StartTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartographer_ros_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.StartTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv_start_trajectory
            from cartographer_ros_msgs.srv import _start_trajectory__request
            if _start_trajectory__request.Metaclass._TYPE_SUPPORT is None:
                _start_trajectory__request.Metaclass.__import_type_support__()
            from cartographer_ros_msgs.srv import _start_trajectory__response
            if _start_trajectory__response.Metaclass._TYPE_SUPPORT is None:
                _start_trajectory__response.Metaclass.__import_type_support__()


class StartTrajectory(metaclass=Metaclass):
    from cartographer_ros_msgs.srv._start_trajectory__request import StartTrajectory_Request as Request
    from cartographer_ros_msgs.srv._start_trajectory__response import StartTrajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
