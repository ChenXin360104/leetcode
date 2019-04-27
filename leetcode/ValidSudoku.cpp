#include "stdafx.h"
#include "ValidSudoku.h"

bool ValidSudoku::isValidSudoku(vector<vector<char>>& board)
{
	vector<unordered_set<char>> sets(9*3); // rows + columns + sub-boxes
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			if (board[i][j] != '.') { // not empty
				auto&& pr = sets[i].insert(board[i][j]);
				if (!pr.second) return false;
				pr = sets[j+9].insert(board[i][j]);
				if (!pr.second) return false;
				pr = sets[(i-i%3)+(j/3)+18].insert(board[i][j]);
				if (!pr.second) return false;
			}
		}
	}
	return true;
}