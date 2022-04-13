cmake_minimum_required(VERSION 3.15)
project(consold)

find_package(raylib 3.0 REQUIRED)

set(CMAKE_CXX_STANDARD 20)

set(SRC src/board.cpp)

add_executable(${PROJECT_NAME} src/main.cpp ${SRC})

target_link_libraries(${PROJECT_NAME} raylib)