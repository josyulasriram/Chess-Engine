#include <iostream>
#include <map>
#include <vector>
#ifndef GENERATE_BOARD_H
#define GENERATE_BOARD_H
using namespace std;

// wP=WhitePawn bP=BlackPawn wK=WhiteKind bK=BlackKing wQ=WhiteQueen bQ=BlackQueen
// wB=WhiteBishop bB=BlackBishop wR=WhiteRook bR=BlackRook wN=WhiteKnight bN=BlackKnight
//white will always be on bottom, black on top of board

class Board
{
public:
  Board();

  void generateBitboard();
  void printBoard();
  void printBoardUsingBits();

  unsigned long long int wP, bP, wK, bK, wQ, bQ, wB, bB, wR, bR, wN, bN;
  unsigned long long int* pieces[12];
  map<unsigned long long int*, string> piece_to_string = {
  	{&wP, "wP"},
  	{&bP, "bP"},
  	{&wK, "wK"},
  	{&bK, "bK"},
  	{&wQ, "wQ"},
  	{&bQ, "bQ"},
  	{&wB, "wB"},
  	{&bB, "bB"},
  	{&wR, "wR"},
  	{&bR, "bR"},
  	{&wN, "wN"},
  	{&bN, "bN"}
  };

  string board[8][8] =
	{{"bR","bN","bB","bQ","bK","bB","bN","bR"},
	{"bP","bP","bP","bP","bP","bP","bP","bP"},
	{".",".",".",".",".",".",".","."},
	{".",".",".",".",".",".",".","."},
	{".",".",".",".",".",".",".","."},
	{".",".",".",".",".",".",".","."},
	{"wP","wP","wP","wP","wP","wP","wP","wP"},
	{"wR","wN","wB","wQ","wK","wB","wN","wR"}};
  };

#endif
