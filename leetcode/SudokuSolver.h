#pragma once
#include <vector>
#include <stack>
#include <array>

using namespace std;

class SudokuSolver
{
public:
	void solveSudoku(vector<vector<char>>& board);
private:
	bool isValid(const pair<int, int> &p, int num);
	void setAuxiliaryInfo(const pair<int, int> &p, int num, bool val);

	array<array<bool, 9>, 9> rows;
	array<array<bool, 9>, 9> columns;
	array<array<array<bool, 9>, 3>, 3> sub_boxes;
};

/*
void printBoard(const vector<vector<char>>& board)
{
for (size_t i = 0; i < board.size(); ++i) {
for (size_t j = 0; j < board[i].size(); ++j) {
cout << board[i][j] << " ";
}
cout << endl;
}
}

int main()
{
SudokuSolver s;

vector<vector<char>> board{
vector<char>{ '5','3','.','.','7','.','.','.','.' },
vector<char>{ '6','.','.','1','9','5','.','.','.' },
vector<char>{ '.','9','8','.','.','.','.','.','.' },
vector<char>{ '8','.','.','.','6','.','.','.','3' },
vector<char>{ '4','.','.','8','.','3','.','.','1' },
vector<char>{ '7','.','.','.','2','.','.','.','6' },
vector<char>{ '.','6','.','.','.','.','2','8','.' },
vector<char>{ '.','.','.','4','1','9','.','.','5' },
vector<char>{ '.','.','.','.','8','.','.','7','9' }
};
s.solveSudoku(board);
printBoard(board);
return 0;
}
*/