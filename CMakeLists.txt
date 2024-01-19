cmake_minimum_required(VERSION 3.26)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 17)

add_executable(DesignPattern src/Decorator.cpp)
add_executable(FactoryMethod  src/FactoryMethod.cpp)
add_executable(AbstractFactory src/AbstractFactory.cpp)
add_executable(Singleton src/Singleton.cpp)
add_executable(Command src/Command.cpp)
add_executable(Adapter src/Adapter.cpp)

include_directories(include/)
add_executable(Facade src/Facade.cpp include/Facade.h)
add_executable(Proxy src/Proxy.cpp include/Proxy.h)