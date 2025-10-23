cmake_minimum_required(VERSION 3.20)
project(Class_8_Debug C)
set(CMAKE_C_STANDARD 99)

# 自动递归包含所有源文件（含子文件夹）
file(GLOB_RECURSE SRC_FILES
    "*.c"
    "*.cpp"
)

add_executable(Class_8_Debug ${SRC_FILES})
