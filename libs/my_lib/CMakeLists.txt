cmake_minimum_required(VERSION 3.0)

add_library(my_lib STATIC my_lib.cpp my_lib.h)

option(TESTS "Enable ListTests" OFF)

if (TESTS)

    enable_testing()

    include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

    add_executable(Tests test_my_lib.cpp)

    target_link_libraries(Tests gtest gtest_main)

    target_link_libraries(Tests my_lib)

    add_test(NAME that-test-I-made COMMAND Tests)

    add_test(that-other-test-I-made Tests)


set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin/test/)

endif()

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
