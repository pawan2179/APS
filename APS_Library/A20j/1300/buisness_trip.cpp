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
	int k;
	int arr[12];
	int n = 12;

	cin >> k;
	for (int i = 0; i < 12; i++) {
		cin >> arr[i];
	}
	int ans = 0;
	int sum = 0;

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	while ((sum < k) && (ans < 12)) {
		sum += arr[ans];
		ans++;
	}
	if (sum < k) {
		cout << -1;
	}
	else    cout << ans;
	return 0;
}