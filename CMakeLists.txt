cmake_minimum_required(VERSION 3.13)
project(Tarea_Corta)

set(CMAKE_CXX_STANDARD 14)

add_executable(Tarea_Corta Main/main.cpp Structures/Node.cpp Logic/Process.cpp Structures/Lane.cpp Logic/Factory.cpp)