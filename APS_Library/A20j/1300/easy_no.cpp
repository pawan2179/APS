#include<bits/stdc++.h>
using namespace std;

void init(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	init();
	int a, b, c;
	cin >> a >> b >> c;
	int n = a * b * c;
	int dp[n + 1] = {0};
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j += i)
			dp[j]++;
	}
	int ans = 0;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			for (int k = 1; k <= c; k++)
				ans += dp[i * j * k];
		}
	}
	cout << ans << endl;
	return 0;
}