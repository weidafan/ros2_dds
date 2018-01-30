# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'BatteryState'."""

    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'POWER_SUPPLY_STATUS_UNKNOWN': 0,
        'POWER_SUPPLY_STATUS_CHARGING': 1,
        'POWER_SUPPLY_STATUS_DISCHARGING': 2,
        'POWER_SUPPLY_STATUS_NOT_CHARGING': 3,
        'POWER_SUPPLY_STATUS_FULL': 4,
        'POWER_SUPPLY_HEALTH_UNKNOWN': 0,
        'POWER_SUPPLY_HEALTH_GOOD': 1,
        'POWER_SUPPLY_HEALTH_OVERHEAT': 2,
        'POWER_SUPPLY_HEALTH_DEAD': 3,
        'POWER_SUPPLY_HEALTH_OVERVOLTAGE': 4,
        'POWER_SUPPLY_HEALTH_UNSPEC_FAILURE': 5,
        'POWER_SUPPLY_HEALTH_COLD': 6,
        'POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE': 7,
        'POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE': 8,
        'POWER_SUPPLY_TECHNOLOGY_UNKNOWN': 0,
        'POWER_SUPPLY_TECHNOLOGY_NIMH': 1,
        'POWER_SUPPLY_TECHNOLOGY_LION': 2,
        'POWER_SUPPLY_TECHNOLOGY_LIPO': 3,
        'POWER_SUPPLY_TECHNOLOGY_LIFE': 4,
        'POWER_SUPPLY_TECHNOLOGY_NICD': 5,
        'POWER_SUPPLY_TECHNOLOGY_LIMN': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sensor_msgs')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.BatteryState')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CONVERT_FROM_PY = module.convert_from_py_msg_battery_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg_battery_state
            cls._TYPE_SUPPORT = module.type_support_msg_battery_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg_battery_state
            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'POWER_SUPPLY_STATUS_UNKNOWN': cls.__constants['POWER_SUPPLY_STATUS_UNKNOWN'],
            'POWER_SUPPLY_STATUS_CHARGING': cls.__constants['POWER_SUPPLY_STATUS_CHARGING'],
            'POWER_SUPPLY_STATUS_DISCHARGING': cls.__constants['POWER_SUPPLY_STATUS_DISCHARGING'],
            'POWER_SUPPLY_STATUS_NOT_CHARGING': cls.__constants['POWER_SUPPLY_STATUS_NOT_CHARGING'],
            'POWER_SUPPLY_STATUS_FULL': cls.__constants['POWER_SUPPLY_STATUS_FULL'],
            'POWER_SUPPLY_HEALTH_UNKNOWN': cls.__constants['POWER_SUPPLY_HEALTH_UNKNOWN'],
            'POWER_SUPPLY_HEALTH_GOOD': cls.__constants['POWER_SUPPLY_HEALTH_GOOD'],
            'POWER_SUPPLY_HEALTH_OVERHEAT': cls.__constants['POWER_SUPPLY_HEALTH_OVERHEAT'],
            'POWER_SUPPLY_HEALTH_DEAD': cls.__constants['POWER_SUPPLY_HEALTH_DEAD'],
            'POWER_SUPPLY_HEALTH_OVERVOLTAGE': cls.__constants['POWER_SUPPLY_HEALTH_OVERVOLTAGE'],
            'POWER_SUPPLY_HEALTH_UNSPEC_FAILURE': cls.__constants['POWER_SUPPLY_HEALTH_UNSPEC_FAILURE'],
            'POWER_SUPPLY_HEALTH_COLD': cls.__constants['POWER_SUPPLY_HEALTH_COLD'],
            'POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE': cls.__constants['POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE'],
            'POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE': cls.__constants['POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE'],
            'POWER_SUPPLY_TECHNOLOGY_UNKNOWN': cls.__constants['POWER_SUPPLY_TECHNOLOGY_UNKNOWN'],
            'POWER_SUPPLY_TECHNOLOGY_NIMH': cls.__constants['POWER_SUPPLY_TECHNOLOGY_NIMH'],
            'POWER_SUPPLY_TECHNOLOGY_LION': cls.__constants['POWER_SUPPLY_TECHNOLOGY_LION'],
            'POWER_SUPPLY_TECHNOLOGY_LIPO': cls.__constants['POWER_SUPPLY_TECHNOLOGY_LIPO'],
            'POWER_SUPPLY_TECHNOLOGY_LIFE': cls.__constants['POWER_SUPPLY_TECHNOLOGY_LIFE'],
            'POWER_SUPPLY_TECHNOLOGY_NICD': cls.__constants['POWER_SUPPLY_TECHNOLOGY_NICD'],
            'POWER_SUPPLY_TECHNOLOGY_LIMN': cls.__constants['POWER_SUPPLY_TECHNOLOGY_LIMN'],
        }

    @property
    def POWER_SUPPLY_STATUS_UNKNOWN(self):
        """Message constant 'POWER_SUPPLY_STATUS_UNKNOWN'."""
        return Metaclass.__constants['POWER_SUPPLY_STATUS_UNKNOWN']

    @property
    def POWER_SUPPLY_STATUS_CHARGING(self):
        """Message constant 'POWER_SUPPLY_STATUS_CHARGING'."""
        return Metaclass.__constants['POWER_SUPPLY_STATUS_CHARGING']

    @property
    def POWER_SUPPLY_STATUS_DISCHARGING(self):
        """Message constant 'POWER_SUPPLY_STATUS_DISCHARGING'."""
        return Metaclass.__constants['POWER_SUPPLY_STATUS_DISCHARGING']

    @property
    def POWER_SUPPLY_STATUS_NOT_CHARGING(self):
        """Message constant 'POWER_SUPPLY_STATUS_NOT_CHARGING'."""
        return Metaclass.__constants['POWER_SUPPLY_STATUS_NOT_CHARGING']

    @property
    def POWER_SUPPLY_STATUS_FULL(self):
        """Message constant 'POWER_SUPPLY_STATUS_FULL'."""
        return Metaclass.__constants['POWER_SUPPLY_STATUS_FULL']

    @property
    def POWER_SUPPLY_HEALTH_UNKNOWN(self):
        """Message constant 'POWER_SUPPLY_HEALTH_UNKNOWN'."""
        return Metaclass.__constants['POWER_SUPPLY_HEALTH_UNKNOWN']

    @property
    def POWER_SUPPLY_HEALTH_GOOD(self):
        """Message constant 'POWER_SUPPLY_HEALTH_GOOD'."""
        return Metaclass.__constants['POWER_SUPPLY_HEALTH_GOOD']

    @property
    def POWER_SUPPLY_HEALTH_OVERHEAT(self):
        """Message constant 'POWER_SUPPLY_HEALTH_OVERHEAT'."""
        return Metaclass.__constants['POWER_SUPPLY_HEALTH_OVERHEAT']

    @property
    def POWER_SUPPLY_HEALTH_DEAD(self):
        """Message constant 'POWER_SUPPLY_HEALTH_DEAD'."""
        return Metaclass.__constants['POWER_SUPPLY_HEALTH_DEAD']

    @property
    def POWER_SUPPLY_HEALTH_OVERVOLTAGE(self):
        """Message constant 'POWER_SUPPLY_HEALTH_OVERVOLTAGE'."""
        return Metaclass.__constants['POWER_SUPPLY_HEALTH_OVERVOLTAGE']

    @property
    def POWER_SUPPLY_HEALTH_UNSPEC_FAILURE(self):
        """Message constant 'POWER_SUPPLY_HEALTH_UNSPEC_FAILURE'."""
        return Metaclass.__constants['POWER_SUPPLY_HEALTH_UNSPEC_FAILURE']

    @property
    def POWER_SUPPLY_HEALTH_COLD(self):
        """Message constant 'POWER_SUPPLY_HEALTH_COLD'."""
        return Metaclass.__constants['POWER_SUPPLY_HEALTH_COLD']

    @property
    def POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE(self):
        """Message constant 'POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE'."""
        return Metaclass.__constants['POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE']

    @property
    def POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE(self):
        """Message constant 'POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE'."""
        return Metaclass.__constants['POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE']

    @property
    def POWER_SUPPLY_TECHNOLOGY_UNKNOWN(self):
        """Message constant 'POWER_SUPPLY_TECHNOLOGY_UNKNOWN'."""
        return Metaclass.__constants['POWER_SUPPLY_TECHNOLOGY_UNKNOWN']

    @property
    def POWER_SUPPLY_TECHNOLOGY_NIMH(self):
        """Message constant 'POWER_SUPPLY_TECHNOLOGY_NIMH'."""
        return Metaclass.__constants['POWER_SUPPLY_TECHNOLOGY_NIMH']

    @property
    def POWER_SUPPLY_TECHNOLOGY_LION(self):
        """Message constant 'POWER_SUPPLY_TECHNOLOGY_LION'."""
        return Metaclass.__constants['POWER_SUPPLY_TECHNOLOGY_LION']

    @property
    def POWER_SUPPLY_TECHNOLOGY_LIPO(self):
        """Message constant 'POWER_SUPPLY_TECHNOLOGY_LIPO'."""
        return Metaclass.__constants['POWER_SUPPLY_TECHNOLOGY_LIPO']

    @property
    def POWER_SUPPLY_TECHNOLOGY_LIFE(self):
        """Message constant 'POWER_SUPPLY_TECHNOLOGY_LIFE'."""
        return Metaclass.__constants['POWER_SUPPLY_TECHNOLOGY_LIFE']

    @property
    def POWER_SUPPLY_TECHNOLOGY_NICD(self):
        """Message constant 'POWER_SUPPLY_TECHNOLOGY_NICD'."""
        return Metaclass.__constants['POWER_SUPPLY_TECHNOLOGY_NICD']

    @property
    def POWER_SUPPLY_TECHNOLOGY_LIMN(self):
        """Message constant 'POWER_SUPPLY_TECHNOLOGY_LIMN'."""
        return Metaclass.__constants['POWER_SUPPLY_TECHNOLOGY_LIMN']


