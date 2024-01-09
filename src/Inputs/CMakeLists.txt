cmake_minimum_required(VERSION 3.14)
project(inputs-main-directory)

add_library(inputs-main
    InputHandler.cpp
)

target_include_directories(inputs-main PUBLIC
    ${CMAKE_SOURCE_DIR}/include/Inputs
    ${CMAKE_SOURCE_DIR}/include/Helpers
)