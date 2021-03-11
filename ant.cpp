#include "ant.h"

Ant::Ant(int _x = 0, int _y = 0): x(_x), y(_y){
    rotation = 0;
    icon = rotationChar[rotation];
}

void Ant::rotate(int turn){
    rotation = (turn + rotation + 4)%4;
    icon = rotationChar[rotation];
}

void Ant::move(int w, int h){
    x = (rotationsPos[rotation][0] + x + w)%w;
    y = (rotationsPos[rotation][1] + y + h)%h;
}

