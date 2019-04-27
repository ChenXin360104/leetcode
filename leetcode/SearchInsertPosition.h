#pragma once
#include <vector>
#include <algorithm>

using namespace std;
class SearchInsertPosition
{
public:
	int searchInsert(vector<int>& nums, int target);
};

/*
int main()
{
SearchInsertPosition s;

vector<int> arr{ 1,3,5,6 };
int r = s.searchInsert(arr, 9);
cout << r << endl;
return 0;
}
*/
