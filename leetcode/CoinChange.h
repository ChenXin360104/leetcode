#pragma once
#include <vector>
#include <algorithm>

class CoinChange
{
public:
	int coinChange(std::vector<int>& coins, int amount);
};

/*
int main()
{
CoinChange s;

vector<int> coins = { 2, 5, 10, 1 };
int amount = 27;
int r = s.coinChange(coins, amount);
cout << r << endl;
return 0;
}
*/