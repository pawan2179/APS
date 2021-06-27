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
	int min = INT_MAX;
	cin >> n >> m;

	int arr[m];

	for (int i = 0; i < m; i++)    cin >> arr[i];
	sort(arr, arr + m);

	for (int i = n - 1; i < m; i++) {
		if (arr[i] - arr[i - n + 1] < min) {
			min = arr[i] - arr[i - n + 1];
		}
	}
	cout << min;
	return 0;
}