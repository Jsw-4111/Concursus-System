cmake_minimum_required(VERSION 3.14)
project(actions-test-directory)

SET(actions-test_sources
    ${CMAKE_SOURCE_DIR}/tests/Actions/ActionsManager_test.cpp
    ${CMAKE_SOURCE_DIR}/tests/Actions/MockActionsModel.cpp
)

SET(actions-test_sources
    ${actions-test_sources}
    PARENT_SCOPE
)

add_library(actions-test ${actions-test_sources})

target_include_directories(actions-test PUBLIC
    ${CMAKE_SOURCE_DIR}/src/Actions
    ${CMAKE_SOURCE_DIR}tests/include
)