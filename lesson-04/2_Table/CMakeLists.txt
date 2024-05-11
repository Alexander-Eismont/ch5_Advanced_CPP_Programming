# Sources
file(GLOB SRCS "Table/*.cpp")
#Headers
file(GLOB HDRS "Table/*.h")

cmake_minimum_required(VERSION 3.29)
project(Tables)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(EXECUTABLE_OUTPUT_PATH ../bin/)

add_library(table_lib STATIC ${SRCS} ${HDRS})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} table_lib)