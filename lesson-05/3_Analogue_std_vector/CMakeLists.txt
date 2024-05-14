cmake_minimum_required(VERSION 3.29)
project(Analogue_std_vector)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(EXECUTABLE_OUTPUT_PATH ../bin/)

include_directories(My_Vector)

add_executable(${PROJECT_NAME}
        main.cpp
        My_Vector/My_Vector.h)