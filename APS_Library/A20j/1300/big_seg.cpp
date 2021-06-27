#include<iostream>
#include<climits>

using namespace std;

#define int long long

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
	int ans;
	int li, ri;
	int lm = INT_MAX;
	int rm = INT_MIN;
	int left_min = INT_MAX;
	int right_max = INT_MIN;

	for (int i = 0; i < n; i++) {
		cin >> li >> ri;
		if (li < left_min)    left_min = li;
		if (ri > right_max)    right_max = ri;

		if (li <= lm and ri >= rm) {
			lm = li;
			rm = ri;
			ans = i;
		}
	}

	if (lm <= left_min and rm >= right_max)    cout << ans + 1;
	else cout << -1;

	return 0;
}