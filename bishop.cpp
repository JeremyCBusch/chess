#include "bishop.h"


char Bishop::getLetter()
{
	if (isWhite())
		return 'b'; // lowercase
	else
		return 'B'; //upppercase
}

void Bishop::display(ogstream gout)
{
}
set <int> Bishop::getMoves(Board board)
{
	set <int> possible;
	return possible;
}