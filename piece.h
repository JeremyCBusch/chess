#include "position.h"

#include "uiDraw.h"

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
	virtual char getLetter();
	virtual void display(ogstream gout);
	virtual void getMoves(Board board);

	
};

