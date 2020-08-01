project(ArithmeticEngines)

cmake_minimum_required (VERSION 3.5)

add_definitions(-std=c++0x)

set(sources
    src/main.cpp 
    src/Multiplier.cpp 
    include/Multiplier.h
    include/Arithmetic.h
    include/Factory.h
    include/utils.h
    )



add_subdirectory(vendor/googletest/googletest)
add_subdirectory(src)
