#ifndef ANT
#define ANT

#include <iostream>
using namespace std;



class Ant{
    int x;
    int y;
    int rotation;
    char icon;
    char rotationChar[4] = {char(30),char(16),char(31),char(17)};
    int rotationsPos[4][2] = {{0,-1},{1,0},{0,1},{-1,0}};

public:
    Ant(int, int);
    virtual ~Ant() = default;
    char getIcon() const { return icon;}
    void print() const { cout<<getIcon();}
    int getX(){ return x;}
    int getY(){ return y;}
    void rotate(int);
    void move(int, int);
};
#endif // ANT
