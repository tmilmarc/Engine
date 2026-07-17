#include "Engine.h"
#include <iostream>

void Engine::run()
{
    while (running)
    {
        processInput();
        update();
        render();

        running = false;
    }
}

void Engine::processInput()
{
    std::cout << "Processing Input..." << std::endl; //Place holder

}

void Engine::update()
{
    std::cout << "Updating Game..." << std::endl; //Place holder
}

void Engine::render()
{
    std::cout << "Rendering Frame..." << std::endl; //Place holder
}