#pragma once
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class SubstringWithConcatenation
{
public:
	vector<int> findSubstring(string s, vector<string>& words);
};

//"barfoothefoobarman" ["foo","bar"]
//"wordgoodgoodgoodbestword" ["word", "good", "best", "word"]
//"barfoofoobarthefoobarman" ["bar", "foo", "the"]
//"lingmindraboofooowingdingbarrwingmonkeypoundcake" ["fooo", "barr", "wing", "ding", "wing"]

/*
int main()
{
SubstringWithConcatenation s;

string str = "barfoothefoobar";
vector<string> words{ "foo","bar" };
vector<int> rs = s.findSubstring(str, words);
for (auto r : rs) {
cout << r << endl;
}
return 0;
}
*/