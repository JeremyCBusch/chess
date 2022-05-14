#include "rook.h"

char Rook::getLetter()
{
	if (isWhite())
		return 'r'; // lowercase
	else
		return 'R'; //upppercase
}

void Rook::display(ogstream gout)
{
}

set <int> Rook::getMoves(Board board)
{
	set <int> possible;
	return possible;
}
