cmake_minimum_required(VERSION 3.28)
project(options_pricing_model)

set(CMAKE_CXX_STANDARD 20)

add_executable(options_pricing_model main.cpp
        Headers/Option.h
        Headers/BlackScholes.h
        BlackScholes.cpp
        Headers/Greeks.h
        Option.cpp)
