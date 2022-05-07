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
        test_white_turn();
        test_black_turn();
        test_piece_black_knight_at_position();
        test_piece_white_knight_at_position();
        test_free();
        test_move_black_pawn_e2e3();
        test_move_black_rook_a1_a3();
        test_swap_empty();
        
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
    
    void test_move_black_pawn_e2e3()
    {
        // SETUP
        Board b;
        Move m;

        // EXERCISE
        //e2e3
        b.move(m);
        
        // VERIFY
        assert(b.board[20].getLetter() == 'p');
    
        
    }
    
    void test_move_black_rook_a1_a3()
    {
        // SETUP
        Board b;
        Move m;
        
        // EXERCISE
        b.move(m);
        
        // VERIFY
        assert(b.board[24].getLetter() == 'r');
        
        
        // TEARDOWN
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
        assert(p1.getLocation() == p2.getLocation() && p2.getLocation() == p1.getLocation());
        // TEARDOWN
        
        
    }
    
};
