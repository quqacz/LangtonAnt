#ifndef BOARD
#define BOARD

#include<iostream>
#include"ant.h"
#include "tile.h"
using namespace std;
class Board{
    Tile* ** arr;
    int w;
    int h;
    Ant* ant;
public:
    Board(int, int);
    ~Board();
    void progress();
    void print();
};
#endif // BOARD
