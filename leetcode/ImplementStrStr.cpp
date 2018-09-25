#include "stdafx.h"
#include "ImplementStrStr.h"

int ImplementStrStr::strStr(string haystack, string needle)
{
	if (needle.empty()) return 0;
	//sunday algorithm
	unordered_map<char, int> scheme;
	int needleLen = needle.length();
	for (int i = 0; i < needleLen; ++i) {
		scheme[needle[i]] = i;
	}

	for (int i = 0, sz = haystack.size(); i < sz; ) {
		int j = 0;
		while (i < sz && j < needleLen && haystack[i] == needle[j]) {
			++i; ++j;
		}
		if (j == needleLen) {
			return i - needleLen;
		} else if (i == sz) {
			break;
		} else {
			i = i - j + needleLen;
			if (i >= sz) break;

			auto it = scheme.find(haystack[i]);
			if (it != scheme.end()) {
				i = i - it->second;
			}
		}
	}
	return -1; //can't find needle
}
