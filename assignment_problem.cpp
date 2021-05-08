#include<bits/stdc++.h>
#include "APS_lib.h"
using namespace std;

int main() {
	int n, m;

	cin >> n;
	int mat[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cin >> mat[i][j];
	}

	vector<int> dp(pow(2, n), INT_MAX);

	dp[0] = 0;

	for (int mask = 0; mask < pow(2, n); mask++) {

		int x = __builtin_popcount(mask);

		for (int j = 0; j < n; j++) {
			int new_mask = 1 << j;
			if (mask & new_mask)    continue;
			new_mask = (mask | new_mask);
			dp[new_mask] = min(dp[new_mask], dp[mask] + mat[x][j]);
		}
	}
	cout << dp[pow(2, n) - 1];
	return 0;
}