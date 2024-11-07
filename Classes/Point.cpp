#include "Point.h"

Point::Point() {}

void Point::init(int width, int height){
    x = (rand() / (float)RAND_MAX) * width;
    y = (rand() / (float)RAND_MAX) * height;

    if(x > y) {
        label = 1;
    } else {
        label = -1;
    }
}


int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}

int Point::getLabel() {
    return label;
}
    
