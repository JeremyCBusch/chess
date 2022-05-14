#include "piece.h"
#include "uiDraw.h"
#include "move.h"
#include <string>
#pragma once
//
//class Position;
//class Move;
class Piece;
class Board
{
    
private:
    //member variables

  
    ogstream gout;

    void assertBoard();

public:
    int currentMove; // Which Move I am currently On
    Piece* board[64];
   Board();
   Board(ogstream gout);
    int getCurrentMove();
    bool whiteTurn();
    void display(int posHover, int posSel);
    int get(Position pos);
    void free();
    void reset();
    void move(std::string move);
    void swap(Position &pos1, Position &pos2);
    
    // Assignment Operator
    
//    Board &operator = (Piece &piece)
//    {
//        board[1] = piece;
//        return *this;
//    }
//
    // Subscript Operator
    Piece &operator [] (int index)
    {
        return *(board[index]);
    }
        
    
    
    
    
};
