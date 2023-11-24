cmake_minimum_required(VERSION 3.14)
project(Concursus-System--Tests VERSION 0.1 LANGUAGES CXX)
add_executable(${PROJECT_NAME}
    main.cpp
)


# include(ExternalProject)
# find_package(Git REQUIRED)

# ExternalProject_Add(
#     doctest
#     PREFIX ${CMAKE_BINARY_DIR}/doctest
#     GIT_REPOSITORY https://github.com/doctest/doctest.git
#     TIMEOUT 10
#     UPDATE_COMMAND ${GIT_EXECUTABLE} pull
#     CONFIGURE_COMMAND ""
#     BUILD_COMMAND ""
#     INSTALL_COMMAND ""
#     LOG_DOWNLOAD ON
# )

# # Expose required variable (DOCTEST_INCLUDE_DIR) to parent scope
# ExternalProject_Get_Property(doctest source_dir)
# set(DOCTEST_INCLUDE_DIR ${source_dir}/doctest CACHE INTERNAL "Path to include folder for doctest")


# add_executable(${PROJECT_NAME} tests/test-main.cpp)

# # add_subdirectory(src)
# add_subdirectory(tests)

# enable_testing()
# target_include_directories(${PROJECT_NAME} PUBLIC ${DOCTEST_INCLUDE_DIR})
# target_link_libraries(${PROJECT_NAME} PRIVATE test_library)
