#include "Layer.h"
#include <stdio.h>

#ifndef LAYER
#define LAYER

Layer::Layer(){
    pos[0] = 0;
    pos[1] = 0;
};

Layer::~Layer(){};

int Layer::render(SDL_Renderer *renderer) {

    for(int i = 0; i < neurn; i++) {
        
        int x = pos[0];
        int y = pos[1] + i*(neurnW+20);
        SDL_Rect center = {x-offsetC, y-offsetC, centW,centW};

        currRect.x = x - offsetW;
        currRect.y = y - offsetW;

        currRect.w = neurnW;
        currRect.h = neurnW;

        SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF ); 
        SDL_RenderFillRect(renderer, &center);
        SDL_SetRenderDrawColor(renderer, 0,0,0,0);
        SDL_RenderDrawRect(renderer, &currRect); 
    }
    return 0;
}

int Layer::SetPosition(int xpos, int ypos){
    pos[0] = xpos;
    pos[1] = ypos;

    return 0;
};

#endif LAYER