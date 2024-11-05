#include <SDL.h>

#ifndef LAYER_H
#define LAYER_H

class Layer {
    public:
        Layer();
        ~Layer();

        int render(SDL_Renderer *renderer);

        int SetPosition(int xpos, int ypos);

    private:
        int updatePostion();
        int pos[2];
        SDL_Rect neurons[4];
};

#endif LAYER_H