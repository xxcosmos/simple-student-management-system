cmake_minimum_required(VERSION 3.14)
project(student_demo)

set(CMAKE_CXX_STANDARD 14)
add_executable(student_demo student_project/main.cpp student_project/student.cpp student_project/student.h student_project/student_utils.cpp student_project/student_utils.h homework_project/homework.cpp homework_project/homework.h common_utils.cpp common_utils.h homework_project/main.cpp homework_project/student_dev.cpp homework_project/student_dev.h homework_project/student_test.cpp homework_project/student_test.h)