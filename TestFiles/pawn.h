
   
#include "piece.h"

#pragma once

class Pawn: public Piece
{
public:
    char letter;
    Pawn(int r, int c, bool b): Piece{r,c,b} {
        setLetter();
    };
    Pawn(){
        setLetter();
    };
    char getLetter();
    void setLetter();
//   void display(ogstream gout);
//   Move getMoves(Board board);
};
