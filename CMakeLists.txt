cmake_minimum_required(VERSION 3.26)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 17)

add_executable(DesignPattern
        src/Decorator.cpp)

add_executable(FactoryMethod  src/FactoryMethod.cpp)
add_executable(AbstractFactory src/AbstractFactory.cpp)

include_directories(include/)