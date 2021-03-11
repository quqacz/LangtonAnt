#include "board.h"

Board::Board(int _h = 10, int _w = 10)
{
    h = _h;
    w = _w;
    arr = new  Tile**[h];
    for(int i =0; i < h; i ++){
        arr[i] = new Tile*[w];
        for(int j=0; j < w; j++)
            arr[i][j] = new Tile;
    }
    ant = new Ant(w/2,h/2);
    arr[h/2][w/2]->reverse();
}

Board::~Board()
{
    for(int i =0; i < h; i ++){
        for(int j=0; j < w; j++)
            delete arr[i][j];
        delete arr[i];
    }
    delete arr;
    ant = nullptr;
}

void Board::progress()
{
    if(arr[ant->getY()][ant->getX()]->Visited()){
        ant->rotate(-1);
    }else{
        ant->rotate(1);
    }
    arr[ant->getY()][ant->getX()]->reverse();
    ant->move(w,h);
}

void Board::print()
{
    for(int i = 0; i < h; i ++){
        for(int j =0; j < w; j ++)
            ant->getY() == i && ant->getX() == j ? ant->print(): arr[i][j]->print();
        cout<<endl;
    }
    cout<<endl;
}
