#include "stdafx.h"
#include "NextPermutation.h"

void NextPermutation::nextPermutation(vector<int>& nums)
{
	int i = nums.size() - 1;
	for (; i > 0; i--) {
		if (nums[i - 1] < nums[i])
			break;
	}
	if (i == 0) {
		reverse(nums.begin(), nums.end());
	}
	else {
		int j = lower_bound(nums.begin() + i, nums.end(), nums[i - 1], greater<int>()) - nums.begin() - 1;
		swap(nums[i-1], nums[j]);
		reverse(nums.begin() + i, nums.end());
	}
}