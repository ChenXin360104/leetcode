#pragma once
#include <vector>

using namespace std;

class SearchRotatedSortedArray
{
public:
	int search(vector<int>& nums, int target);
};

// [] 5 -> -1
// [5,1,3] 1 -> 1
// [4,5,6,7,0,1,2] 3 -> -1

/*
int main()
{
SearchRotatedSortedArray s;

vector<int> arr{ 4,5,6,7,0,1,2 };
cout << s.search(arr,0) << endl;
return 0;
}
*/