#include "stdafx.h"
#include "FirstMissingPositive.h"

int FirstMissingPositive::firstMissingPositive(vector<int>& nums)
{
	int ht_size = nums.size() + 2;
	vector<bool> hashtable(ht_size, false);
	for (auto n : nums) {
		if (n > 0 && n < ht_size) {
			hashtable[n] = true;
		}
	}
	
	int min = 1;
	while (hashtable[min])
		++min;
	return min;
}
