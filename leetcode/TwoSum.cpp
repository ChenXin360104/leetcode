#include "stdafx.h"
#include "TwoSum.h"

vector<int> TwoSum::twoSum(vector<int>& nums, int target)
{
	unordered_map<int, int> numToIndex;
	for (int i = 0; i < nums.size(); i++) {
		int complement = target - nums[i];
		if (numToIndex.find(complement) != numToIndex.end()) {
			return vector<int>({ numToIndex[complement], i });
		}
		else if (numToIndex.find(nums[i]) == numToIndex.end()) {
			numToIndex[nums[i]] = i;
		}
	}
	return vector<int>();
}