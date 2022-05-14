//
//  king.h
//  chessunit
//
//  Created by Sulav Dahal on 5/13/22.
//

#ifndef king_h
#define king_h


#endif /* king_h */

#include "piece.h"
#include "board.h"
#include <set>
#include <fstream>        // for IFSTREAM
#include <string>         // for STRING
using namespace std;

#pragma once
class King : public Piece
{
public:
   King(int r, int c, bool b) : Piece{ r,c,b } { };

   char getLetter();
   void display(ogstream gout);
   set <int> getMoves(const char* board);
};