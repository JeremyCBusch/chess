//
//  space.cpp
//  chessunit
//
//  Created by Sulav Dahal on 5/13/22.
//

#include "piece.h"
#include "space.h"
#include "uiDraw.h"

char Space:: getLetter()
{
    return letter;
}

void Space:: setLetter()
{
    letter = ' ';
}
//void Space:: display(ogstream gout)
//{
//    std:: cout <<  "Gout has been called " << std:: endl;
//}
