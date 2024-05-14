cmake_minimum_required(VERSION 3.29)
project(Removing_Duplicates)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(EXECUTABLE_OUTPUT_PATH ../bin/)

add_executable(${PROJECT_NAME} main.cpp)