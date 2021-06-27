#include<iostream>
#include<climits>
using namespace std;

#define int long long

void init(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int minimum_count(int *coins, int n, int m) {
	int dp[m + 1];
	fill(dp, dp + m + 1, INT_MAX);
	dp[0] = 0;
	for (int i = 0; i < n; i++) {
		if (coins[i] <= m)
			dp[coins[i]] = 1;
	}

	for (int i = 1; i <= m; i++) {
		for (int j = 0; j < n; j++) {
			if (i - coins[j] >= 0) {
				int sub_prob = dp[i - coins[j]];
				dp[i] = min(dp[i], sub_prob + 1);
			}
		}
	}
	/*for (int i = 1; i < 10; i++)    cout << dp[i] << " ";
	cout << endl;*/
	return dp[m] == INT_MAX ? -1 : dp[m];
}

int32_t main() {
	//init();
	int n, m;

	cin >> n >> m;
	int coins[n];
	for (int i = 0; i < n; i++) {
		cin >> coins[i];
	}

	cout << minimum_count(coins, n, m);
	return 0;
}