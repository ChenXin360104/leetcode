#pragma once
#include <vector>
#include <algorithm>

using namespace std;

class ThreeSum
{
public:
	vector<vector<int>> threeSum(vector<int>& nums);
};

// wrong answer at
// []
// [0, 0, 0]
// [-1,0,1,0]
// [-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6]
// change the method for get result to O(n^2)

/*
int main()
{
ThreeSum s;

vector<int> nums({ 0,0,0 });
auto result = s.threeSum(nums);
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