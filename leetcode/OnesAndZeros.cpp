#include "stdafx.h"
#include "OnesAndZeros.h"

int OnesAndZeros::findMaxForm(vector<string>& strs, int m, int n)
{
	const int SHIFT = 10, MASK = (1 << SHIFT) - 1;
	unordered_map<int, int> tuple_counter;
	for (auto &str : strs) {
		int zeros = 0, ones = 0;
		for (char ch : str) {
			if (ch == '0') ++zeros;
			else ++ones;
		}
		++tuple_counter[(zeros << SHIFT) + ones];
	}

	vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
	for (auto &u : tuple_counter) {
		int zeros = u.first >> 10, ones = u.first & MASK, amount = u.second;
		if (zeros*amount >= m && ones*amount >= n) {
			completePack(dp, zeros, ones);
		}
		int k = 1;
		while (k < amount) {
			zeroOnePack(dp, k*zeros, k*ones, k);
			amount -= k;
			k *= 2;
		}
		zeroOnePack(dp, amount*zeros, amount*ones, amount);
	}
	return dp[m][n];
}
