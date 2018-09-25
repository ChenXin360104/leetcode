#include "stdafx.h"
#include "LetterCombinationsOfPhoneNumber.h"

vector<string> LetterCombinationsOfPhoneNumber::letterCombinations(string digits)
{
	vector<string> result;
	if (digits.empty()) return result;
	vector<string> dict = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
	DFS(digits, dict, 0, "", result);

	return result;
}

void LetterCombinationsOfPhoneNumber::DFS(const string digits, const vector<string> dict, int level, string prefix, vector<string>& result)
{
	if (level == digits.size()) {
		result.push_back(prefix);
		return;
	}

	int num = digits[level] - '2';
	for (char c : dict[num]) {
		DFS(digits, dict, level + 1, prefix + c, result);
	}
}
