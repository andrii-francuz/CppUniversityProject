cmake_minimum_required(VERSION 3.17)
project(MyProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(_
        Characters.h
        Mage.cpp
        main.cpp
        menu.cpp
        Thief.cpp
        Warrior.cpp)
