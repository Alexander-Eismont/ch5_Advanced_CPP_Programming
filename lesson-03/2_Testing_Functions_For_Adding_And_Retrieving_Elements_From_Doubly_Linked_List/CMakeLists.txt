cmake_minimum_required(VERSION 3.29)
project(Testing_Functions_For_Adding_And_Retrieving_Elements_From_Doubly_Linked_List)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(EXECUTABLE_OUTPUT_PATH ../bin/)

find_package(Catch2 3 REQUIRED)

add_subdirectory(Catch2)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2 Catch2::Catch2WithMain)
