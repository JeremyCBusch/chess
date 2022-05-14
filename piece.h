#include "position.h"
#include "uiDraw.h"
#include <set> 
#include "board.h"

#pragma once
class Piece
{
protected:
	Position position;
	bool fWhite;
	int nMoves;
	int lastMove;

public:
	Piece();
	Piece(int c, int r, bool white);
	void assign(Position pos);
	bool isWhite();
	int getLastMove();
	int getNMoves();
	Position getPosition();
	bool checkIfJustMoved(Board board);
	virtual char getLetter() = 0;
	virtual void display(ogstream gout) = 0;
	virtual set <int> getMoves(Board board) = 0;

	
};

