#Sources
file(GLOB SRCS "src/*.cpp")
#Headers
file(GLOB HDRS "include/*.h")

cmake_minimum_required(VERSION 3.28)

project(Smart_Array_lib)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../../bin/)

include_directories(./include/)

set(SOURCES ${SRCS})
set(HEADERS ${HDRS})

add_library(Smart_Array_lib SHARED ${HEADERS} ${SOURCES})
