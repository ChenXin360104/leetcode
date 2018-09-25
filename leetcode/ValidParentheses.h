#pragma once

#include <string>
#include <stack>
#include <unordered_map>

using namespace std;

class ValidParentheses
{
public:
	bool isValid(string s);
};

// wrong in "[" and "]"

/*
int main()
{
ValidParentheses s;

string str = "()[";
cout << s.isValid(str);
cout << endl;
return 0;
}
*/