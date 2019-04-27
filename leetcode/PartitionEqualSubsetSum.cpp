#include "stdafx.h"
#include "PartitionEqualSubsetSum.h"

using namespace std;

bool PartitionEqualSubsetSum::canPartition(vector<int>& nums)
{
	int sum = accumulate(nums.begin(), nums.end(), 0);
	if ((sum & 1) != 0) // is odd
		return false;

	int half_sum = sum / 2;
	vector<bool> dp(half_sum+1, false);
	dp[0] = true;
	for (int n : nums) {
		for (int v = half_sum, end = n - 1; v > end; --v) {
			dp[v] = dp[v] || dp[v - n];
		}
		if (dp[half_sum])
			return true;
	}
	return false;
}
