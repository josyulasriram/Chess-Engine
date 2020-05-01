#include <iostream>
//#include "generateBoard.h"
using namespace std;

int main(){

string mainBoard[8][8] =
    {{"bR","bN","bB","bQ","bK","bB","bN","bR"},
    {"bP","bP","bP","bP","bP","bP","bP","bP"},
    {".",".",".",".",".",".",".","."},
    {".",".",".",".",".",".",".","."},
    {".",".",".",".",".",".",".","."},
    {".",".",".",".",".",".",".","."},
    {"wP","wP","wP","wP","wP","wP","wP","wP"},
    {"wR","wN","wB","wQ","wK","wB","wN","wR"}};
//generateBoard b(mainBoard);

for(int i = 0; i < 64; i++){
  if(i%8 == 0){
    cout << endl;
  }
  cout<< mainBoard[i/8][i%8] << " ";
}
cout << endl;

}
