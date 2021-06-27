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

	int x[n];
	int y[n];
	int x_sum = 0;
	int y_sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
		x_sum += x[i];
		y_sum += y[i];
	}
	if (x_sum % 2 == 0 and y_sum % 2 == 0)    cout << 0;
	else {
		int ans = -1;
		if (x_sum % 2 != 0 and y_sum % 2 != 0) {
			for (int i = 0; i < n; i++) {
				if ((x[i] % 2 == 0 and y[i] % 2 != 0) or (x[i] % 2 != 0 and y[i] % 2 == 0)) {
					ans = 1;
					break;
				}
			}
		}
		else ans = -1;
		cout << ans;
	}
	return 0;
}