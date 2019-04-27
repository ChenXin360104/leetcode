#include "stdafx.h"
#include "SearchInsertPosition.h"

int SearchInsertPosition::searchInsert(vector<int>& nums, int target)
{
	return std::lower_bound(nums.begin(), nums.end(), target) - nums.begin();
}
