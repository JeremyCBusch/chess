#include "position.h"
#include <iostream>

using namespace std;


int Position:: getLocation()
{
    return location;
}

int Position::getRow()
{
    return location / 8;
}

int Position:: getCol()
{
    return location % 8;
}

int Position:: getX()
{
    return squareWidth;
}

int Position:: getY()
{
    return squareHeight;
}

bool Position:: isValid()
{
    return location >=0 && location <=64;
}

void Position:: setRow(int row)
{
    location = row * 8;
}

void Position:: setCol(int col)

{
    location = getLocation() + col;
}

void Position:: set(int row, int col)
{
    setRow(row);
    setCol(col);
}






