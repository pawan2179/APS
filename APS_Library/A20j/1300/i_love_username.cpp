#include<iostream>
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

int main() {
	//preset();

	int n;
	int min_val = INT_MAX;
	int max_val = INT_MIN;
	int ans = 0;
	int temp;

	cin >> n;
	cin >> temp;

	min_val = temp;
	max_val = temp;

	for (int i = 0; i < n - 1; i++) {
		cin >> temp;
		if (temp < min_val) {
			ans++;
			min_val = temp;
		}
		else if (temp > max_val) {
			ans++;
			max_val = temp;
		}
	}
	cout << ans << endl;
	return 0;
}