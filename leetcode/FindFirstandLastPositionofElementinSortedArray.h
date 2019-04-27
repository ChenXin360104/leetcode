#pragma once
#include <vector>

using namespace std;

class FindFirstandLastPositionofElementinSortedArray
{
public:
	vector<int> searchRange(vector<int>& nums, int target);
};

//Input: nums = [5,7,7,8,8,10], target = 6
//Output: [-1, -1]
//Input: nums = [5, 7, 7, 8, 8, 10], target = 8
//Output : [3, 4]
// 1,2,2 -> 1,2
/*int main()
{
	FindFirstandLastPositionofElementinSortedArray s;

	vector<int> arr{ 1,2,2 };
	vector<int> &rs = s.searchRange(arr, 2);
	for(auto &r : rs)
		cout << r << endl;
	return 0;
}
*/