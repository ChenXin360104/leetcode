#include "stdafx.h"
#include "GenerateParentheses.h"

vector<string> GenerateParentheses::generateParenthesis(int n)
{
	vector<string> result;

	DFS(n, 0, 0, "", result);

	return result;
}

void GenerateParentheses::DFS(int n, int leftCount, int rightCount, string prefix, vector<string>& result)
{
	if (leftCount > n || rightCount > leftCount)
		return;

	if (prefix.length() == 2 * n) {
		result.push_back(prefix);
		return;
	}

	DFS(n, leftCount + 1, rightCount, prefix + '(', result);
	DFS(n, leftCount, rightCount + 1, prefix + ')', result);
}
