#include<bits/stdc++.h>
using namespace std;

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

int main() {
	init();
	int n;
	cin >> n;

	int dice[n + 1] = {0};
	dice[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 6 and i - j >= 0; j++) {
			dice[i] += dice[i - j];
			dice[i] %= MOD;
		}
	}
	cout << dice[n];
	return 0;
}