cmake_minimum_required(VERSION 3.8)
project(FactoryExample)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Alpha.h)
add_executable(FactoryExample ${SOURCE_FILES})