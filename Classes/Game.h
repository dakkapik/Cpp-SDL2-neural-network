//THIS ARE GUARDS FIND OUT HOW THEY WORK, THEY HELP ONLY COMPILING THE REQUIRED CODE

#ifndef GAME_H
#define GAME_H

#include <SDL.h>
#include <SDL_image.h>
#include "Layer.h"


class Game {
    public:
        Game();
        ~Game();

        void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
        void handleEvents();
        void update();
        void render();
        void renderPoint(int x, int y, int label);
        void clearScreen();
        void clean();


        bool running() { return isRunning; }
    
    private:
        bool isRunning;
        float cnt;
        SDL_Window *window;
        SDL_Renderer *renderer;
        Layer layer;
        
};

#endif GAME_H