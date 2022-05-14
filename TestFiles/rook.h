//
//  rook.h
//  chessunit
//
//  Created by Sulav Dahal on 5/13/22.
//

#ifndef rook_h
#define rook_h


#endif /* rook_h */


#include "piece.h"
#include "board.h"
#include <set>
#include <fstream>        // for IFSTREAM
#include <string>         // for STRING
using namespace std;

#pragma once
class Queen : public Piece
{
public:
   Queen(int r, int c, bool b) : Piece{ r,c,b } { };

   char getLetter();
   void display(ogstream gout);
   set <int> getMoves(const char* board);
};