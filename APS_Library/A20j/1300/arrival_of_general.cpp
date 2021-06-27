#include<iostream>
#include<vector>
using namespace std;

void preset(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int nC2(int n) {
	if (n == 0)    return 0;
	return (n * (n - 1) / 2);
}

int main() {
	preset();
	int n;
	int temp;
	cin >> n;

	vector<int> arr(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
	}

	int ans = 0;
	int max_val = INT_MIN;
	int max_ind = -1;

	for (int i = 0; i < n; i++) {
		if (arr[i] > max_val) {
			max_val = arr[i];
			max_ind = i;
		}
	}
	cout << max_ind << endl;
	arr[max_ind] = arr[0];
	arr[0] = max_val;

	ans += nC2(max_ind + 1);

	int min_val = INT_MAX;
	int min_ind = -1;

	for (int i = 0; i < n; i++) {
		if (arr[i] <= min_val) {
			min_val = arr[i];
			min_ind = i;
		}
	}
	cout << min_ind << endl;
	ans += nC2(n - min_ind);
	cout << ans;

	return 0;
}