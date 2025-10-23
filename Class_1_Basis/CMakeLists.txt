cmake_minimum_required(VERSION 3.20)
project(Class_1 CXX)
set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SRC_FILES
    "None"
    "None"
    "None"
    "None"
    "Class_1_Common_Concepts_in_the_C.c"
)

add_executable(Class_1 ${SRC_FILES})
