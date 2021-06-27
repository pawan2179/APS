#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int arr[n] = {0};
	int temp;
	int count = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> temp;
			arr[i] += temp;
		}
	}
	for (int i = 0;  i < n; i++)
		if (arr[i] >= 2)    count++;

	cout << count;
	return 0;
}