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
	int n, x;

	cin >> n >> x;
	int arr[n];
	for (int i = 0; i < n; i++)    cin >> arr[i];
	sort(arr, arr + n);
	int i = 0, j = n - 1;
	int ans = 0;

	while (i <= j) {
		if (arr[j] + arr[i] <= x) {
			ans++;
			i++;
			j--;
		}
		else {
			ans++;
			j--;
		}
	}
	cout << ans;
	return 0;
}