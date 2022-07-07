cmake_minimum_required(VERSION 3.0)

set(PROJECT_NAME Calculator)

project(${PROJECT_NAME})

add_subdirectory(libs)

add_executable(Calculator main.cpp)

target_link_libraries(Calculator my_lib)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

add_custom_command(TARGET Calculator POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/list.txt ${CMAKE_CURRENT_BINARY_DIR}/list.txt)
