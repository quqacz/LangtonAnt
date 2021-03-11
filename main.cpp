#include"board.h"
#include <windows.h>
#include <cstdio>
using namespace std;

void pos(short C, short R)
{
    COORD c;
    c.X = C;
    c.Y = R;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), c );
}

int main(){
Board b(25,25);
int it = 0;
while(true){
system("CLS");
pos(0,0);
b.print();
b.progress();
cout<<"move: "<<it++<<endl;
for(int i =0 ; i <200000000;i++){}
for(int i =0 ; i <200000000;i++){}
for(int i =0 ; i <200000000;i++){}
}
return 0;
}
