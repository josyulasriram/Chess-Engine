#include <iostream>
#include "generateBoard.h"
using namespace std;

Board::Board(){
  board =
      {{"bR","bN","bB","bQ","bK","bB","bN","bR"},
      {"bP","bP","bP","bP","bP","bP","bP","bP"},
      {".",".",".",".",".",".",".","."},
      {".",".",".",".",".",".",".","."},
      {".",".",".",".",".",".",".","."},
      {".",".",".",".",".",".",".","."},
      {"wP","wP","wP","wP","wP","wP","wP","wP"},
      {"wR","wN","wB","wQ","wK","wB","wN","wR"}};
  wP=0;
  bP=0;
  wK=0;
  bK=0;
  wQ=0;
  bQ=0;
  wB=0;
  bB=0;
  wR=0;
  bR=0;
  wN=0;
  bN=0;
}
void Board::generateBitboard(){
  for(int i = 0; i < 64; i++){
    string bitBoard = "0000000000000000000000000000000000000000000000000000000000000000";
    bitBoard = bitBoard.substr(i+1) + "1" + bitBoard.substr(0,i);
    switch(board[i/8][i%8]){
      case "bR":
        bR = bR + stoll(bitBoard,nullptr,2);
        break;
      case "bN":
        bN = bN + stoll(bitBoard, nullptr, 2);
        break;
      case "bB":
        bB = bB + stoll(bitBoard, nullptr, 2);
      case "bQ":
        bQ = bQ + stoll(bitBoard, nullptr, 2);
      case "bK":
        bK = bK + stoll(bitBoard, nullptr, 2);
      case "bP":
        bP = bP + stoll(bitBoard, nullptr, 2);
      case "wR":
        wR = wR + stoll(bitBoard, nullptr, 2);
      case ""
    }
  }
}
