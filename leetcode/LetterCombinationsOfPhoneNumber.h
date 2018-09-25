#pragma once
#include <vector>
#include <string>

using namespace std;

class LetterCombinationsOfPhoneNumber
{
public:
	vector<string> letterCombinations(string digits);
	void DFS(const string digits, const vector<string> dict, int level, string prefix, vector<string>& result);
};

/*
int main()
{
LetterCombinationsOfPhoneNumber s;

string digits = "23";
auto result = s.letterCombinations(digits);
for (string s : result) {
cout << s << endl;
}
return 0;
}
*/