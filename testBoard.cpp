#include "piece.h"
#include "pawn.h"
#include "move.h"
#include "board.h"
#include <cassert>
#include <iostream>

using namespace std;

class testBoard
{
    void run()
    {
        test_current_move();
    }
    
    void test_current_move()
    {
        // Setup
        Board b;
        
        // Exercise
        b.currentMove = 5;
        
        // Verify
        assert(b.getCurrentMove() == 5);
        
        // Teardown
    }
    
    void test_white_turn()
    {
        // SETUP
        Board b;
        
        // Exercise
        Piece piece = b.board[60];
        bool isWhite = piece.isWhite();
        bool moved = piece.justMoved();
        
        // VERIFY
        assert(isWhite &&  (moved == false));
        
        // Teardown
        
    }
    
    void test_black_turn()
    {
        // SETUP
        Board b;
        
        // Exercise
        Piece piece = b.board[2];
        bool isWhite = piece.isWhite();
        bool moved = piece.justMoved();
        
        // VERIFY
        assert((isWhite == false) && (moved == false));
        
        // Teardown
    }
    
    void test_piece_black_knight_at_position()
    {
        // SETUP
        Board b;
        
        // EXERCISE
        
        Piece piece = b.board[1];
        char piece_info = piece.getLetter();
        
        // VERIFY
        assert(piece_info == 'n');
        
        // TEARDOWN
        
    }
    
    void test_piece_white_knight_at_position()
    {
        // SETUP
        Board b;
        
        // EXERCISE
        Piece piece = b.board[62];
        char piece_info = piece.getLetter();
        
        // VERIFY
        assert(piece_info == 'N');
        
        // TEARDOWN
        
    }

    
    void test_free()
    {
        // SETUP
        Board b;
        
        // EXERCISE
        Piece piece = b.board[25];
        char space = piece.getLetter();
        
        // VERIFY
        assert(space == ' ');
        
        // TEARDOWN
        
    }
    
    void test_move_pawn()
    {
        // SETUP
        Board b;
        Move m;
        
        // EXERCISE
        
        // TODO
        
    }
    
    void test_move_rook()
    {
        // TODO
    }
    
    void  test_swap_empty()
    {
        // SETUP
        Position p1;
        Position p2;
        Board b;
        
        // EXERCSIE
        b.swap(p1,p2);
        
        // VERIFY
        
        // TEARDOWN
        
        
    }
    
};
