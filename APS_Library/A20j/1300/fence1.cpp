#include<iostream>
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
	int n, k;
	cin >> n >> k;

	int temp;
	int cum_sum[n + 1];
	int min_sum = INT_MAX;
	int sum = 0;

	cum_sum[0] = 0;

	for (int i = 1; i <= n; i++) {
		cin >> temp;
		sum += temp;
		cum_sum[i] = sum;
	}

	int i = 0, j = k;
	while (j <= n) {
		if (cum_sum[j] - cum_sum[i] < min_sum) {
			min_sum = cum_sum[j] - cum_sum[i];
		}
		j++;
		i++;
	}
	cout << cum_sum;
	return 0;
}