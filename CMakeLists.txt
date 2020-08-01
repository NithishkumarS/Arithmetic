project(calc)

cmake_minimum_required (VERSION 3.5)

add_definitions(-std=c++0x)

set(sources
    src/main.cpp 
    src/Multiplier.cpp 
    include/Multiplier.h
    src/Divider.cpp 
    include/Divider.h
    include/Arithmetic.h
    include/Factory.h
    include/utils.h
    )



add_subdirectory(vendor/googletest/googletest)
add_subdirectory(src)
add_subdirectory(test)
