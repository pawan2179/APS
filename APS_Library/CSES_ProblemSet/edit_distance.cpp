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

int edit_distance(string s, string t) {
	int n = s.length();
	int m = t.length();

	int dp[n + 1][m + 1];

	for (int i = 0; i <= n; i++)    dp[i][0] = i;
	for (int j = 0; j <= m; j++)    dp[0][j] = j;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (s[i - 1] == t[j - 1])    dp[i][j] = dp[i - 1][j - 1];
			else {
				dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
			}
		}
	}
	return dp[n][m];
}

int main() {
	init();
	string s, t;
	cin >> s >> t;

	cout << edit_distance(s, t);

	return 0;
}