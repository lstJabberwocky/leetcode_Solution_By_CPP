cmake_minimum_required(VERSION 4.1)
project(LeetCode)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SRC_LIST *.cpp)

foreach(src ${SRC_LIST})
    get_filename_component(name ${src} NAME_WE)
    add_executable(${name} ${src}
            209.cpp)
endforeach()



