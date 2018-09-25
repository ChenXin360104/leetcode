#pragma once
#include <vector>
#include <unordered_map>
using namespace std;

class TwoSum
{
public:
	vector<int> twoSum(vector<int>& nums, int target);
};

/* test code
int main()
{
TwoSum s;
vector<int> nums({ 2,2,7,11,15 });
int target = 9;
for (auto i : s.twoSum(nums, target)) {
cout << i << ',';
}
cout << endl;
return 0;
}
*/