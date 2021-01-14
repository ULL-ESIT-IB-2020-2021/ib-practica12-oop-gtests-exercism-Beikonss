cmake_minimum_required(VERSION 3.0)
project(complejo
    VERSION 1.0
    DESCRIPTION "operaciones con números complejos"
    LANGUAGES CXX)
add_executable(complejo
    src/complejo.cc
    src/complejo.h
    src/complejos.cc)
target_compile_features(complejo PRIVATE cxx_std_20)