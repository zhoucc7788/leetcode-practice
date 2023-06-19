CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

project(322_coinChange)

set(TARGET coinChange_test)

message("TARGET: ${TARGET}")

INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/include)

file(GLOB SOURCES ${CMAKE_SOURCE_DIR}/src/*.cpp)

message("SOURCES: ${SOURCES}")

file(GLOB TESTS ${CMAKE_SOURCE_DIR}/tests/*.cpp)

message("TESTS: ${TESTS}")

set(CMAKE_CXX_FLAGS "-g -O0 -Wall")

set(CMAKE_BUILD_TYPE Debug)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR})

add_executable(${TARGET} ${TESTS} ${SOURCES})
