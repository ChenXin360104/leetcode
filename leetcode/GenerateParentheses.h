#pragma once

#include <vector>
#include <string>

using namespace std;

class GenerateParentheses
{
public:
	vector<string> generateParenthesis(int n);
	void DFS(int n, int leftCount, int rightCount, string prefix, vector<string> &result);
};

/*
int main()
{
GenerateParentheses s;

auto result = s.generateParenthesis(3);
for(string &str: result) {
cout << str << endl;
}
return 0;
}
*/