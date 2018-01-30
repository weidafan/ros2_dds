# CMake generated Testfile for 
# Source directory: /home/aust/ros2_ws/src/ros2/console_bridge/test
# Build directory: /home/aust/ros2_ws/build/console_bridge/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(console_TEST "/home/aust/ros2_ws/build/console_bridge/bin/console_TEST" "--gtest_output=xml:/home/aust/ros2_ws/build/console_bridge/test_results/console_TEST.xml")
set_tests_properties(console_TEST PROPERTIES  TIMEOUT "240")
