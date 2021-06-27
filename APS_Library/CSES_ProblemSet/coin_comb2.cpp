#include<bits/stdc++.h>
using namespace std;

void init(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

const int MOD = (int) 1e9 + 7;

int find_sol(vector<int>coins, int n, int m) {
	int dp[m + 1] = {0};

	dp[0] = 1;

	for (auto x : coins) {
		for (int i = 1; i <= m; i++) {
			if (i - x >= 0) {
				dp[i] += dp[i - x];
				dp[i] %= MOD;
			}
		}
	}
	return dp[m];
}

int main() {
	//init();
	int n, x;
	cin >> n >> x;
	vector<int> coins(n, 0);

	for (int i = 0; i < n; i++)
		cin >> coins[i];

	cout << find_sol(coins, n, x);

	return 0;
}