cmake_minimum_required(VERSION 3.14)
project(src-main-directory)

add_library(src-main INTERFACE)

add_subdirectory(Actions)
add_subdirectory(Inputs)

target_link_libraries(src-main INTERFACE
    actions-main
    inputs-main
)