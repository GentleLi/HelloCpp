cmake_minimum_required(VERSION 3.17)
project(HelloCpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(HelloCpp main.cpp person.h shape.h file.h shape_type.h time_util.h)