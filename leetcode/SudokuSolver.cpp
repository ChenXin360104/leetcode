#include "stdafx.h"
#include "SudokuSolver.h"

void SudokuSolver::solveSudoku(vector<vector<char>>& board)
{
	// initialize auxiliary info
	for (int i = 0; i < 9; ++i) {
		rows[i].fill(false);
		columns[i].fill(false);
	}
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			sub_boxes[i][j].fill(false);
		}
	}

	vector<pair<int, int>> empty_cells;
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			if (board[i][j] == '.') {
				empty_cells.push_back(make_pair(i, j));
			}
			else {
				int num = board[i][j] - '0' - 1; // transform character 1-9 to number 0-8
				setAuxiliaryInfo(make_pair(i, j), num, true);
			}
		}
	}

	// dfs
	stack<int> fill_numbers;
	fill_numbers.push(0);
	for (int c = 0, sz = empty_cells.size(); c < sz;) {
		int num = fill_numbers.top();
		fill_numbers.pop();

		while (num < 9) {
			if (isValid(empty_cells[c], num)) {
				fill_numbers.push(num);

				board[empty_cells[c].first][empty_cells[c].second] = '1' + num;
				setAuxiliaryInfo(empty_cells[c], num, true);

				++c;
				fill_numbers.push(0);
				break;
			}
			++num;
		}
		
		if(num == 9) { // current path is wrong, backtracking
			--c;
			int last_num = fill_numbers.top();
			fill_numbers.pop();
			setAuxiliaryInfo(empty_cells[c], last_num, false);
			
			fill_numbers.push(last_num + 1);
		}
	}
}

bool SudokuSolver::isValid(const pair<int,int> &p, int num)
{
	int i = p.first, j = p.second;
	return !(rows[i][num] || columns[j][num] || sub_boxes[i / 3][j / 3][num]);
}

void SudokuSolver::setAuxiliaryInfo(const pair<int, int>& p, int num, bool val)
{
	rows[p.first][num] = val;
	columns[p.second][num] = val;
	sub_boxes[p.first / 3][p.second / 3][num] = val;
}
