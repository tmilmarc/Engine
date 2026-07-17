cmake_minimum_required(VERSION 3.20)

project(Engine)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(Engine
    game/main.cpp
    engine/src/Engine.cpp
)

target_include_directories(Engine PRIVATE
    engine/include
)
