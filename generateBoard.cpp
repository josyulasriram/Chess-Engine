#include <bitset>
#include "generateBoard.h"
using namespace std;

Board::Board(){
  wP=0;
  pieces[0] = &wP;

  bP=0;
  pieces[6] = &bP;

  wK=0;
  pieces[1] = &wK;

  bK=0;
  pieces[7] = &bK;

  wQ=0;
  pieces[2] = &wQ;

  bQ=0;
  pieces[8] = &bQ;

  wB=0;
  pieces[3] = &wB;

  bB=0;
  pieces[9] = &bB;

  wR=0;
  pieces[4] = &wR;

  bR=0;
  pieces[10] = &bR;

  wN=0;
  pieces[5] = &wN;

  bN=0;
  pieces[11] = &bN;
}

void Board::generateBitboard(){
  for(int i = 0; i < 64; i++){
    string bitBoard = "0000000000000000000000000000000000000000000000000000000000000000";
    bitBoard = bitBoard.substr(0, 63-i) + "1" + bitBoard.substr(0,i);
    string piece = board[i/8][i%8];
    cout << i << " " << piece << " " << bitBoard << endl;
    if(piece == "wP"){
      wP += stoull(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "bP"){
      bP += stoull(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "wK"){
      wK += stoull(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "bK"){
      bK += stoull(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "wQ"){
      wQ += stoull(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "bQ"){
      bQ += stoull(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "wB"){
      wB += stoull(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "bB"){
      bB += stoull(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "wR"){
      wR += stoull(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "bR"){
      bR += stoull(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "wN"){
      wN += stoull(bitBoard, nullptr, 2);
      continue;
    }
    if(piece == "bN"){
      bN += stoull(bitBoard, nullptr, 2);
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
  for(int r = 0; r < 8; r++) {
    for(int c = 0; c < 8; c++) {
      for(unsigned long long* piece : pieces) {
        string binary = bitset<64>(piece).to_string();
        cout << binary << endl;
      }
    }
    cout << endl;
  }
}
