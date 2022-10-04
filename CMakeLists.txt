cmake_minimum_required(VERSION 3.24)
project(XOR_NEAT_HOSHI_VER2 CXX)

include_directories(include)

file(GLOB SOURCES "src/*cpp")

set(CMAKE_CXX_FLAGS "-std=c++17 -Wall -g")

add_executable(main ${SOURCES})