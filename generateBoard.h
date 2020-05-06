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
  vector<int> getWPMoves();
  vector<int> getBPMoves();
  vector<int> getWNMoves();
  vector<int> getBNMoves();

  unsigned long long int wP, bP, wK, bK, wQ, bQ, wB, bB, wR, bR, wN, bN, empty, blackPieces, whitePieces;
  unsigned long long int* pieces[12];

  unsigned long long files[8] = {
  	72340172838076673,
  	144680345676153346,
  	289360691352306692,
  	578721382704613384,
  	1157442765409226768,
  	2314885530818453536,
  	4629771061636907072,
  	9259542123273814144
  };

  unsigned long long ranks[8] = {
  	255,
  	65280,
  	16711680,
  	4278190080,
  	1095216660480,
  	280375465082880,
  	71776119061217280,
  	18374686479671623680
  };

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
	{"bP","bP","bP",".",".","bP","bP","bP"},
	{".",".",".","bP","bP",".",".","."},
	{".",".",".",".",".",".",".","."},
	{".",".",".",".",".",".",".","."},
	{".",".",".","wP","wP",".",".","."},
	{"wP","wP","wP",".",".","wP","wP","wP"},
	{"wR","wN","wB","wQ","wK","wB","wN","wR"}};
  };

#endif
