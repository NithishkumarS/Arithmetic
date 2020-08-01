add_executable(ArithmeticEngines main.cpp Multiplier.cpp ../include/Multiplier.h ../include/Arithmetic.h )
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)