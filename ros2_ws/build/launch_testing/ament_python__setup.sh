#!/usr/bin/env sh

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_flake8/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_flake8/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_flake8/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_pep257/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_pep257/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_pep257/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ament_index_python/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ament_index_python/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ament_index_python/local_setup.sh"
fi

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/launch/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/launch/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/launch/local_setup.sh"
fi

