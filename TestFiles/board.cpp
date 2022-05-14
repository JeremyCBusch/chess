
#include "board.h"
#include "pawn.h"
#include "space.h"
#include "rook.h"
#include "knight.h"
#include "bishop.h"
#include "queen.h"
#include "king.h"

#include<string>


// private

// checks if a move is out of bouds or not
void Board::assertBoard()
{
}


// public


Board::Board()
{
    reset();
}


int Board::getCurrentMove()
{
    return this->currentMove;
}

bool Board::whiteTurn()
{
    return currentMove % 2 == 0;
}

void Board::display(int posHover, int posSel)
{
    // dont even worry about this yet
}

int  Board::get(Position pos)
{
    int location = pos.getLocation();
    return location;
}

void Board::free()
{
    //what does this do?
}

void Board::reset()
{
    currentMove = 0;

    // instantiate our pawns

    // black
    for (int i = 8; i < 16; i++)
    {
        Pawn *pawn = new Pawn(0,i,false);
        board[i] = pawn;
    }
    //white
    for (int i = 48; i < 56; i++)
    {
        Pawn *pawn = new Pawn(0,(i/8), true);
        board[i] = pawn;
    }


    //instantiate spaces
    for (int i = 2; i < 6; i++)
    {
        for (int x = 0; x < 8; x++)
        {
            Space * space = new Space(i, x, true);
            board[(i * 8) + x] = space;
        }
    }

    //white
//    Rook rookLeft = new Rook(8, 0, true);
//    Rook rookRight = new Rook(8, 7, true);
//    board[56] = rookLeft;
//    board[63] = rookRight;
//    Knight knightLeft = new Knight(8, 1, true);
//    Knight knightRight = new Knight(8, 6, true);
//    board[57] = knightLeft;
//    board[62] = knightRight;
//    Bishop bishopLeft = new Bishop(8, 2, true);
//    Bishop bishopRight = new Bishop(8, 5, true);
//    board[58] = bishopLeft;
//    board[61] = bishopRight;
//
//    Queen queen = new Queen(8, 3, true);
//    board[59] = queen;
//
//    King king = new King(8, 4, true);
//    board[60] = king



        //black
//    Rook rookLeft = new Rook(0, 0, false);
//    Rook rookRight = new Rook(0, 7, false);
//    board[0] = rookLeft;
//    board[7] = rookRight;
//    Knight knightLeft = new Knight(0, 1, false);
//    Knight knightRight = new Knight(0, 6, false);
//    board[1] = knightLeft;
//    board[6] = knightRight;
//    Bishop bishopLeft = new Bishop(0, 2, false);
//    Bishop bishopRight = new Bishop(0, 5, false);
//    board[2] = bishopLeft;
//    board[5] = bishopRight;
//
//    Queen queen = new Queen(0, 3, false);
//    board[3] = queen;
//
//    King king = new King(0, 4, false);
//    board[4] = king
}

void Board::move(std::string move)
{
    
    // move will have smith notation that will divide it into two position objects


    Position from;
    Position to;
    
    std:: string positionFrom = move.substr(0,2);
    std:: string positionTo = move.substr(2,4);
    
    Space * newSpace = new Space();
    
    from = positionFrom;
    to = positionTo;
    
    board[to.getLocation()] = board[from.getLocation()];
    board[from.getLocation()] = newSpace;
    
    currentMove++;
}

//void Board::assign(Piece piece)
//{
//    board[piece.getPosition().getLocation()]
//}

void Board::swap(Position &pos1, Position &pos2)
{
    // if things are borken this might be it
    Position temp = pos1;
    pos1= pos2;
    pos2 = temp;
}
