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
	int max = INT_MIN;
	int max_count = 0;
	int min = INT_MAX;
	int min_count = 0;

	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > max) {
			max = arr[i];
			max_count = 0;
			//max_count = 1;
		}
		if (arr[i] < min) {
			min = arr[i];
			min_count = 0;
			//min_count = 1;
		}
		if (arr[i] == min)    min_count++;
		if (arr[i] == max)    max_count++;
	}
	if (max != min) {
		cout << max - min << " " << (max_count * min_count) << endl;
	}
	else {
		cout << 0 << " " << (n * (n - 1) / 2) << endl;
	}
	return 0;
}