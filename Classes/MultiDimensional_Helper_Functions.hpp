/*header file for main.cpp*/
#include <iostream>
#include <iomanip> 
using namespace std;

class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row,int column);
    int fourInRow(); //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
};

//TODO: complete the class definition

Gameboard::Gameboard(){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            gameSpace[i][j] = '-';
        }
    }
    
}

void Gameboard::printInfo(){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout<<gameSpace[i][j]<<"\n";
        }
    }
}
