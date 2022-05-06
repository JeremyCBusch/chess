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
	Piece(int c, int r, bool white);
	void assign(Position pos);
	void assign(Piece piece );
	bool isWhite();
    bool isMoved();
	int getNMoves();
	Position getPosition();
	bool justMoved();
	virtual char getLetter();
	virtual void display(ogstream gout);
	virtual void getMoves(Board board);

	
};

