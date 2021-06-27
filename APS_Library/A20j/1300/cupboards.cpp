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

int get_count(int *arr, int n) {
	int count = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] == 0)    count++;
	}
	//cout << "Count = " << count << endl;
	return count;
}

int min(int a, int b) {
	if (a < b)    return a;
	return b;
}

int main() {

	//preset();

	int n;
	cin >> n;
	int left_door[n];
	int right_door[n];

	int temp1;
	int temp2;

	for (int i = 0; i < n; i++) {
		cin >> temp1 >> temp2;
		left_door[i] = temp1;
		right_door[i] = temp2;
	}

	/*for (int i = 0; i < n; i++) {
		cout << left_door[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << right_door[i] << " ";
	}
	cout << endl;*/

	int ans = 0;

	int close = get_count(left_door, n);
	ans += min(close, n - close);

	close = get_count(right_door, n);
	ans += min(close, n - close);
	cout << ans;

	return 0;
}