#include "stdafx.h"
#include "CoinChange.h"

using namespace std;

int CoinChange::coinChange(vector<int>& coins, int amount)
{
	vector<int> dp(amount + 1, -1);
	dp[0] = 0;
	for (int c : coins) {
		for (int i = c, sz = dp.size(); i < sz; ++i) {
			if (dp[i - c] != -1) {
				if(dp[i] == -1)
					dp[i] = dp[i - c] + 1;
				else
					dp[i] = min(dp[i], dp[i - c] + 1);
			}
		}
	}
	return dp[amount];
}
