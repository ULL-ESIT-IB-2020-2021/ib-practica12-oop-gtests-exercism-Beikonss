cmake_minimum_required(VERSION 3.0)
project(complejo_modificacion
    VERSION 1.0
    DESCRIPTION "operaciones con números complejos/modificacion"
    LANGUAGES CXX)
add_executable(complejo_modificacion
    src/complejo_modificacion.cc
    src/Complejo.h
    src/Complejos.cc)
target_compile_features(complejo_modificacion PRIVATE cxx_std_20)