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

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)    cin >> arr[i];

	int val;
	int min = INT_MAX;
	int min_pos1 = -1;
	int min_pos2 = -1;

	for (int i = 0; i < n; i++) {
		val = abs(arr[i % n] - arr[(i + 1) % n]);
		if (val < min) {
			min = val;
			min_pos1 = i;
			min_pos2 = (i + 1) % n;
		}
	}
	cout << min_pos1 + 1 << " " << min_pos2 + 1;
	return 0;

}