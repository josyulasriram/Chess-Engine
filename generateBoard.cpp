#include <iostream>
#include "generateBoard.h"
using namespace std;

Board::Board(){
  wP=0;
  pieces[0] = &wP;

  bP=0;
  pieces[1] = &bP;

  wK=0;
  pieces[2] = &wK;

  bK=0;
  pieces[3] = &bK;

  wQ=0;
  pieces[4] = &wQ;

  bQ=0;
  pieces[5] = &bQ;

  wB=0;
  pieces[6] = &wB;

  bB=0;
  pieces[7] = &bB;

  wR=0;
  pieces[8] = &wR;

  bR=0;
  pieces[9] = &bR;

  wN=0;
  pieces[10] = &wN;

  bN=0;
  pieces[11] = &bN;
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

void Board::printBoardUsingBits() {
  for(int i = 0; i < 64; i++) {
    if(i % 8 == 0) {
      cout << endl;
    }
    
  }
}
