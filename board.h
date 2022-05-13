#include "piece.h"
#include "position.h"
#include "uiDraw.h"
#include "move.h"

#pragma once
class Board
{
    
private:
	//member variables
	int currentMove; // Which Move I am currently On
	Piece board[64];
	ogstream gout;

   void assertBoard();

public:
   Piece board[64];
   Board();
   Board(ogstream gout);
	int getCurrentMove();
	bool whiteTurn();
	void display(int posHover, int posSel);
	Piece get(Position pos);
	void free();
	void reset();
	void move(Move move);
	void assign(Piece piece);
   void swap(Position pos1, Position pos2);
    
};

