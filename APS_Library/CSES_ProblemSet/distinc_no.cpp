#include<bits/stdc++.h>
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
	init();
	int n;
	cin >> n;
	set<int> arr;
	int temp;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		arr.insert(temp);
	}
	cout << arr.size();
	return 0;
}