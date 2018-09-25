#pragma once
#include <vector>
#include <algorithm>

using namespace std;

class FourSum
{
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target);
};

/*
int main()
{
FourSum s;

vector<int> nums({ -4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6 });
int target = 0;
auto result = s.fourSum(nums, 0);
cout << '[' << endl;
for (vector<int> arr : result) {
cout << "    [";
for (int e : arr) {
cout << e << ',';
}
cout << "]," << endl;
}
cout << ']' << endl;
return 0;
}
*/