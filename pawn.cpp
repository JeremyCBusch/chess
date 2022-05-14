#include "pawn.h"

char Pawn::getLetter()
{
   if (isWhite())
      return 'p'; // lowercase
   else
      return 'P'; //upppercase
}

void Pawn::display(ogstream gout)
{
	// not evven going to deal with that yet.
}

set <int> getMoves(const char* board)
{
	int row = pos.getRow();  // current location row
	int col = pos.getCol();  // current location column
	int r;                   // the row we are checking
	int c;
   Position pos = getPosition();
   int intLocation = pos.getLocation();

	set <int> possible;

	// return the empty set if there simply are no possible moves
	if (intLocation < 0 || intLocation >= 64 || board[intLocation].getLetter() == '_')
		return possible;


   if (isWhite() == false)
   {
      c = col;
      r = row - 2;

      // forward two blank spaces
      if (row == 6 && board[intLocation + 16].getLetter() == '_')
         possible.insert(r * 8 + c);  

      // forward one black space
      r = row - 1;
      if (r >= 0 && board[intLocation + 8].getLetter() == '_')
         possible.insert(r * 8 + c);  

      // attack diagonally left
      r = row + 1;
      c = col - 1;
      if (board[intLocation + 7].isWhite())
         possible.insert(r * 8 + c);    

      // attack diagonally right
      r = row + 1;
      c = col + 1;
      if (board[intLocation + 9].isWhite())
         possible.insert(r * 8 + c);  

      // en passant diagonally left
      c = col - 1;
      r = row + 1;
      if (board[intLocation - 1].isWhite() && board[intLocation - 1].justMoved())
         possible.insert(r * 8 + c);

      // en passant diagonally right
      c = col + 1;
      r = row + 1;
      if (board[intLocation + 1].isWhite() && board[intLocation + 1].justMoved())
         possible.insert(r * 8 + c);
      
      r = row + 1;
      // what about en-passant and pawn promotion
      if (board[location + 8] >= 55 && board[location + 8] < 64)
         possible.insert(r * 8 + c);
   }
   else
   {
      c = col;
      r = row + 2;

      // forward two blank spaces
      if (row == 1 && board[intLocation - 16].getLetter() == '_')
         possible.insert(r * 8 + c);

      // forward one black space
      r = row - 1;
      if (r < 8 && board[intLocation - 8].getLetter() == '_')
         possible.insert(r * 8 + c);

      // attack diagonally left
      r = row - 1;
      c = col - 1;
      if (board[intLocation - 9].isWhite() == false)
         possible.insert(r * 8 + c);

      // attack diagonally right
      r = row - 1;
      c = col + 1;
      if (board[intLocation - 7].isWhite() == false)
         possible.insert(r * 8 + c);
      
      // en passant diagonally left
      c = col - 1;
      r = row - 1;
      if (board[intLocation - 1].isWhite() && board[intLocation - 1].justMoved())
         possible.insert(r * 8 + c);

      // en passant diagonally right
      c = col + 1;
      r = row - 1;
      if (board[intLocation + 1].isWhite() && board[intLocation + 1].justMoved())
         possible.insert(r * 8 + c);

      r = row - 1;
      // pawn promotion
      if (board[intLocation + 8] < 8 && board[location - 8] >= 0)
         possible.insert(r * 8 + c);

      return possible;
   }


}
