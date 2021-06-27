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
	cin >> n;
	cout << "Running\n";
	int dp[n + 1] = {INT_MAX};
	dp[0] = 0;

	for (int i = 1; i <= n; i++) {
		int ans = INT_MAX;
		int temp = i;
		while (i) {
			ans = min(ans, dp[temp - i % 10] + 1);
			i /= 10;
		}
		dp[i] = ans;
	}
	cout << dp[n];
	return 0;
}