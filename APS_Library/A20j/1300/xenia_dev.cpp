#include<iostream>
using namespace std;

void init(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDEG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

bool solve(int *arr, int n) {
	int one_count = 0;
	int two_count = 0;
	int three_count = 0;
	int four_count = 0;
	int six_count = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] == 1)    one_count++;
		else if (arr[i] == 2)    two_count++;
		else if (arr[i] == 3)    three_count++;
		else if (arr[i] == 4)    four_count++;
		else if (arr[i] == 6)    six_count++;
		else    return false;
	}
	int first = 0;
	int second = 0;
	int third = 0;

	while (one_count and two_count and four_count) {
		first++;
		one_count--;
		two_count--;
		four_count--;
	}
	while (one_count and two_count and six_count) {
		second++;
		one_count--;
		two_count--;
		six_count--;
	}
	while (one_count and three_count and six_count) {
		third++;
		one_count--;
		three_count--;
		six_count--;
	}
	if (one_count != 0 or two_count != 0 or three_count != 0 or four_count != 0)    return false;
	while (first--)    cout << 1 << " " << 2 << " " << 4 << endl;
	while (second--)   cout << 1 << " " << 2 << " " << 6 << endl;
	while (third--)    cout << 1 << " " << 3 << " " << 6 << endl;

	return true;
}

int main() {
	//init();

	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)    cin >> arr[i];
	if (!solve(arr, n))    cout << -1;
	return 0;
}