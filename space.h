#pragma once
class Space : public Piece
{
public:
   char getLetter();
   void display(ogstream gout);
   Move getMoves(Board board);
};

