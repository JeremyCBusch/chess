//
//  testPosition.h
//  Lab01
//
//  Created by Sulav Dahal on 5/10/22.
//


#include <iostream>

using namespace std;

class PositionTest
{
public:
    void run()
    {
        getTestZero();
        getTestMiddle();
        getTestEnd();
        getTestInvalid();
        getTestWacky();
        
        // set
    
        setTestCol();
        setTestRow();
        setTestBoth();
        setTestText();
        setTestString();
        setTestCopy();
        
        // adjust
        
//        adjustTestAddColumn();
//        adjustTestAddRow();
//        adjustTestOffRight();
//        adjustTestOffLeft();
//        adjustTestOffBottom();
//        adjustTestInvalid();
    }
    void getTestZero();
    void getTestMiddle();
    void getTestEnd();
    void getTestInvalid();
    void getTestWacky();
    

    
    void setTestCol();
    void setTestRow();
    void setTestBoth();
    void setTestText();
    void setTestString();
    
    void setTestCopy();

    
//    void adjustTestAddColumn();
//    void adjustTestAddRow();
//    void adjustTestOffRight();
//    void adjustTestOffLeft();
//    void adjustTestOffBottom();
//    void adjustTestInvalid();

};

