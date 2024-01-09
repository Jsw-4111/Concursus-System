cmake_minimum_required(VERSION 3.14)
project(Concursus-System--Tests VERSION 0.1 LANGUAGES CXX)

include(FetchContent)
FetchContent_Declare(
    doctest
    GIT_REPOSITORY https://github.com/doctest/doctest.git
    GIT_TAG v2.4.11
)
FetchContent_MakeAvailable(doctest)

set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include" CACHE INTERNAL "Path to include folder for project")

include_directories(
    ${INCLUDE_DIR}/Actions
    ${INCLUDE_DIR}/Helpers
    ${INCLUDE_DIR}/Inputs
    ${INCLUDE_DIR}/doctest
    ${CMAKE_SOURCE_DIR}/tests/include
)

include(CTest)
enable_testing()

add_subdirectory(src)
target_link_libraries(src-main INTERFACE doctest)

add_subdirectory(tests)
target_link_libraries(test-main INTERFACE src-main)

SET(SOURCES
    ${test_sources}
)

add_executable(${CMAKE_PROJECT_NAME} tests/test-main.cpp ${SOURCES})

target_link_libraries(${CMAKE_PROJECT_NAME} PUBLIC 
    src-main
    doctest::doctest
)
