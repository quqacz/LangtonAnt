#ifndef TILE
#define TILE

#include<iostream>
using namespace std;

class Tile{
    bool visited = false;
public:
    Tile() = default;
    virtual ~Tile() = default;
    virtual void print() const { !visited ? cout<<" " : cout<<char(219);}
    bool Visited() const { return visited;}
    void reverse() { visited = !visited;}
};


#endif // TILE

