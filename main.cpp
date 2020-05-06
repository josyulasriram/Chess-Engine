#include <iostream>
#include <vector>
#include "generateBoard.h"
// <<<<<<< HEAD

// =======
// >>>>>>> ab1ef84faf87b753997c32750ee20e349ac9d9be
using namespace std;

int main(){
// <<<<<<< HEAD
	// board.printBoard();
// =======
	Board b;
	b.printBoardUsingBits();
	vector<int> Wmoves = b.getWPMoves();
	for(int i = 0; i < Wmoves.size(); i++){
		cout << Wmoves.at(i) << endl;
	}
	cout << endl;
	vector<int> bMoves = b.getBPMoves();
	for(int i = 0; i < bMoves.size(); i++){
		cout << bMoves.at(i) << endl;
	}
// >>>>>>> ab1ef84faf87b753997c32750ee20e349ac9d9be

	return 0;
}
