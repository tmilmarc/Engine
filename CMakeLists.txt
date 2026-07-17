cmake_minimum_required(VERSION 3.20)

project(Engine)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Tell CMake where SDL3 is located
set(CMAKE_PREFIX_PATH
    "${CMAKE_SOURCE_DIR}/third_party/SDL3/SDL3-3.4.12"
)

#Find SDL3
find_package(SDL3 REQUIRED)


#Create the Engine library
add_library(Engine
    engine/src/Engine.cpp
)

#Engine needs access to its own headers
target_include_directories(Engine PUBLIC
    engine/include
)

#Engine needs access to SDL3
target_link_libraries(Engine
    SDL3::SDL3
)

#Create the game executable
add_executable(Game
    game/main.cpp
)

#Game uses the engine
target_link_libraries(Game

    Engine    
)



