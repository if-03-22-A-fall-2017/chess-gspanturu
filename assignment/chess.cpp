/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.c
 * Author:			Gloria Sara Panturu
 * Due Date:		October 13, 2017
 * ----------------------------------------------------------
 */
#include "chess.h"

bool is_piece(struct ChessPiece cp, enum PieceColor color, enum PieceType type)
{
  if (cp.color == color && cp.type == type) {
    return true;
  }
  else return false;
}

void init_chess_board(ChessBoard chess_board){
for (int i = 0; i < 8; i++) {
  for (int j = 0; j < 8; j++) {
    chess_board[i][j].is_occupied = false;
  	ChessPiece p = {White ,NoPiece};
  	chess_board[i][j].piece = p;
  }
 }
}

struct ChessSquare * get_square (ChessBoard chess_board, File file, Rank rank){
if ((file <'a' && file >'h')||(rank < 0 && rank > 8)) {
  return 0;
}
  else{
     return &chess_board[file][rank];
  }
}
bool is_square_occupied(ChessBoard chess_board, File file, Rank rank){
  return false;
}
bool add_piece (ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece){
  return false;
}
struct ChessPiece 	get_piece (ChessBoard chess_board, File file, Rank rank){
  struct ChessPiece cp;
  return cp;
}
void 	setup_chess_board (ChessBoard chess_board){}
bool 	remove_piece (ChessBoard chess_board, File file, Rank rank){
  return false;
}
bool 	squares_share_file (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
  return false;
}
bool 	squares_share_rank (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
  return false;
}
bool 	squares_share_diagonal (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
  return false;
}
bool 	squares_share_knights_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
  return false;
}
bool 	squares_share_pawns_move (enum PieceColor color, enum MoveType move, File s1_f, Rank s1_r, File s2_f, Rank s2_r){
  return false;
}
bool 	squares_share_queens_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
  return false;
}
bool 	squares_share_kings_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
  return false;
}
