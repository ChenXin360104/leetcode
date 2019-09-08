#include "stdafx.h"
#include "CombinationSumII.h"

vector<vector<int>> CombinationSumII::combinationSum2(vector<int>& candidates, int target)
{
	vector<vector<int>> solution_sets;
	if (candidates.empty())
		return solution_sets;

	sort(candidates.begin(), candidates.end());

	// dfs
	vector<int> stack;
	int i = 0, sz = candidates.size(), current_sum = candidates[i];
	stack.push_back(i);
	while (!stack.empty()) {
		if (current_sum == target) {
			vector<int> solution;
			for (auto i : stack)
				solution.push_back(candidates[i]);
			solution_sets.push_back(move(solution));
		}
		
		if (current_sum < target && i + 1 < sz) {
			i++;

			stack.push_back(i);
			current_sum += candidates[i];
		}
		else {
			if (stack.size() == 1)
				break;
			
			current_sum -= candidates[stack.back()];
			stack.pop_back();
			current_sum -= candidates[stack.back()];
			i = stack.back();
			stack.pop_back();
			while (i + 1 < sz && candidates[i++] == candidates[i]);

			stack.push_back(i);
			current_sum += candidates[i];
		}
	}
	return solution_sets;
}
