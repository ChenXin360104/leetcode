#include "stdafx.h"
#include "FourSum.h"

vector<vector<int>> FourSum::fourSum(vector<int>& nums, int target)
{
	vector<vector<int>> result;
	if (nums.size() < 4)
		return result;
	sort(nums.begin(), nums.end());

	int size = nums.size();
	for (int i = 0; i < size - 3; i++) {
		if (i > 0 && nums[i] == nums[i - 1]) continue;
		for (int j = size - 1; j > i; j--) {
			if (j < size - 1 && nums[j] == nums[j + 1]) continue;

			int left = i + 1, right = j - 1;
			while (left < right) {
				int sum = nums[i] + nums[left] + nums[right] + nums[j];
				if (sum == target) {
					result.push_back(vector<int>({ nums[i], nums[left], nums[right], nums[j] }));
					while (left < right && nums[left++] == nums[left]);
					while (left < right && nums[right--] == nums[right]);
				}
				else if (sum < target) {
					left++;
				}
				else {
					right--;
				}
			}
		}
	}
	return result;
}
