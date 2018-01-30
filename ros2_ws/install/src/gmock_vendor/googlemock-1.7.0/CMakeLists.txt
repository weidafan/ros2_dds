project(gmock CXX C)
cmake_minimum_required(VERSION 2.6.2)

find_package(Threads)

include_directories(include)

add_library(gmock STATIC src/gmock-gtest-all.cc)
target_link_libraries(gmock ${CMAKE_THREAD_LIBS_INIT})

add_library(gmock_main STATIC src/gmock-gtest-all.cc src/gmock_main.cc)
