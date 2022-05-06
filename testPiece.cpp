#include "testPiece.h"
#include "piece.h"
#include "pawn.h"
#include "rook.h"
#include "queen.h"

class testPiece
{

	void run() {

	}

	void testAssign_pos_e4() {
		//setup
		Pawn pawn = pawn('e', '2', true);
		//exercise
		pawn.assign('e4');
		//verify
		assert(pawn.position == 'e4');
	}	//teardown

	void testAssign_pos_e3() {
		//setup
		Pawn pawn = pawn('e', '2', true);
		//exercise
		pawn.assign('e3');
		//verify
		assert(pawn.position == 'e3');
	}	//teardown

	void testAssign_pos_f3() {
		//setup
		Pawn pawn = pawn('e', '2', true);
		//exercise
		pawn.assign('f3');
		//verify
		assert(pawn.position == 'f3');
	}	//teardown

	
	
	void testAssign_piece_queen() {
		//setup
		Pawn pawn = pawn('e', '8', true);
		//exercise
		Queen queen = new Queen('e', '8', true);
		pawn.assign(queen);
		//verify
		assert(pawn.getLetter() == 'q');
	}	//teardown

	void testAssign_piece_pawn() {
		//setup
		Pawn pawn = pawn('e', '8', true);
		//exercise
		Pawn pawn2 = pawn('e', '8', true);
		pawn.assign(pawn2);
		//verify
		assert(pawn.getLetter() == 'p');
	}	//teardown

	void testAssign_piece_rook() {
		//setup
		Pawn pawn = pawn('e', '8', true);
		Rook rook = new Rook('e', '8', true);
		//exercise
		pawn.assign(rook);
		//verify
		assert(pawn.getLetter() == 'r');
	}	//teardown

	void testIsWhite_white() {
		//setup
		Pawn pawn = pawn('e', '8', true);
		//exercise
		bool isWhite = pawn.isWhite();
		//verify
		assert(isWhite == true);
	}	//teardown

	void testIsWhite_black() {
		//setup
		Pawn pawn = pawn('e', '8', false);
		//exercise
		bool isWhite = pawn.isWhite();
		//verify
		assert(isWhite == false);
	}	//teardown


	void testgetNMoves_zero() {
		//setup
		Pawn pawn = pawn('b', '2', true);
		//exercise
		int nMoves = pawn.getNMoves();
		//verify
		assert(nMoves == 0);
	}	//teardown

	void testgetNMoves_one() {
		//setup
		Pawn pawn = pawn('b', '2', true);
		//exercise
		Board board = new Board()
		
			// TODO : ask brother helfrich how the pawn mopves and how nMoves is incremented
		
			
			
		int nMoves = pawn.getNMoves();
		//verify
		assert(nMoves == 1);
	}	//teardown


	void testgetNMoves_ten() {
		//setup
		Pawn pawn = pawn('b', '2', true);
		//exercise
		Board board = new Board()
			
			
			// TODO : ask brother helfrich how the pawn mopves and how nMoves is incremented



		int nMoves = pawn.getNMoves();
		//verify
		assert(nMoves == 10);
	}	//teardown



	void testgetPosition_e2() {
		//setup
		//exercise
		Pawn pawn = pawn('e', '2', true);
		//verify
		assert(pawn.getPosition() == 'e2');
	}	//teardown

	void testgetPosition_e3() {
		//setup
		//exercise
		Pawn pawn = pawn('e', '3', true);
		//verify
		assert(pawn.getPosition() == 'e3');
	}	//teardown

	void testgetPosition_f3() {
		//setup
		//exercise
		Pawn pawn = pawn('f', '3', true);
		//verify
		assert(pawn.getPosition() == 'f3');
	}	//teardown
	

	//TODO: need to test justMoved


	void testgetLetter_pawn() {
		//setup
		//exercise
		Pawn pawn;
		//verify
		assert(pawn.getLetter() == 'p');
	}	//teardown



	void testgetMoves_() {
		//setup
		//exercise
		Pawn pawn;
		//verify
		assert(pawn.getLetter() == 'p');
	}	//teardown



	
};