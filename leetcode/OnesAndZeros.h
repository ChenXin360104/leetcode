#pragma once
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

class OnesAndZeros
{
public:
	int findMaxForm(vector<string>& strs, int m, int n);

private:
	void completePack(vector<vector<int>>& dp, int c, int d) {
		for (int i = c, sz = dp.size(); i < sz; ++i) {
			for (int j = d, sz2 = dp[i].size(); j < sz2; ++j) {
				dp[i][j] = max(dp[i][j], dp[i - c][j - d] + 1);
			}
		}
	}

	void zeroOnePack(vector<vector<int>>& dp, int c, int d, int w) {
		for (int i = dp.size()-1, end = c-1; i > end; --i) {
			for (int j = dp[i].size()-1, end2 = d-1; j > end2; --j) {
				dp[i][j] = max(dp[i][j], dp[i - c][j - d] + w);
			}
		}
	}
};

/*
int main()
{
OnesAndZeros s;

vector<string> arr = { "0","1101","01","00111","1","10010","0","0","00","1","11","0011" };
int m = 63, n = 36;
int r = s.findMaxForm(arr, m, n);
cout << r << endl;
return 0;
}
*/