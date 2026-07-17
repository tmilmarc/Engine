#pragma once //Only include this header once

class Engine
{
    public:
        void run();
    
    private:
        bool running = true;
        
        void processInput();
        void update();
        void render();
};
