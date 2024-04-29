cmake_minimum_required(VERSION 3.28)

project(Smart_Array)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(EXECUTABLE_OUTPUT_PATH ../bin/)

include_directories(Smart_Array_lib)
add_subdirectory(Smart_Array_lib)

add_executable(Smart_Array main.cpp)

include_directories(Smart_Array_lib/include)

target_link_libraries(Smart_Array Smart_Array_lib)
