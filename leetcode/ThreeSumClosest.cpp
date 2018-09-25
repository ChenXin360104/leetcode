#include "stdafx.h"
#include "ThreeSumClosest.h"

int ThreeSumClosest::threeSumClosest(vector<int>& nums, int target)
{
	int result = 0;
	if (nums.size() < 3)
		return result;
	sort(nums.begin(), nums.end());

	bool start = true;
	for (size_t i = 0; i < nums.size() - 2; i++) {
		if (i > 0 && nums[i] > target) break;
		if (i > 0 && nums[i] == nums[i - 1]) continue;

		size_t left = i + 1, right = nums.size() - 1;
		while (left < right) {
			int sum = nums[i] + nums[left] + nums[right];
			if (sum == target) {
				return target;
			}
			else {
				if (start || abs(sum - target) < abs(result - target)) {
					result = sum;
					start = false;
				}

				if (sum < target)
					while (left < right && nums[left++] == nums[left]);
				else
					while (left < right && nums[right--] == nums[right]);
			}
		}
	}
	return result;
}
