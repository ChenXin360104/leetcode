#pragma once
#include <vector>

using namespace std;

class CombinationSum
{
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target);
};

/*
int main()
{
CombinationSum s;

vector<int> candidates = { 2,3,5 };
vector<vector<int>> solution_set = s.combinationSum(candidates, 8);
for (auto &i : solution_set) {
for (auto j : i) {
cout << j << ' ';
}
cout << endl;
}
return 0;
}
*/