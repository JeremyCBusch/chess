//
//  testBoard.cpp
//  chessunit
//
//  Created by Sulav Dahal on 5/13/22.
//

#include "testBoard.h"
#include "board.h"
#include "space.h"
#include "pawn.h"
#include <iostream>
#include <string>

using namespace std;


void BoardTest::test_one_move()
{
//    // SETUP
//    Board b;
//
//    // EXERCISE
//    int move = b[8].getNMoves();
//
//    // VERIFY
//    assert(move ==0);
//
//    // TEARDOWN
}


void BoardTest:: test_black_pawn_at_position()
{
    Board b;
    
    Piece * black_pawn = b.board[9];
    
    
    assert(black_pawn->getLetter()== 'P' );
}

void BoardTest:: test_get_current_move()

{
    Board b;
    b.currentMove++;
    
    assert(b.currentMove ==1);
}



void BoardTest:: test_white_pawn_at_position()
{
    Board b;
    
    Piece * white_pawn = b.board[49];
    
    assert(white_pawn-> getLetter()== 'p');

}

void BoardTest:: test_piece_white_pawn()
{
    Board b;
    
    Piece *pawn = b.board[49];
    
    char pawn_white = pawn->getLetter();
//
//    cout <<< pawn_white
    // VERRIFY
    
    assert(pawn_white == 'p');
    
    // TEARDOWN
}


void BoardTest:: test_piece_black_pawn()
{
    Board b;
    
    Piece* pawn = b.board[10];
    char pawn_black = pawn->getLetter();
    
    assert(pawn_black == 'P');
    
    // TEARDOWN
    
}

void BoardTest::test_assign_space()
{
    Board b;
    Space * space = new Space(3,4,false);
    
    b.board[20] = space;
  
    assert(b.board[20] == space);
        
}


void BoardTest::test_swap_position()

{
    Position p1;
    Position p2;
    Board b;
    p1.set(0,1);
    p2.set(1,0);
    
    Position temp1 = p1;
    Position temp2 = p2;
    
    
    b.swap(p1,p2);

    assert(p2.location == temp1.location);
    
}

void BoardTest::test_white_turn()
{
    Board b;
    
    bool isTurn = b.whiteTurn();
    
    assert(isTurn == true);

}

void BoardTest::test_black_turn_false()
{
    Board b;
    b.currentMove++;
    bool isTurn = b.whiteTurn();
    
    assert(isTurn == false);
}


void BoardTest::test_move_pawn_no_capture()
{
    Board b;
    b.move("a7a6");

   assert( b.board[40]->getLetter() == 'p');
}


