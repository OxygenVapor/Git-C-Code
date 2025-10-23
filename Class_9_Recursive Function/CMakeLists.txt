cmake_minimum_required(VERSION 3.20)
project(Class_9_Recursive Function CXX)
set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SRC_FILES
    "Test.c"
    "What_is_Recursive_Function.c"
    "None"
    "None"
    "None"
    "None"
)

add_executable(Class_9_Recursive Function ${SRC_FILES})
