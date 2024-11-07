#include "Classes/Game.h"
#include "Classes/Point.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Game *game = nullptr;
const int G_WIDTH = 800;
const int G_HEIGHT = 600;
const int INPUT_NUM = 400;

int main( int argc, char* args[] ){
    srand(time(nullptr));

    Point points[INPUT_NUM];

    for(int i = 0; i < INPUT_NUM; i++) {
        points[i].init(G_WIDTH, G_HEIGHT);
    }

    game = new Game();
    game->init("DakkaEngine", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,G_HEIGHT, G_WIDTH, false);

    while(game->running()){
        game->handleEvents();
        game->update();

        game->clearScreen();
        for(int i =0; i < INPUT_NUM; i++) {
            game->renderPoint(points[i].getX(), points[i].getY(), points[i].getLabel());
        }
        game->render();
        
    }

    game->clean();

    return 0;
}