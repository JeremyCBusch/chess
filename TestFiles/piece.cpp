#include "piece.h"
#include "position.h"

#include "piece.h"


Piece::Piece(int r, int c, bool white)
{
    this->position.setRow(r);
    this->position.setCol(c);
    this->fWhite = white;
}

void Piece::assign(Position pos)
{
    this->position.setRow(pos.getRow());
    this->position.setCol(pos.getCol());
}

bool Piece::isWhite()
{
    return this-> fWhite;
}

int Piece::getLastMove()
{
    return this->lastMove;
}

int Piece::getNMoves()
{
    return nMoves;
}

Position Piece::getPosition()
{
    return this->position;
}

//bool Piece::checkIfJustMoved(Board board)
//{
//    return board.getCurrentMove() - 1 == lastMove);
//}
