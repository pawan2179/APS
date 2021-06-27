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
	//init();

	multiset<int> min;
	multiset<int, greater<int>> max;

	int n, m;
	cin >> n >> m;

	int x;
	for (int i = 0;  i < m; i++) {
		cin >> x;
		min.insert(x);
		max.insert(x);
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		x = *max.begin();
		ans += x;
		max.erase(max.lower_bound(x));
		x -= 1;
		if (x > 0)
			max.insert(x);
	}
	cout << ans << " ";
	ans = 0;
	for (int i = 0; i < n; i++) {
		x = *min.begin();
		ans += x;
		min.erase(min.lower_bound(x));
		x -= 1;
		if (x > 0)
			min.insert(x);
	}
	cout << ans;
	return 0;
}