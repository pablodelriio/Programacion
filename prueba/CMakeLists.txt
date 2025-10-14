cmake_minimum_required(VERSION 3.10)

project(prueba)

add_executable(prueba main.cpp)

install (TARGETS prueba RUNTIME DESTINATION bin)