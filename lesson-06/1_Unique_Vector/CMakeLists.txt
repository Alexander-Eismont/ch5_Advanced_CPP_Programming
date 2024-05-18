cmake_minimum_required(VERSION 3.29)
project(Unique_Vector)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(EXECUTABLE_OUTPUT_PATH ../bin/)

include_directories(Remove Duplicates)

add_executable(${PROJECT_NAME}
        main.cpp
        "Remove Duplicates/Remove_Duplicate_sort.cpp"
        "Remove Duplicates/Remove_Duplicate_set.cpp")
