add_executable(ArithmeticEngines main.cpp Divider.cpp Multiplier.cpp ../include/Multiplier.h ../include/Arithmetic.h ../include/Divider.h)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)