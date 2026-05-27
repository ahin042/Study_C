cmake_minimum_required(VERSION 3.20)
project(c_cpp)

set(CMAKE_CXX_STANDARD 20)

file(GLOB SOURCES "*.cpp")

foreach(src ${SOURCES})
    get_filename_component(name ${src} NAME_WE)
    add_executable(${name} ${src})
endforeach()