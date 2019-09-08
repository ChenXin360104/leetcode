// leetcode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <vector>

#include "FirstMissingPositive.h"
using namespace std;

int main()
{
	FirstMissingPositive s;

	vector<int> nums = { 1,2,3 };
	int result = s.firstMissingPositive(nums);
	cout << result << endl;
	return 0;
}

