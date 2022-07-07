cmake_minimum_required(VERSION 3.0)

set(PROJECT_NAME TestProject)

project(${PROJECT_NAME})

add_subdirectory(libs)

add_executable(TestProject main.cpp)

target_link_libraries(TestProject my_lib)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
