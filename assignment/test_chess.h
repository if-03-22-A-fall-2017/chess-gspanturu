/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.c
 * Author:			Gloria Sara Panturu
 * Due Date:		October 13, 2017
 * ----------------------------------------------------------
 */
#ifndef ___CHESS_TEST_H
#define ___CHESS_TEST_H

#include "shortcut.h"

TEST(test_is_piece);
TEST(test_init_chess_board);
TEST(test_get_square);
TEST(test_is_square_occupied);
TEST(test_add_piece);
TEST(test_get_piece);
TEST(test_setup_chess_board);
TEST(test_remove_piece);
TEST(test_squares_share_file);
TEST(test_squares_share_rank);
TEST(test_squares_share_diagonal);
TEST(test_squares_share_knights_move);
TEST(test_squares_share_pawns_move);
TEST(test_squares_share_queens_move);
TEST(test_squares_share_kings_move);

#endif
