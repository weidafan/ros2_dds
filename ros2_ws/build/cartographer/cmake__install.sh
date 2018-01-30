#!/usr/bin/env sh

if [ -n "$AMENT_TRACE_SETUP_FILES" ]; then
  echo ". \"/home/aust/ros2_ws/install/share/ceres_solver/local_setup.sh\""
fi
if [ -f "/home/aust/ros2_ws/install/share/ceres_solver/local_setup.sh" ]; then
  . "/home/aust/ros2_ws/install/share/ceres_solver/local_setup.sh"
fi

export CMAKE_PREFIX_PATH="$AMENT_PREFIX_PATH:$CMAKE_PREFIX_PATH"