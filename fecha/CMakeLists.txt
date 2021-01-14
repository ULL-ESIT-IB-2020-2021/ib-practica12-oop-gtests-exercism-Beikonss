cmake_minimum_required(VERSION 3.0)
project(fecha
    VERSION 1.0
    DESCRIPTION "Ordenador de fechas"
    LANGUAGES CXX)
add_executable(fecha
    src/fecha.h
    src/fechas.cc
    src/fecha.cc)
target_compile_features(fecha PRIVATE cxx_std_20)