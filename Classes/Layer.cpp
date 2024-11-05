#include "Layer.h"
#include <stdio.h>

#ifndef LAYER
#define LAYER

Layer::Layer(){
    pos[0] = 0;
    pos[1] = 0;

    printf("size of layer created: %i",sizeof(neurons));

    for(int i = 0; i < sizeof(neurons); i++) {
        neurons[i].h = 40;
        neurons[i].w = 40;

        neurons[i].x = pos[0];
        neurons[i].y = pos[1] + i*50 ;
    }
};

Layer::~Layer(){};

int Layer::render(SDL_Renderer *renderer) {
    for(int i = 0; i < sizeof(neurons); i++) {
        SDL_RenderDrawRect(renderer, &neurons[i]);
    }
}

int Layer::SetPosition(int xpos, int ypos){
    pos[0] = xpos;
    pos[1] = ypos;
    updatePostion();
    return 0;
};

int Layer::updatePostion(){
    for(int i = 0; i < sizeof(neurons); i++) {
        
        neurons[i].x = pos[0];
        neurons[i].y = pos[1] + i*50 ;
    }
    return 0;
}

#endif LAYER