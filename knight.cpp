#include "knight.h"

char Knight::getLetter()
{
	if (isWhite())
		return 'n'; // lowercase
	else
		return 'N'; //upppercase
}

void Knight::display(ogstream gout)
{
}

set <int> Knight::getMoves(Board board)
{
	set <int> possible;
	return possible;
}
