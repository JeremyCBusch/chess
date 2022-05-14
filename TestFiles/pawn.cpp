#include "pawn.h"
#include "piece.h"

char Pawn::getLetter()
{
    return (fWhite == true) ? 'p': 'P';
}

void Pawn:: setLetter()
{
    letter = (fWhite==true) ? 'p':'P';

}
//
//void Pawn::display(ogstream gout)
//{
//}

//Move Pawn::getMoves(Board board)
//{
//    Move m;
//    return m;
//}
