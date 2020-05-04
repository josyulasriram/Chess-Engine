#include <iostream>
#include "generateBoard.h"
// <<<<<<< HEAD

// =======
// >>>>>>> ab1ef84faf87b753997c32750ee20e349ac9d9be
using namespace std;

int main(){
	// Board board;

// <<<<<<< HEAD
	// board.printBoard();
// =======
	Board b;
	b.generateBitboard();
	b.printBoardUsingBits();

// >>>>>>> ab1ef84faf87b753997c32750ee20e349ac9d9be
	// int a = 0;
	// int b = 5;

	// int* array[2] = {&a, &b};

	// cout << *(array[0]) << *(array[1]) << endl;

	// a = 5;

	// cout << *(array[0]) << *(array[1]) << endl;

	// cout << sizeof(unsigned long long int);

	return 0;
}
