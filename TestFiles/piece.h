#include "position.h"
#include "uiDraw.h"
#include "move.h"

#pragma once

class Board; // delegate the call to class

class Piece
{
protected:
    Position position;
    bool fWhite;
    int nMoves;
    int lastMove;
public:
    Piece():lastMove(0), nMoves(0), fWhite(false){};
    Piece(int r, int c, bool white);
    void assign(Position pos);
    bool isWhite();
    int getLastMove();
    int getNMoves();
    Position getPosition();
    bool checkIfJustMoved(Board board);
    virtual char getLetter() =0;
//    virtual void display(ogstream gout);
//    virtual Move getMoves(Board board);
    


};
