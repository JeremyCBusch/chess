#include "queen.h"

char Queen::getLetter()
{
	if (isWhite())
		return 'q'; // lowercase
	else
		return 'Q'; //upppercase
}

void Queen::display(ogstream gout)
{
}

set <int> Queen::getMoves(Board board)
{
	set <int> possible;
	return possible;
}
