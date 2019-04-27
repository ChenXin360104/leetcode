#pragma once
#include <vector>

using namespace std;

class SudokuSolver
{
public:
	void solveSudoku(vector<vector<char>>& board);
};

/*
int main()
{
ValidSudoku s;

vector<vector<char>> board{
vector<char>{ '5','3','.','1','7','.','.','.','.' },
vector<char>{ '6','.','.','1','9','5','.','.','.' },
vector<char>{ '.','9','8','.','.','.','.','.','.' },
vector<char>{ '8','.','.','.','6','.','.','.','3' },
vector<char>{ '4','.','.','8','.','3','.','.','1' },
vector<char>{ '7','.','.','.','2','.','.','.','6' },
vector<char>{ '.','6','.','.','.','.','2','8','.' },
vector<char>{ '.','.','.','4','1','9','.','.','5' },
vector<char>{ '.','.','.','.','8','.','.','7','9' }
};
bool r = s.isValidSudoku(board);
cout << r << endl;
return 0;
}
*/