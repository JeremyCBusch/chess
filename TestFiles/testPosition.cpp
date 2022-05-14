//
//  testPosition.cpp
//  Lab01
//
//  Created by Sulav Dahal on 5/10/22.
//
#include "testPosition.h"
#include "position.h"
#include <cassert>
#include <iostream>
#include <string>
using namespace std;

void PositionTest::getTestZero()
{
    // SETUP
    
    Position pos;
    pos.location = 0;
    
    // EXERCISE
    
    int row = pos.getRow();
    int col = pos.getCol();
    bool isValid = pos.isValid();
    
    // VERIFY
    assert(row == 0);
    assert(col == 0);
    assert(isValid == true);
    
    // TEARDOWN
    
}

void PositionTest:: getTestEnd()
{
    
}

void PositionTest:: getTestWacky()
{
    
}

void PositionTest:: getTestMiddle()
{
    
}
void PositionTest:: getTestInvalid()
{
    
}

void PositionTest:: setTestText()

{
    // SETUP
    Position pos;
    
    // EXERCISE
    pos = "c6";
    
    // VERIFY

    assert(pos.location == 42);
    assert(pos.getCol() == 2);
    assert(pos.getRow() == 5);
    assert(pos.isValid() == true);
    
    // Teardown
    
    
}

void PositionTest:: setTestCol()
{
    
}

void PositionTest:: setTestRow()
{
    
}


void PositionTest:: setTestBoth()
{
    
}

void PositionTest:: setTestString()
{
    // SETUP
    Position pos;
    
    // EXERCISE
    pos = string("c6");
    
    // VERIFY
    assert(pos.location == 42);
    assert(pos.getCol() == 2);
    assert(pos.getRow() == 5);
    assert(pos.isValid() == true);
    
    // Teardown
}
//
void PositionTest:: setTestCopy()
{
    // SETUP
    Position pos;
    Position posRHS;

    posRHS.location = 42;
    
    // EXERCISE
    
    pos = posRHS;
    
    std:: cout << pos.location << std:: endl;
    // verify
    
    assert(pos.location == 42);
    assert(pos.getCol() == 2);
    assert(pos.getRow() == 5);
    assert(pos.isValid() == true);
}


