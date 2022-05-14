//
//  testBoard.h
//  chessunit
//
//  Created by Sulav Dahal on 5/13/22.
//

#include <iostream>

using namespace std;


class BoardTest

{
public:
    void run()
    {
        test_one_move();
        test_piece_white_pawn();
        test_piece_black_pawn();
        test_assign_space();
        test_swap_position();
        test_white_turn();
        test_black_turn_false();
        test_black_pawn_at_position();
        test_white_pawn_at_position();;
        test_get_current_move();
        test_move_pawn_no_capture();
        test_pawn_assigned_on_right_place();
    }
    
    void test_one_move();
    void test_piece_white_pawn();
    void test_piece_black_pawn();
    void test_assign_space();
    
    void test_swap_position();
    void test_white_turn();
    void test_black_turn_false();
    void test_white_pawn_at_position();
    void test_black_pawn_at_position();
    void test_get_current_move();
    
    void test_move_pawn_no_capture();
    void test_pawn_assigned_on_right_place();
    
    
};
