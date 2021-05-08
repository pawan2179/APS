#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n, greater<int>());
	int i = 0, j = 1;
	while (arr[i] == arr[j]) {
		j++;
	}
	if (j == n)    cout << -1;
	else          cout << arr[j];

	return 0;
}