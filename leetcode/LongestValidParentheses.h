#pragma once
#include <string>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

class LongestValidParentheses
{
public:
	int longestValidParentheses(string s);
};

/*
int main()
{
LongestValidParentheses s;

string str = "(()(())";
cout << s.longestValidParentheses(str) << endl;
return 0;
}
*/