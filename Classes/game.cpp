#include <stdio.h>
#include <string>
#include <cmath>

#include "Game.h"

#ifndef GAME
#define GAME

SDL_Texture* custodesTex;
SDL_Rect testR = {10,10,4,4};


Game::Game(){

}

Game::~Game(){

}

void Game::init(const char *title, int xpos, int ypos, int height, int width, bool fullscreen) {

    int flags = 0;
    if(fullscreen){
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if(SDL_Init(SDL_INIT_EVERYTHING)==0){
        printf("System initialized..\n");
        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        if(window){
            printf("window created..\n");
        }

        renderer = SDL_CreateRenderer(window, -1, 0);
        if(renderer){
            SDL_SetRenderDrawColor(renderer, 255,255,255,255);
            printf("renderer created..\n");
        }

        isRunning = true;
    } else {
        isRunning = false;
    }

    SDL_Surface* custode = IMG_Load("assets/custode.png");
    SDL_Surface *iconSurface = IMG_Load("assests/custode.ico");

    // layer->SetPosition(10,10);

    SDL_SetWindowIcon(window, iconSurface);

    custodesTex = SDL_CreateTextureFromSurface(renderer, custode);

    SDL_FreeSurface(iconSurface);
}

void Game::handleEvents(){

    SDL_Event event; 
    SDL_PollEvent(&event);
    
    switch(event.type){
        case SDL_QUIT:
            isRunning = false;
            break;
        default:
            break;
    }
}

void Game::update(){
    cnt += 0.01;
    testR.x = cnt;
}

void Game::render(){
    //render stuff like in draw?
    // SDL_RenderCopy(renderer, custodesTex, NULL, &destR);
    // SDL_SetRenderDrawColor(renderer, 0,0,0,255);
    
    // SDL_RenderFillRect(renderer, &testR);
    // SDL_SetRenderDrawColor(renderer, 255,255,255,255);

    //THIS IS IMPORTANT FOR THE END
    SDL_RenderPresent(renderer);
}

void Game::renderPoint(int x, int y, int label) {

    SDL_Rect center = {x-2, y-2, 4,4};
    if(label == 1) {
        SDL_SetRenderDrawColor( renderer, 0xFF, 0x00, 0x00, 0xFF );
    } else {
        SDL_SetRenderDrawColor( renderer, 0,0,0, 0xFF );
    }
    	
    SDL_RenderFillRect(renderer, &center);
}

void Game::clearScreen() {
    SDL_SetRenderDrawColor( renderer, 0xFF, 0xFF, 0xFF, 0xFF );
	SDL_RenderClear( renderer );
}

void Game::clean(){
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    printf("Game cleaned..\n");
}

#endif