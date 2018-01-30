# Install script for directory: /home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/aust/ros2_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so.1.4.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so.1.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN/../lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/aust/ros2_ws/build/orocos_kdl/src/liborocos-kdl.so.1.4.0"
    "/home/aust/ros2_ws/build/orocos_kdl/src/liborocos-kdl.so.1.4"
    "/home/aust/ros2_ws/build/orocos_kdl/src/liborocos-kdl.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so.1.4.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so.1.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "::::::::::::::"
           NEW_RPATH "$ORIGIN/../lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kdl" TYPE FILE FILES
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/jntspaceinertiamatrix.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainfksolver.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/treejnttojacsolver.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/velocityprofile.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/framevel.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainjnttojacsolver.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/kinfam.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/path_circle.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/motion.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainiksolvervel_pinv_givens.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/treefksolverpos_recursive.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainiksolverpos_nr_jl.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/treeiksolvervel_wdls.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/rotational_interpolation_sa.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/path.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainfksolverpos_recursive.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainfksolvervel_recursive.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/treeiksolver.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/trajectory_composite.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainiksolvervel_pinv_nso.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chain.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/jntarrayacc.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/trajectory.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/path_point.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/trajectory_segment.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/frameacc_io.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/jntarrayvel.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/treeiksolverpos_nr_jl.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainjnttojacdotsolver.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/joint.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/velocityprofile_dirac.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainidsolver.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/velocityprofile_rect.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/path_cyclic_closed.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/treeiksolverpos_online.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainiksolverpos_nr.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainiksolvervel_pinv.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainidsolver_recursive_newton_euler.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/jacobian.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/frames.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/velocityprofile_spline.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/solveri.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/path_composite.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/kinfam_io.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/velocityprofile_trap.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/kdl.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/velocityprofile_traphalf.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/jntarray.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainiksolver.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/rotationalinertia.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/path_line.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/frames_io.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chaindynparam.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/segment.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/framevel_io.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/treefksolver.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/trajectory_stationary.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainidsolver_vereshchagin.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/path_roundedcomposite.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/tree.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainiksolverpos_lma.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/rigidbodyinertia.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/stiffness.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/articulatedbodyinertia.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/rotational_interpolation.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainiksolvervel_wdls.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/frameacc.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/frames.inl"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/framevel.inl"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/frameacc.inl"
    "/home/aust/ros2_ws/build/orocos_kdl/src/config.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kdl/utilities" TYPE FILE FILES
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/rall1d.h"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/error_stack.h"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/rall2d.h"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/kdl-config.h"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/traits.h"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/rall2d_io.h"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/utility.h"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/utility_io.h"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/rallNd.h"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/error.h"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/rall1d_io.h"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/svd_eigen_HH.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/svd_eigen_Macie.hpp"
    "/home/aust/ros2_ws/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/svd_HH.hpp"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/aust/ros2_ws/build/orocos_kdl/src/orocos-kdl.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/aust/ros2_ws/build/orocos_kdl/src/orocos_kdl.pc")
endif()

