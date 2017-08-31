cmake_minimum_required(VERSION 3.8)
project(FactoryExample)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Alpha.h Apple.cpp Apple.h Axle.cpp Axle.h Anchor.cpp Anchor.h GenericFactory.h Beta.cpp Beta.h)
add_executable(FactoryExample ${SOURCE_FILES})