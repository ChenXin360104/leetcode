#include "stdafx.h"
#include "FindFirstandLastPositionofElementinSortedArray.h"

vector<int> FindFirstandLastPositionofElementinSortedArray::searchRange(vector<int>& nums, int target)
{
	if(nums.empty())
		return vector<int>{-1, -1};
	int mid, tmp;
	vector<int> range{ 0, (int)nums.size()-1 };
	while (nums[range[0]] != nums[range[1]]) {
		mid = (range[0] + range[1]) / 2;
		if (nums[mid] < target) {
			range[0] = mid+1;
		}
		else if (nums[mid] > target) {
			range[1] = mid;
		}
		else {
			tmp = mid;
			while (tmp > range[0] && nums[tmp - 1] == target)
				tmp = (range[0] + tmp) / 2;
			range[0] = tmp;
			if (nums[range[1]] > target) {
				tmp = mid;
				while (tmp < range[1] && nums[tmp + 1] == target)
					tmp = (range[1] + tmp) / 2;
				range[1] = tmp;
			}
		}
	}
	return nums[range[0]] == target ? range : vector<int>{ -1, -1 };
}
