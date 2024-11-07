#include <SDL.h>

#ifndef LAYER_H
#define LAYER_H

class Layer {
    public:
        Layer();
        ~Layer();

        int render(SDL_Renderer *renderer);

        int SetPosition(int xpos, int ypos);
        int setNeurons(int neurons) {neurons = neurn;};

    private:

        int neurn = 8;
        int neurnW = 16;
        int centW = 4;
        int offsetC = centW/2;
        int offsetW = neurnW/2;
        int pos[2];
        SDL_Rect currRect;
};

#endif LAYER_H