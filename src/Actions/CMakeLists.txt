cmake_minimum_required(VERSION 3.14)
project(actions-main-directory)

set(action-test_sources
    ActionsManager.cpp
    ActionsModel.cpp
)

add_library(actions-main ${action-test_sources})

target_include_directories(actions-main PUBLIC
    ${CMAKE_SOURCE_DIR}/include/Actions
    ${CMAKE_SOURCE_DIR}/include/Helpers
)