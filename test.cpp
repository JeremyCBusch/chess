//
//  test.cpp
//  chessunit
//
//  Created by Sulav Dahal on 5/11/22.
//

#include "test.h"
#include "testPosition.h"
#include <iostream>


int main()
{
    cout << "Test Runner Started Successfully" << endl;
    testRunner();
}

void testRunner()
{
    PositionTest().run();
}
