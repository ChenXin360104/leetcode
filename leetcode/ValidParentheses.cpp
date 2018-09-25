#include "stdafx.h"
#include "ValidParentheses.h"

bool ValidParentheses::isValid(string s)
{
	stack<char> m_stack;
	unordered_map<char, char> parentheses;
	parentheses['('] = ')';
	parentheses['{'] = '}';
	parentheses['['] = ']';
	for (char c : s) {
		if (parentheses.find(c) != parentheses.end())
			m_stack.push(c);
		else {
			if (m_stack.empty()) return false;
			char top = m_stack.top();
			if (parentheses[top] == c) {
				m_stack.pop();
			}
			else {
				return false;
			}
		}
	}
	return m_stack.empty();
}
