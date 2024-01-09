cmake_minimum_required(VERSION 3.14)
project(test-main-directory)

add_library(test-main INTERFACE)

add_subdirectory(Actions)

SET(test_sources
    ${actions-test_sources}
)

SET(test_sources
    ${test_sources}
    PARENT_SCOPE
)

target_link_libraries(test-main INTERFACE
    actions-test
)