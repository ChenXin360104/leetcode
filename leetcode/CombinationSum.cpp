#include "stdafx.h"
#include "CombinationSum.h"

vector<vector<int>> CombinationSum::combinationSum(vector<int>& candidates, int target)
{
	// initialization
	vector<vector<vector<int>>> dp;
	for (int j = 0; j <= target; ++j) {
		dp.push_back(vector<vector<int>>());
	}

	// knapsack problem
	for (int i = 0, sz = candidates.size(); i < sz; ++i) {
		for (int j = candidates[i]; j <= target; ++j) {
			if (j == candidates[i]) {
				dp[j].push_back({ candidates[i] });
			}
			else if (!dp[j - candidates[i]].empty()) {
				for (auto set : dp[j - candidates[i]]) {
					set.push_back(candidates[i]);
					dp[j].push_back(set);
				}
			}
		}
	}
	return dp[target];
}
