cmake_minimum_required(VERSION 3.20)

project(snake)

set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE HEADERS "inc/*.h")
file(GLOB_RECURSE SRCS "src/*.cpp")

add_executable(${PROJECT_NAME} main.cpp ${SRCS})

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/inc)