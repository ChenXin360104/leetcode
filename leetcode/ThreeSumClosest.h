#pragma once
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class ThreeSumClosest
{
public:
	int threeSumClosest(vector<int>& nums, int target);
};

// wrong answer at
// [1,2,5,10,11] 12
// The condition (i==0) in nesting loop doesn't satisfy exactly once.
// [1,1,1,1] 0
// if(nums[i] > target) break; makes it break at the beginning of the loop.

/*
int main()
{
ThreeSumClosest s;

vector<int> nums({ 1,1,1,1 });
auto result = s.threeSumClosest(nums, 0);
cout << result << endl;
return 0;
}
*/