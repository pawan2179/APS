#include<iostream>
using namespace std;

#define MAX 100005

void preset(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int get_count(int *arr, int d) {
	int count = 0;

	for (int i = 1; i <= d; i++) {
		if (i % arr[0] != 0 and i % arr[1] != 0 and i % arr[2] != 0 and i % arr[3] != 0)
			count++;
	}
	return count;
}

int main() {
	//preset();

	int k, l, m, n, d;
	int arr[4];

	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> d;

	cout << d - get_count(arr, d);
	return 0;
}