#include<bits/stdc++.h>
using namespace std;

#define int long long
#define w(t) int t; cin>>t; while(t--)

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
	//init();
	int n;
	cin >> n;

	int spaces;
	int val;

	for (int i = 0; i <= n; i++) {
		spaces = 2 * (n - i);
		for (int j = 0; j < spaces; j++)    cout << " ";
		if (i == 0) {
			cout << 0 << endl;
			continue;
		}
		for (int j = 0; j <= i; j++)    cout << j << " ";

		for (int j = i - 1; j >= 0; j--) {
			if (j == 0) {
				cout << 0 << endl;
				break;
			}
			cout << j << " ";
		}
	}
	spaces = 2;
	val = n - 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < spaces; j++)    cout << " ";

		if (val == 0) {
			cout << 0;
			break;
		}
		for (int j = 0; j <= val; j++)      cout << j << " ";
		for (int j = val - 1; j > 0; j--)    cout << j << " ";
		cout << 0 << endl;
		val -= 1;
		spaces += 2;
	}

	return 0;
}