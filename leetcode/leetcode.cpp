// leetcode.cpp : �������̨Ӧ�ó������ڵ㡣
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

