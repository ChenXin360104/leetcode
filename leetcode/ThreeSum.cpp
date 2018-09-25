#include "stdafx.h"
#include "ThreeSum.h"

vector<vector<int>> ThreeSum::threeSum(vector<int>& nums)
{
	if (nums.size() < 3)
		return vector<vector<int>>();
	sort(nums.begin(), nums.end());

	vector<vector<int>> result;
	size_t size = nums.size();
	for (size_t i = 0; i < size - 2; i++) {
		if (i > 0 && nums[i] == nums[i - 1]) continue;

		size_t left = i + 1, right = size - 1;
		while (left < right) {
			int sum = nums[i] + nums[left] + nums[right];
			if (sum == 0) {
				result.push_back(vector<int>({ nums[i], nums[left], nums[right] }));
				while (left < right && nums[left] == nums[left - 1]) left++;
				while (left < right && nums[right] == nums[right + 1]) right--;
			}
			else if (sum < 0) {
				left++;
			}
			else {
				right--;
			}
		}
	}
	return result;
}
