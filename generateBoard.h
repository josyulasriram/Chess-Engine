

#include <iostream>
#include <vector>
using namespace std;

// wP=WhitePawn bP=BlackPawn wK=WhiteKind bK=BlackKing wQ=WhiteQueen bQ=BlackQueen
// wB=WhiteBishop bB=BlackBishop wR=WhiteRook bR=BlackRook wN=WhiteKnight bN=BlackKnight
//white will always be on bottom, black on top of board

class generateBoard
{
public:
  string board[][];
  generateBoard(string board[][]);
  void generateBitboard();
  unsigned long long wP, bP, wK, bK, wQ, bQ, wB, bB, wR, bR, wN, bN;
};
