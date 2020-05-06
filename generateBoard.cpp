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

  empty=0;
  blackPieces=0;
  whitePieces = 0;

  generateBitboard();
}

void Board::generateBitboard(){
  for(int i = 0; i < 64; i++){
    string bitBoard = "0000000000000000000000000000000000000000000000000000000000000000";
    bitBoard = bitBoard.substr(0, 63-i) + "1" + bitBoard.substr(0,i);
    string piece = board[i/8][i%8];
    if(piece == "wP"){
      wP += stoull(bitBoard, nullptr, 2);
    }
    if(piece == "bP"){
      bP += stoull(bitBoard, nullptr, 2);
    }
    if(piece == "wK"){
      wK += stoull(bitBoard, nullptr, 2);
    }
    if(piece == "bK"){
      bK += stoull(bitBoard, nullptr, 2);
    }
    if(piece == "wQ"){
      wQ += stoull(bitBoard, nullptr, 2);
    }
    if(piece == "bQ"){
      bQ += stoull(bitBoard, nullptr, 2);
    }
    if(piece == "wB"){
      wB += stoull(bitBoard, nullptr, 2);
    }
    if(piece == "bB"){
      bB += stoull(bitBoard, nullptr, 2);
    }
    if(piece == "wR"){
      wR += stoull(bitBoard, nullptr, 2);
    }
    if(piece == "bR"){
      bR += stoull(bitBoard, nullptr, 2);
    }
    if(piece == "wN"){
      wN += stoull(bitBoard, nullptr, 2);
    }
    if(piece == "bN"){
      bN += stoull(bitBoard, nullptr, 2);
    }

  }

  blackPieces = bP | bN | bB | bR | bQ;
  whitePieces = wP | wN | wB | wR | wQ;
  empty = ~(blackPieces | whitePieces);
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
      bool found = false;
      for(unsigned long long* piece : pieces) {
        string binary = bitset<64>(*piece).to_string();
        if(binary.at(63 - (r * 8 + c)) == '1') {
          cout << piece_to_string[piece] << " ";
          found = true;
          break;
        }
      }
      if(!found) {
        cout << " . ";
      }
    }
    cout << endl;
  }
}

vector<int> Board::getWPMoves() {
  //Right capture
  vector<int> m;
  unsigned long long moves = (wP >> 7) & (blackPieces) & (~files[7]);
  for(int i = 0; i < 64; i++){
    if((moves >> i) & 1){
      m.push_back(i);
    }
  }

  //Left capture
  moves = (wP >> 9) & (blackPieces) & (~files[0]);
  for(int i = 0; i < 64; i++){
    if((moves >> i) & 1){
      m.push_back(i);
    }
  }

  //move one up
  moves = (wP >> 8) & (empty);
  for(int i = 0; i < 64; i++){
    if((moves >> i) & 1){
      m.push_back(i);
    }
  }

  //move two up
  moves = (wP>>16) & (empty & ranks[4]);
  for(int i = 0; i < 64; i++){
    if((moves >> i) & 1){
      m.push_back(i);
    }
  }

return m;
}

vector<int> Board::getBPMoves(){
  //Right capture
  vector<int> m;
  unsigned long long moves = (bP << 9) & (whitePieces) & (~files[7]);
  for(int i = 0; i < 64; i++){
    if((moves >> i) & 1){
      m.push_back(i);
    }
  }

  //Left capture
  moves = (bP << 7) & (whitePieces) & (~files[0]);
  for(int i = 0; i < 64; i++){
    if((moves >> i) & 1){
      m.push_back(i);
    }
  }

  //move one up
  moves = (bP << 8) & (empty);
  for(int i = 0; i < 64; i++){
    if((moves >> i) & 1){
      m.push_back(i);
    }
  }

  //move two up
  moves = (bP<<16) & (empty & ranks[3]);
  for(int i = 0; i < 64; i++){
    if((moves >> i) & 1){
      m.push_back(i);
    }
  }

  return m;
}
