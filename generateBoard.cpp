#include <iostream>
#include "generateBoard.h"
using namespace std;

Board::Board(){
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
    string piece = board[i/8][i%8];
    if(piece == "wP"){
      wP += stoll(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "bP"){
      bP += stoll(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "wK"){
      wK += stoll(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "bK"){
      bK += stoll(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "wQ"){
      wQ += stoll(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "bQ"){
      bQ += stoll(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "wB"){
      wB += stoll(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "bB"){
      bB += stoll(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "wR"){
      wR += stoll(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "bR"){
      bR += stoll(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "wN"){
      wN += stoll(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "bN"){
      bN += stoll(bitBoard, nullptr, 2);
      continue;
    }
  }
}
void Board::printBoard(){
  for(int i = 0; i < 64; i++){
    if(i%8==0){
      cout << endl;
    }
    cout << board[i/8][i%8] << " ";
  }
}
