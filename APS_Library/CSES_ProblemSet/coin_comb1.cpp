#include<bits/stdc++.h>
using namespace std;

const int MOD = (int) 1e9 + 7;

void init(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int find_coin(vector<int> coins, int m) {
	int dp[m + 1] = {0};

	dp[0] = 1;

	for (int i = 1; i <= m; i++) {
		for (auto x : coins) {
			if (i - x >= 0) {
				dp[i] += dp[i - x];
				dp[i] %= MOD;
			}
		}
	}

	//for (int i = 0; i <= 9; i++)    cout << dp[i] << " ";
	//cout << endl;

	return dp[m];
}

int main() {
	//init();
	int n, m;
	int temp;
	cin >> n >> m;
	vector<int>coins;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		coins.push_back(temp);
	}
	//for (auto x : coins)    cout << x << " ";
	//cout << endl;

	cout << find_coin(coins, m);
	return 0;
}