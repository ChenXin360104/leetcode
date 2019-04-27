#pragma once
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

class NextPermutation
{
public:
	void nextPermutation(vector<int>& nums);
};

// 1 -> 1
// 1,2 -> 2,1
// 1,3,2 -> 2,1,3
// 3,4,6,5,2,1 -> 3,5,1,2,4,6
// 6,5,4,3,2,1 -> 1,2,3,4,5,6

/*
int main()
{
	NextPermutation s;

	vector<int> nums = { 3,4,6,5,2,1 };
	s.nextPermutation(nums);
	for (auto r : nums) {
		cout << r << endl;
	}
	return 0;
}
*/