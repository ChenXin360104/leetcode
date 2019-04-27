#include "stdafx.h"
#include "LongestValidParentheses.h"

int LongestValidParentheses::longestValidParentheses(string s)
{
	int longest_length = 0;
	vector<int> local_length(s.size());
	stack<int> left_parenthesis_index;
	for (int i = 0, sz = s.size(); i < sz; ++i) {
		if (s[i] == '(') {
			local_length[i] = 0;
			left_parenthesis_index.push(i);
		}
		else if (left_parenthesis_index.empty()) {
			local_length[i] = 0;
		}
		else {
			int index = left_parenthesis_index.top();
			left_parenthesis_index.pop();
			if(index == 0)
				local_length[i] = local_length[i - 1] + 2;
			else
				local_length[i] = local_length[i - 1] + local_length[index - 1] + 2;
			longest_length = max(longest_length, local_length[i]);
		}
	}
	return longest_length;
}
