#pragma once
#include <vector>
#include <algorithm>
#include <numeric>

class PartitionEqualSubsetSum
{
public:
	bool canPartition(std::vector<int>& nums);
};

/*
int main()
{
PartitionEqualSubsetSum s;

vector<int> nums = { 1, 5, 11, 5 };
bool r = s.canPartition(nums);
if(r)
cout << "true" << endl;
else
cout << "false" << endl;
return 0;
}
*/