class BatteryState(metaclass=Metaclass):
    """
    Message class 'BatteryState'.

    Constants:
      POWER_SUPPLY_STATUS_UNKNOWN
      POWER_SUPPLY_STATUS_CHARGING
      POWER_SUPPLY_STATUS_DISCHARGING
      POWER_SUPPLY_STATUS_NOT_CHARGING
      POWER_SUPPLY_STATUS_FULL
      POWER_SUPPLY_HEALTH_UNKNOWN
      POWER_SUPPLY_HEALTH_GOOD
      POWER_SUPPLY_HEALTH_OVERHEAT
      POWER_SUPPLY_HEALTH_DEAD
      POWER_SUPPLY_HEALTH_OVERVOLTAGE
      POWER_SUPPLY_HEALTH_UNSPEC_FAILURE
      POWER_SUPPLY_HEALTH_COLD
      POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE
      POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE
      POWER_SUPPLY_TECHNOLOGY_UNKNOWN
      POWER_SUPPLY_TECHNOLOGY_NIMH
      POWER_SUPPLY_TECHNOLOGY_LION
      POWER_SUPPLY_TECHNOLOGY_LIPO
      POWER_SUPPLY_TECHNOLOGY_LIFE
      POWER_SUPPLY_TECHNOLOGY_NICD
      POWER_SUPPLY_TECHNOLOGY_LIMN
    """

    __slots__ = [
        '_header',
        '_voltage',
        '_current',
        '_charge',
        '_capacity',
        '_design_capacity',
        '_percentage',
        '_power_supply_status',
        '_power_supply_health',
        '_power_supply_technology',
        '_present',
        '_cell_voltage',
        '_location',
        '_serial_number',
    ]

    def __init__(self, **kwargs):
        assert all(['_' + key in self.__slots__ for key in kwargs.keys()]), \
            'Invalid arguments passed to constructor: %r' % kwargs.keys()
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.voltage = kwargs.get('voltage', float())
        self.current = kwargs.get('current', float())
        self.charge = kwargs.get('charge', float())
        self.capacity = kwargs.get('capacity', float())
        self.design_capacity = kwargs.get('design_capacity', float())
        self.percentage = kwargs.get('percentage', float())
        self.power_supply_status = kwargs.get('power_supply_status', int())
        self.power_supply_health = kwargs.get('power_supply_health', int())
        self.power_supply_technology = kwargs.get('power_supply_technology', int())
        self.present = kwargs.get('present', bool())
        self.cell_voltage = kwargs.get('cell_voltage', list())
        self.location = kwargs.get('location', str())
        self.serial_number = kwargs.get('serial_number', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        from std_msgs.msg import Header
        assert \
            isinstance(value, Header), \
            "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def voltage(self):
        """Message field 'voltage'."""
        return self._voltage

    @voltage.setter
    def voltage(self, value):
        assert \
            isinstance(value, float), \
            "The 'voltage' field must of type 'float'"
        self._voltage = value

    @property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        assert \
            isinstance(value, float), \
            "The 'current' field must of type 'float'"
        self._current = value

    @property
    def charge(self):
        """Message field 'charge'."""
        return self._charge

    @charge.setter
    def charge(self, value):
        assert \
            isinstance(value, float), \
            "The 'charge' field must of type 'float'"
        self._charge = value

    @property
    def capacity(self):
        """Message field 'capacity'."""
        return self._capacity

    @capacity.setter
    def capacity(self, value):
        assert \
            isinstance(value, float), \
            "The 'capacity' field must of type 'float'"
        self._capacity = value

    @property
    def design_capacity(self):
        """Message field 'design_capacity'."""
        return self._design_capacity

    @design_capacity.setter
    def design_capacity(self, value):
        assert \
            isinstance(value, float), \
            "The 'design_capacity' field must of type 'float'"
        self._design_capacity = value

    @property
    def percentage(self):
        """Message field 'percentage'."""
        return self._percentage

    @percentage.setter
    def percentage(self, value):
        assert \
            isinstance(value, float), \
            "The 'percentage' field must of type 'float'"
        self._percentage = value

    @property
    def power_supply_status(self):
        """Message field 'power_supply_status'."""
        return self._power_supply_status

    @power_supply_status.setter
    def power_supply_status(self, value):
        assert \
            isinstance(value, int), \
            "The 'power_supply_status' field must of type 'int'"
        assert value >= 0 and value < 256, \
            "The 'power_supply_status' field must be an unsigned integer in [0, 256)"
        self._power_supply_status = value

    @property
    def power_supply_health(self):
        """Message field 'power_supply_health'."""
        return self._power_supply_health

    @power_supply_health.setter
    def power_supply_health(self, value):
        assert \
            isinstance(value, int), \
            "The 'power_supply_health' field must of type 'int'"
        assert value >= 0 and value < 256, \
            "The 'power_supply_health' field must be an unsigned integer in [0, 256)"
        self._power_supply_health = value

    @property
    def power_supply_technology(self):
        """Message field 'power_supply_technology'."""
        return self._power_supply_technology

    @power_supply_technology.setter
    def power_supply_technology(self, value):
        assert \
            isinstance(value, int), \
            "The 'power_supply_technology' field must of type 'int'"
        assert value >= 0 and value < 256, \
            "The 'power_supply_technology' field must be an unsigned integer in [0, 256)"
        self._power_supply_technology = value

    @property
    def present(self):
        """Message field 'present'."""
        return self._present

    @present.setter
    def present(self, value):
        assert \
            isinstance(value, bool), \
            "The 'present' field must of type 'bool'"
        self._present = value

    @property
    def cell_voltage(self):
        """Message field 'cell_voltage'."""
        return self._cell_voltage

    @cell_voltage.setter
    def cell_voltage(self, value):
        from collections import Sequence
        from collections import Set
        from collections import UserList
        from collections import UserString
        assert \
            ((isinstance(value, Sequence) or
              isinstance(value, Set) or
              isinstance(value, UserList)) and
             not isinstance(value, str) and
             not isinstance(value, UserString) and
             all([isinstance(v, float) for v in value]) and
             True), \
            "The 'cell_voltage' field must be a set or sequence and each value of type 'float'"
        self._cell_voltage = value

    @property
    def location(self):
        """Message field 'location'."""
        return self._location

    @location.setter
    def location(self, value):
        assert \
            isinstance(value, str), \
            "The 'location' field must of type 'str'"
        self._location = value

    @property
    def serial_number(self):
        """Message field 'serial_number'."""
        return self._serial_number

    @serial_number.setter
    def serial_number(self, value):
        assert \
            isinstance(value, str), \
            "The 'serial_number' field must of type 'str'"
        self._serial_number = value
