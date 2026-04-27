cmake_minimum_required(VERSION 4.1)
project(LeetCode)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SRC_LIST *.cpp)

foreach(src ${SRC_LIST})
    get_filename_component(name ${src} NAME_WE)
    add_executable(${name} ${src}
            209.cpp
            24.cpp
            237.cpp
            19.cpp
            20.cpp
            341.cpp
            102.cpp
            279.cpp
            347.cpp
            104.cpp
            226.cpp
            112.cpp
            257.cpp
            129.cpp
            235.cpp
            17.cpp)
endforeach()



