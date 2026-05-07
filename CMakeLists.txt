cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(drohne C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)

pico_sdk_init()

add_executable(drohne
    src/main.cpp
    src/motor.cpp
    src/servo.cpp
    src/pid.cpp
    src/encoder.cpp
)

target_include_directories(drohne PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/include
)

target_link_libraries(drohne
    pico_stdlib
)

pico_add_extra_outputs(drohne)
