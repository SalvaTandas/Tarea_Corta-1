cmake_minimum_required(VERSION 3.7)
project(Game)



set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Logic/Factory.cpp Logic/Factory.h Logic/Process.cpp Logic/Process.h Logic/Process_Maker.cpp Logic/Process_Maker.h Logic/Process_Manager.cpp Logic/Process_Manager.h Structures/Car_Lane.cpp Structures/Car_Lane.h Structures/MainLane.cpp Structures/MainLane.h Structures/Node.cpp Structures/Node.h Structures/WaitingQueue.cpp Structures/WaitingQueue.h)
add_executable(Game ${SOURCE_FILES})
FILE(COPY share-tech-mono.regular.ttf DESTINATION "${CMAKE_BINARY_DIR}")
# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED system graphics window network audio)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES})
endif()

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(Game Threads::Threads)

set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package(Boost)
