#include "board.h"
#include <set>
#include <fstream>        // for IFSTREAM
#include <string>         // for STRING
using namespace std;

#pragma once
class Rook : public Piece
{
public:
   char getLetter();
   void display(ogstream gout);
   set <int> getMoves(Board board);
};

