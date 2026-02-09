cmake_minimum_required(VERSION 4.1)
project(C_projects C)

set(CMAKE_C_STANDARD 11)

file(GLOB C_FILES "*.c")

foreach(file ${C_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file}
            nested_loops.c
    )
endforeach()