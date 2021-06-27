#include<iostream>
#include<vector>

using namespace std;

//#define int long long
#define MOD 1000000007

void init(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int find_count(int n, vector<int>dp) {

	if (n <= 1)    return 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 6 and i - j >= 0 ; j++) {
			(dp[i] += dp[i - j]);
			dp[i] %= MOD;
		}
	}
	return dp[n];
}

int32_t main() {
	//init();
	int n;
	cin >> n;
	vector<int> dp(n + 1, 0);
	dp[0] = 1;
	cout << find_count(n, dp);
	return 0;
}