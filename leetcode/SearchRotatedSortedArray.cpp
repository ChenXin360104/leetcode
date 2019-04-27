#include "stdafx.h"
#include "SearchRotatedSortedArray.h"

int SearchRotatedSortedArray::search(vector<int>& nums, int target)
{
	if (nums.empty()) return -1;
	int start = 0, end = nums.size() - 1, mid;
	while (start < end) {
		mid = (start + end) / 2;
		bool cond1 = nums[start] > nums[mid], cond2 = target >= nums[start], cond3 = target <= nums[mid];
		if ((cond1 && (cond2||cond3)) || (cond2&&cond3)) { // find target in left half
			end = mid;
		}
		else { // find target in right half
			start = mid + 1;
		}
	}
	return target == nums[start] ? start : -1;
}
