#include<iostream>
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

int find_res(int *arr, int n, int k) {
	for (int i = k - 1; i < n - 1; i++) {
		if (arr[i] != arr[i + 1])    return -1;
	}
	int i = k - 1;
	while (arr[i] == arr[k - 1] and i >= 0)
		i--;
	return (i + 1 < k - 1) ? i + 1 : (k - 1);
}

int main() {
	//init();

	int n;
	int k;

	cin >> n >> k;
	int arr[n];

	for (int i = 0; i < n; i++)    cin >> arr[i];

	cout << find_res(arr, n, k);
	return 0;
}