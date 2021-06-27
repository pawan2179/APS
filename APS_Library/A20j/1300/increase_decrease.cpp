#include<iostream>
#include<algorithm>
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
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	if (sum % n == 0)    cout << n;
	else                cout << n - 1;
	return 0;
}