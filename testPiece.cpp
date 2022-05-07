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

	// should only need one of these
	void testgetLetter_pawn() {
		//setup
		//exercise
		Pawn pawn;
		//verify
		assert(pawn.getLetter() == 'p');
	}	//teardown




// starting_white
// # # a b c d e f g h # #
// #							 #
// 1   r k b q k b k r   1
// 2   p p p p p p p p   2
// 3  						 3
// 4  						 4
// 5							 5
// 6							 6
// 7   p p p p(p)p p p   7
// 8   r k b q k b k r   8
// #							 #
// # # a b c d e f g h # #
	void testgetMoves_startingWhite() {
		//setup
		Board board = new Board();
		Pawn piece = new Pawn('e', '7', true);
		//exercise
		String moves[] = piece.getMoves(board);
		//verify
		assert(moves == ["e6", "e5"]);
	}	//teardown


	// capture_white
// # # a b c d e f g h # #
// #							 #
//	1   r k b q k b k r   1
//	2   p p p p   p p p   2
//	3  						 3
//	4  			p   		 4
//	5			    (p)	    5
//	6							 6
//	7   p p p p p   p p   7
//	8   r k b q k b k r   8
// #							 #
// # # a b c d e f g h # #
	void testgetMoves_captureWhite() {
		//setup
		Board board = new Board();
		Pawn piece = new Pawn('f', '5', true);
		//exercise
		String moves[] = piece.getMoves(board);
		//verify
		assert(moves == ["e4", "f4"]);
	}	//teardown


	// en-passant_white
// # # a b c d e f g h # #
// #							 #
//	1   r k b q k b k r   1
//	2   p p p   p p p p   2
//	3  						 3
//	4  		 p(p)		    4
//	5							 5
//	6							 6
//	7   p p p p   p p p   7
//	8   r k b q k b k r   8
// #							 #
// # # a b c d e f g h # #
	void testgetMoves_() {
		//setup
		Board board = new Board();
		Pawn piece = new Pawn('e', '4', true);
		//exercise
		String moves[] = piece.getMoves(board);
		//verify
		assert(moves == ["d3", "e3"]);
	}	//teardown


	// starting_black
// # # a b c d e f g h # #
// #							 #
//	1   r k b q k b k r   1
//	2   p p p p(p)p p p   2
//	3  						 3
//	4  						 4
//	5							 5
//	6							 6
//	7   p p p p p p p p   7
//	8   r k b q k b k r   8
// #							 #
// # # a b c d e f g h # #
	void testgetMoves_blackStarting() {
		//setup
		Board board = new Board();
		Pawn piece = new Pawn('e', '2', true);
		//exercise
		String moves[] = piece.getMoves(board);
		//verify
		assert(moves == ["e3", "e4"]);
	}	//teardown




// en-passant_black
// # # a b c d e f g h # #
// #							 #
// 1   r k b q k b k r   1
// 2   p p p   p p p p   2
// 3  						 3
// 4  		(p)p		    4
// 5							 5
// 6							 6
// 7   p p p p   p p p   7
// 8   r k b q k b k r   8
// #							 #
// # # a b c d e f g h # #
	void testgetMoves_blackEnPassant() {
		//setup
		Board board = new Board();
		Pawn piece = new Pawn('d', '4', true);
		//exercise
		String moves[] = piece.getMoves(board);
		//verify
		assert(moves == ["e5", "d5"]);
	}	//teardown



// capture_black
// # # a b c d e f g h # #
// #							 #
// 1   r k b q k b k r   1
// 2   p p p p   p p p   2
// 3  						 3
// 4  		  (p)  		 4
// 5			     p		 5
// 6							 6
// 7   p p p p p   p p   7
// 8   r k b q k b k r   8
// #							 #
// # # a b c d e f g h # #
	void testgetMoves_captureBlack() {
		//setup
		Board board = new Board();
		Pawn piece = new Pawn('e', '4', true);
		//exercise
		String moves[] = piece.getMoves(board);
		//verify
		assert(moves == ["f5", "e5"]);
	}	//teardown


};