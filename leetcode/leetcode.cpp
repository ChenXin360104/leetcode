// leetcode.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <iostream>
#include <vector>

#include "OnesAndZeros.h"
using namespace std;

int main()
{
	OnesAndZeros s;

	vector<string> arr = { "0","1101","01","00111","1","10010","0","0","00","1","11","0011" };
	int m = 63, n = 36;
	int r = s.findMaxForm(arr, m, n);
	cout << r << endl;
	return 0;
}

