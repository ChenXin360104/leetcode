#include "stdafx.h"
#include "RemoveDuplicatesFromSortedArray.h"

int RemoveDuplicatesFromSortedArray::removeDuplicates(vector<int>& nums)
{
	if (nums.empty()) return 0;

	int len = 1;
	for (int i = 1, sz = nums.size(); i < sz; i++) {
		if (nums[i - 1] != nums[i]) {
			nums[len] = nums[i];
			++len;
		}
	}
	return len;
}
