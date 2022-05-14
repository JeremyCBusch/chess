#include "king.h"

char King::getLetter()
{
	if (isWhite())
		return 'k'; // lowercase
	else
		return 'K'; //upppercase
}

void King::display(ogstream gout)
{
}

set <int> King::getMoves(Board board)
{
	set <int> possible;
	return possible;
}
