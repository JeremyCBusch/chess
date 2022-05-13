#include "piece.h"

#pragma once
class Pawn: public Piece
{
public:
    /*Pawn(int r, int c, bool b): Piece{r,c,b}
    {
        
    };*/

   char getLetter();
   void display(ogstream gout);
   getMoves(Board board);
};

