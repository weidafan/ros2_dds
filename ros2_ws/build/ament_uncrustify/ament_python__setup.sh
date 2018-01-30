#!/usr/bin/env sh

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/uncrustify/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/uncrustify/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/uncrustify/local_setup.sh"
fi

