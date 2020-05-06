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
	vector<int> wPMoves = b.getWPMoves();
	for(int i = 0; i < wPMoves.size(); i++){
		cout << wPMoves.at(i) << endl;
	}
	cout << endl;
	vector<int> bPMoves = b.getBPMoves();
	for(int i = 0; i < bPMoves.size(); i++){
		cout << bPMoves.at(i) << endl;
	}
	cout << endl;

	vector<int> wNMoves = b.getWNMoves();
	for(int i = 0; i < wNMoves.size(); i++){
		cout << wNMoves.at(i) << endl;
	}

	cout << endl;
	vector<int> bNMoves = b.getBNMoves();
	for(int i = 0; i < bNMoves.size(); i++){
		cout << bNMoves.at(i) << endl;
	}
// >>>>>>> ab1ef84faf87b753997c32750ee20e349ac9d9be

	return 0;
}
