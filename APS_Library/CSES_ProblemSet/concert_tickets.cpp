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
	int n, m;
	cin >> n >> m;
	int ticket[n];
	int pay[m];

	for (int i = 0; i < n; i++)    cin >> ticket[i];
	for (int i = 0; i < m; i++)    cin >> pay[i];

	for (int j = 0; j < m; j++) {
		bool printed = false;
		for (int i = 0; i < n; i++) {
			if (ticket[i] <= pay[j]) {
				cout << ticket[i] << " ";
				ticket[i] = INT_MAX;
				printed = true;
				break;
			}
		}
		if (!printed)    cout << -1 << " ";
	}
	return 0;
}