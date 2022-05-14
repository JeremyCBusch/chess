//
//  space.h
//  chessunit
//
//  Created by Sulav Dahal on 5/13/22.
//
#include "piece.h"
#pragma once


class Space : public Piece
{
public:
    char letter;
    Space(): letter(' '){};
    Space(int row, int col, bool b): Piece(row, col, b),letter(' '){};
   char getLetter();
    void setLetter();
//   void display(ogstream gout);
//   Move getMoves(Board board);
};
