#include<bits/stdc++.h>
using namespace std;

#define int long long int

void init(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main() {
	init();
	int n;
	cin >> n;

	int ans = 0;

	vector<int> perfect(n + 1, 0);
	for (int i = 2; i * i <= n; i++)    perfect[i * i] = 1;

	cout << ans << endl;
	return 0;
}