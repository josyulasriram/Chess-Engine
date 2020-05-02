

#include <iostream>
#include <vector>
#ifndef GENERATE_BOARD_H
#define GENERATE_BOARD_H
using namespace std;

// wP=WhitePawn bP=BlackPawn wK=WhiteKind bK=BlackKing wQ=WhiteQueen bQ=BlackQueen
// wB=WhiteBishop bB=BlackBishop wR=WhiteRook bR=BlackRook wN=WhiteKnight bN=BlackKnight
//white will always be on bottom, black on top of board

class generateBoard
{
public:
  string board[8][8];
  generateBoard();
  void generateBitboard();
  unsigned long long int wP, bP, wK, bK, wQ, bQ, wB, bB, wR, bR, wN, bN;

};
#endif
