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
	vector<int> moves = b.getWPMoves();
	for(int i = 0; i < moves.size(); i++){
		cout << moves.at(i) << endl;
	}
// >>>>>>> ab1ef84faf87b753997c32750ee20e349ac9d9be

	return 0;
}
