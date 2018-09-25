// leetcode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <vector>

#include "ImplementStrStr.h"
using namespace std;

int main()
{
	ImplementStrStr s;

	string haystack = "mississippi", needle = "issi";
	//string haystack = "aaaa", needle = "ab";
	cout << s.strStr(haystack, needle) << endl;
	return 0;
}

