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

int main() {
	init();
	int n;
	int x;

	cin >> n >> x;

	vector<int> prices(n + 1, 0);
	vector<int> pages(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		cin >> prices[i];
	}

	for (int i = 1; i <= n; i++) {
		cin >> pages[i];
	}

	vector<vector<int>>dp(n + 1, vector<int>(x + 1, 0));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= x; j++) {
			if (prices[i] <= j) {
				dp[i][j] = max(dp[i - 1][j], pages[i] + dp[i - 1][j - prices[i]]);
			}
			else
				dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[n][x];
	return 0;
}