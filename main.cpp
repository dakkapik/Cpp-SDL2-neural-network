#include "Classes/Game.h"

Game *game = nullptr;

int main( int argc, char* args[] ){

    game = new Game();

    game->init("DakkaEngine", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,600, 800, false);

    while(game->running()){
        game->handleEvents();
        game->update();
        game->render();
    }

    game->clean();

    return 0;
}