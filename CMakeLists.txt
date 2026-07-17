cmake_minimum_required(VERSION 3.20)

project(Engine)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(Engine
    engine/src/Engine.cpp
)


add_executable(Game
    game/main.cpp
)

target_link_libraries(Game
    Engine    
)


target_include_directories(Engine PUBLIC
    engine/include
)
