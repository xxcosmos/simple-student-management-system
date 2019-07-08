cmake_minimum_required(VERSION 3.14)
project(student_demo)

set(CMAKE_CXX_STANDARD 14)

add_executable(student_demo main.cpp student.cpp student.h student_utils.cpp student_utils.h)