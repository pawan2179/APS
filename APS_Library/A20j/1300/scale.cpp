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

	int n, m;
	int ans = 0;
	cin >> n >> m;

	int arr[n];

	for (int i = 0; i < n; i++)    cin >> arr[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0;  j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		if (arr[i] > 0)    continue;
		ans += (arr[i]);
	}
	cout << -1 * ans;
	return 0;
}