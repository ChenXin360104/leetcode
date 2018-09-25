#include "stdafx.h"
#include "RemoveElement.h"

int RemoveElement::removeElement(vector<int>& nums, int val)
{
	int len = 0;
	for (int i = 0, sz = nums.size(); i < sz; ++i) {
		if (val != nums[i]) {
			nums[len] = nums[i];
			++len;
		}
	}
	return len;
}
