#include "stdafx.h"
#include "CountAndSay.h"

string CountAndSay::countAndSay(int n)
{
	string result = "1";
	for (int i = 1; i < n; ++i) {
		stringstream ostr;
		char c = result[0];
		int count = 1;
		for (int j = 1, sz = result.size(); j < sz; ++j) {
			if (result[j] == c) {
				++count;
			}
			else {
				ostr << count << c;
				c = result[j];
				count = 1;
			}
		}
		ostr << count << c;
		result = ostr.str();
	}
	return result;
}
