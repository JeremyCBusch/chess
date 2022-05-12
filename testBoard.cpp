#include "piece.h"
#include "pawn.h"
#include "move.h"
#include "board.h"
#include "space.h"
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
        test_swap_black_pawn_to_empty();
        test_swap_white_root_to_empty();
        test_assign_black_pawn();
        test_assign_space();
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
        m.setText('e2e3');
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
        m.setText('a1a3');
        b.move(m);
        
        // VERIFY
        assert(b.board[24].getLetter() == 'r');
        
        
        // TEARDOWN
    }
    
    void  test_swap_black_pawn_to_empty()
    {
        // SETUP
        Position p1;
        Position p2;
        Board b;
        
        p1.setRow(1);
        p1.setCol(4);
        
        p2.setRow(2);
        p2.setCol(4);
        // EXERCSIE
        b.swap(p1,p2);
        
        // VERIFY
        assert(b.board[19].getLetter() == 'p' && b.board[11].getLetter() == ' ');
        // TEARDOWN
        
    }
    
    void  test_swap_white_root_to_empty()
    {
        // SETUP
        Position p1;
        Position p2;
        Board b;
        
        p1.setRow(7);
        p1.setCol(0);
        
        p2.setRow(6);
        p2.setCol(0);
        
        
        // EXERCSIE
        b.swap(p1,p2);
        
        // VERIFY
        assert(b.board[56].getLetter() == 'P' && b.board[48].getLetter() == 'R');
        
        // TEARDOWN
        
    }
    
    
    void test_assign_black_pawn()
    {
        // SETUP
        Board b;
        Pawn p;
        p.position.setRow(2);
        p.position.setCol(0);
        
        // EXERCISE
        b.assign(p);
        
        // VERIFY
        assert(b.board[16].getLetter() == 'p');
        
        // TEARDOWN
    }
    
    
    void test_assign_space()
    {
        // SETUP
        Board b;
        Space s;
        s.position.setRow(3);
        s.position.setCol(0);
        
        // EXERCISE
        b.assign(s);
        
        // VERIFY
        assert(b.board[24].getLetter() == ' ');
        
        // TEARDOWN
    }
};
