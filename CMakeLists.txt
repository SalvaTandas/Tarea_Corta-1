cmake_minimum_required(VERSION 3.13)
project(Tarea_Corta)

set(CMAKE_CXX_STANDARD 14)

add_executable(Tarea_Corta Main/main.cpp Structures/Node.cpp Logic/Process.cpp Structures/Lane.cpp Logic/Factory.cpp Logic/Process_Maker.cpp)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(Tarea_Corta Threads::Threads)

set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package(Boost)