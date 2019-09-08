#pragma once
#include <vector>
#include <algorithm>

using namespace std;

class CombinationSumII
{
public:
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target);
};

// [1,2,3] 6 => [[1,2,3]]
// [1] 2 => [[]]
// [1] 1 => [[1]]
// [1,1,1] 4 => [[]]
// [2,2,2] 4 => [[2,2]]
// [10,1,2,7,6,1,5] 8 => [[1,1,6],[1,2,5],[1,7],[2,6]]
// [1,1,1,3,5,6,6] 8 => [[1,1,1,5],[1,1,6],[3,5]]
// [3,1,3,5,1,1] 8 => [[1,1,1,5],[1,1,3,3],[3,5]]

/*
int main()
{
	CombinationSumII s;

	vector<int> candidates = { 3 };
	vector<vector<int>> solution_set = s.combinationSum2(candidates, 3);
	for (auto &i : solution_set) {
		for (auto j : i) {
			cout << j << ' ';
		}
		cout << endl;
	}
	return 0;
}
*/